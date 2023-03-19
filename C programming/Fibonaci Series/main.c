#include <stdio.h>
/*int f(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return f(n-1)+f(n-2);}
int main() {
    int n;
    printf("Enter the number of elements in fibbonaci Series:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d\t",f(i));}
    return 0;}*/
#include <stdio.h>
void las(int a[],int len,int*small,int*large){
    *small=*large=a[0];
    for(int i=1;i<len;i++){
        if(a[i]>*large)
            *large=a[i];
        if(a[i]<*small)
            *small=a[i];}}
int main() {
    int a[]={13,35,6,88,78,65,2,100};
    int small;int large;
    int len=sizeof(a)/sizeof(a[0]);
    las(a,len,&small,&large);
    printf("The small:%d\nThe large:%d\n",small,large);
    return 0;}
