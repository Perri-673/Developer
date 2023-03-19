#include <stdio.h>
struct stack{
    int sp;
    char st[100];
}s;
void init(){
    s.sp=-1;
}
void push(char c){
    s.st[++s.sp]=c;}
char pop(){
    return s.st[s.sp--];
}
int convert(char c){
    int n=0;
    if(c=='0'){
        n=0;}
    else if(c=='1'){
        n=1;}
    else if(c=='2'){
        n=2;}
    else if(c=='3'){
        n=3;}
    else if(c=='4'){
        n=4;}
    else if(c=='5'){
        n=5;}
    else if(c=='6'){
        n=6;}
    else if(c=='7'){
        n=7;}
    else if(c=='8'){
        n=8;}
    else{
        n=9;}
    return n;}
int main() {
    printf("Hello, World!\n");
    printf("%d",convert('0'));
    char str[100];
    printf("Enter the infix expression:");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch>='A' && ch<='Z'){
            push(ch);}
        else if(ch=='+' || ch=='-'|| ch=='*'|| ch=='/'){
            if(ch=='+'){
                int n=s.st[s.sp]+s.st[s.sp-1];
                s.sp--;
                push(n);}
            if(ch=='-'){
                int n=s.st[s.sp]-s.st[s.sp-1];
                s.sp--;
                push(n);}
            if(ch=='*'){
                int n=s.st[s.sp]*s.st[s.sp-1];
                s.sp--;
                push(n);}
            else{
                int n=s.st[s.sp]/s.st[s.sp-1];
                s.sp--;
                push(n);
            }
        }
        
    }
    return 0;
}
