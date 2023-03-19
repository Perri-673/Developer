#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack{
    int sp;
    int st[SIZE];
}s;

void init(){
    s.sp=-1;}
int isFULL(){
    if(s.sp==SIZE-1)
        return 1;
    else
        return 0;}
int isEMPTY()
{
    if(s.sp==-1)
        return 1;
    else
        return 0;}
void push(int ele){
    if(isFULL())
        printf("Overflow");
    else
        s.st[++s.sp]=ele;}
int pop(){
    if(isEMPTY()){
        printf("Underflow");
        return 0;}
    else
        return(s.st[s.sp--]);}
int main() {
    int ch;
    int ele;
    printf("Hello, World!\n");
    init();
    while(1){
        printf("\n----------------");
        printf("\n1:PUSH");
        printf("\n2:POP");
        printf("\n3:Is Full?");
        printf("\n4:Is Empty?");
        printf("\n5:Exit");
        printf("\n----------------");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter Element to push");
                scanf("%d",&ele);
                push(ele);
                break;
            case 2:
                printf("%d",pop());
                break;
            case 3:
                isFULL()?printf("\n FULL"):printf("\n No");
                break;
            case 4:
                isEMPTY()?printf("\n EMPTY"):printf("\n No");
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Choice");
                break;}}
    return 0;}
