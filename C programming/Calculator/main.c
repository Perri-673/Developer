#include <stdio.h>
/*# define ops 4
float add(float a,float b){
    return a+b;}
float sub(float a,float b){
    return a-b;}
float multi(float a,float b){
    return a*b;}
float divi(float a,float b){
    return a/b;}
int main(){
    float(*fun[ops])(float,float)={add,sub,multi,divi};
    float a,b;
    printf("Enter the symbol +,-,*,/:");
    int c;
    scanf("%d",&c);
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    switch(c){
        case '+':
            printf("The addition of %d and %d is %d",a,b,add(a,b));break;
        case '-':
            printf("The subtraction of %d and %d is %d",a,b,sub(a,b));break;
        case '*':
            printf("The multiplication of %d and %d is %d",a,b,multi(a,b));break;
        case '/':
            printf("The division of %d and %d is %d",a,b,divi(a,b));break;
        default:
            printf("%c is a invalid Operator",c);break;
    }
    printf("%f",fun[c](a,b));
    return 0;}*/

/*struct std{
    char na;
    int a;};
int main(){
    struct std s;
    s.na='h';
    s.a=34;
    printf("%c %d",s.na,s.a);}*/

#include <stdio.h>
struct stud{
    int regno;
    char name[20];
    int m[6];
    int total;};
int main(){
    struct stud s[60];
    int n;
    printf("\nEnter the number of students:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("\nEnter the student %d details:\n",i+1);
        printf("\nEnter the reg no:\n");
        scanf("%d",&s[i].regno);
        printf("\nEnter the name:\n");
        scanf("%s",&s[i].name);
        printf("\nEnter the marks:\n");
        for(int j=0;j<6;j++){
            scanf("%d",&s[i].m[j]);}}
    for(int i=0;i<n;i++){
        s[i].total=0;
        for(int j=0;j<6;j++){
            s[i].total=s[i].total+s[i].m[j];}}
    for(int i=0;i<n;i++){
        printf("\nThe student %d details are:",i+1);
        printf("\nReg no of student:%d",s[i].regno);
        printf("\nName of student:%s",s[i].name);
        printf("\nTotal marks of student:%d\n",s[i].total);}
    return 0;}
