#include <stdio.h>
void merge(int a[],int p,int q,int r){
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int left[n1];int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[p+i];}
    for(int j=0;j<n2;j++){
        right[j]=a[q+j+1];}
    int k=p;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i++];}
        else{
            a[k]=right[j++];}
        k++;}
    while(i<n1){
        a[k]=left[i++];
        k++;}
    while(j<n2){
        a[k]=right[j++];
        k++;}}
void merge_sort(int a[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);}}
int main(){
    int n;
    printf("Enter Number of Elements in Array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter Array Elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);}
    merge_sort(a,0,n-1);
    printf("Sorted Array:\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);}
    printf("\n");
    return 0;}
