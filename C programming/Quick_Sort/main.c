#include <stdio.h>
void swap(int *s,int *t){
    int temp=*s;
    *s=*t;
    *t=temp;}
int partition(int a[],int p,int r){
    int pivot=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(a[j]<=pivot){
            i=i+1;
            swap(&a[i],&a[j]);}}
        i=i+1;
        swap(&a[i],&a[r]);
        return i;}
void quicksort(int a[],int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);}}
int main(){
    int n;
    printf("Enter Number of Elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    quicksort(a,0,n-1);
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);}
    printf("\n");
    return 0;}
