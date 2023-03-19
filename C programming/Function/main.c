#include <stdio.h>
#include<string.h>
int fact(int);
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;}
    return f;}
int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int x=fact(n);
    printf("%d\n",x);
    return 0;}
