#include <stdio.h>
#include <string.h>
struct s{
    int sp;
    char st[100];
}s;
void init(){
    s.sp=-1;
}
void push(char ch){
    s.st[++s.sp]=ch;
}
char pop(){
    return s.st[s.sp--];
    
}
int precedence(char c){
    switch(c){
        case '*':
        case '/':
        case '%':return 3;
        case '+':
        case '-':return 2;
        default :return 1;
        }
}
void int2post(char in[]){
    char postfix[100];
    int p=0;
    for(int i=0;in[i]!='\0';i++){
        char ch=in[i];
        if(ch>='A' && ch<='Z'){
            postfix[p++]=ch;}
        else if(ch=='('){
            push(ch);}
        else if(ch==')'){
            char c=pop();
            while(c!='('){
                postfix[p++]=c;
                c=pop();
            }}
        else{
            char tos=s.st[s.sp];
            if(precedence(ch)<precedence(tos)){
                while(precedence(ch)<precedence(tos)){
                    postfix[p++]=pop();
                    tos=s.st[s.sp];}}
            push(ch);}}
    while (s.st[s.sp]!='#'){
        postfix[p++] = pop();}
    postfix[p]='\0';
    printf("Postfix Expression :");
    printf("%s",postfix);
}
int main() {
    init();
    push('#');
    printf("Hello, World!\n");
    char s[100];
    printf("Enter Infix Epression");
    scanf("%s",s);
    int2post(s);
    return 0;
    
}
