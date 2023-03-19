#include <stdio.h>
int main(){
    int n;
    printf("Enter Number of Elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    int key;int j;
    for(int i=0;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j=j-1;}
        a[j+1]=key;}
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);}
    printf("\n");
    return 0;}
