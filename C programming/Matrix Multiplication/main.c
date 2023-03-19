#include <stdio.h>
int main() {
    int r1,r2,c2,c1;
    printf("Enter First Matrix Rows and Columns:");
    scanf("%d %d",&r1,&c1);
    printf("Enter Second Matrix Rows and Columns:");
    scanf("%d %d",&r2,&c2);
    int a1[r1][c1];
    printf("Enter Elements of First Matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a1[i][j]);}}
    int a2[r2][c2];
    printf("Enter Elements of Second Matrix:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&a2[i][j]);}}
    /*for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("Elements of First Matrix:%d\n",a1[i][j]);}}
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("Elements of Second Matrix:%d\n",a2[i][j]);}}*/
    int s=0;int r[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<r2;k++){
                s=s+a1[i][k]*a2[k][j];}
            r[i][j]=s;
            s=0;}}
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d\t",r[i][j]);}
        printf("\n");}
    return 0;}

