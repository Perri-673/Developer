#include <stdio.h>
/*int main() {
    int a[2][2]={{10,20},{30,40}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d\n",*(*(a+i)+j));}}
    return 0;}*/

/*int swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\n The value after swapping is %d %d",*a,*b);
    return 0;}
int main(){
    int x=5,y=10;
    printf("\n The value before swapping:%d %d",x,y);
    swap(&x,&y);
    printf("\n The value after swapping:%d %d",x,y);
    printf("\n The value after swapping is:%d %d",x,y);
    return 0;}*/
/*int main(){
    char c[]="GATE2011";
    char*p=c;
    int a=&p[3]-&p[1];
    printf("%c",p[a]);
}*/

/*void swap (int *x, int *y){
    static int *temp;
    temp = x;
    x=y;
    y=temp;}
void rintabc(){
    static int i, a=-3, b=-6;
    i=0;
    while(i<=4){
        if((i++) % 2==1) continue;
        a = a+i;
        b= b+i;}
    printf("%d %d",a,b);
    //swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);}
int main() {
rintabc();
rintabc();
    printf("%d",0%2);
}*/

/*int main(){
    int i,j;
    char a[2][3]={{'a','b','c'},{'d','e','f'}};
    char b[3][2];
    char *p=*b;
    for (i=0; i<2; i++){
        for(j=0; j<3; j++){
            *(p+2*j+i)=a[i][j];}}
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%c\t",a[i][j]);}
        printf("\n");}
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%c\t",b[i][j]);}
        printf("\n");
    }
    return 0;}*/

/*void swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
    printf("After swap:%d %d\n",*a,*b);}
void main(){
    int x=5, y=10;
    printf("Before swapping: %d %d\n", x, y);
    swap(&x, &y);
    printf("after swapping:%d %d\n", x, y);}*/
/*int a[5];
void main(){
    int a[5]={1,2};
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);}}*/

#include <stdio.h>
#include<string.h>
/*
int main() {
    for(int i=0;i<20;i++){
        switch(i){
            case 0:i+=5;
            case 1:i+=2;
            case 5:i+=5;
            default:i+=4;
        }
        printf("%d\n",i);
    }}*/
/*void f(int*p,int*q){
    p=q;
    *p=2;
}
int i=0,j=1;
int main(){
    f(&i,&j);
    printf("%d %d",i,j);
}*/
/*int main(){
    printf("%d",printf("%s","VIT VELLORE !!"));
    return 0;}*/

/*int main(){
    int a=1;
    int b=1;
    
    int c=++a||b++;
    
    int d=b--&&--a;
    printf("%d %d %d %d",d,c,b,a);
}*/

/*void fun1(int n){
    
    if(n>1)
        fun1(n-1);
    for(int i=0;i<n;i++){
        printf("*");
    }
}
int main(){
    fun1(3);
}*/

/*int main(){
    char s1[7]="1234",*p;
    char s2[7];
    p=s1+s2;
    *p='0';
    printf("%s",s1);
}*/
/*void f1(int a, int b)
{
    int c;
    c=a; a=b; b=c;
}
void f2( int*a, int*b)
{
    int c;
    c=*a; *a=*b; *b=c;
}
int main()
{
    int a=4, b=5, c=6;
    f1(a,b);
    f2(&b,&c);
    printf("%d",c-a-b);
    return 0;
}*/

/*int main(){
    int i=5;
    int var=sizeof(i++);
    printf("%d %d",i,var);
    int c=i++;
    printf("%d",c);
    printf("%d",c);
}*/

/*int main(){
    unsigned i=1;
    int j=-4;
    printf("%u",i+j);
}*/
/*int fun(){
    static int num=16;
    return num--;}

int main(){
    //printf("%d",fun());
    //printf("%d",fun());
    for(fun();fun();fun()){
        printf("%d\n",fun());
    }
}*/
/*void get(int n){
    if(n<1)return;
    get(n-1);
    get(n-3);
    printf("%d",n);}
int main(){
    get(6);
}*/

/*int main(){
    char*c="VITVELLO2017";
    char*p=c;
    printf("%d",(int)strlen(c+2[p]-6[p]-1));
    return 0;
}*/

/*int main(){
    int i=1024;
    for(;i;i>>=1){
        printf("HW\n");
    }
}*/

int main(){
    int i=4;
    switch(i){
        default:
            printf("Hi");
        case 1:
            printf("FF");
            break;
        case 2:
            printf("GG");
            break;
        case 3:
            printf("HH");
    }}
