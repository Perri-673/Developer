#include <stdio.h>
int main() {
    int n;
    printf("Hello, World!\n");
    printf("Enter Number:");
    scanf("%d",&n);
    int c=(2*n)-(1);
    for(int i=1;i<=c;i++){
        if(i==n)
            printf("*");
        else
            printf(" ");}
    printf("\n");
    for(int j=1;j<n;j++){
        for(int i=1;i<=c;i++){
            if(i==n+j||i==n-j)
                printf("*");
            else
                printf(" ");}
        if(j!=n)
            printf("\n");}
    for(int j=1;j<n;j++){
        for(int i=1;i<=c;i++){
            if(i==j+1||i==c-j)
                printf("*");
            else
                printf(" ");}
        printf("\n");}
    return 0;}
