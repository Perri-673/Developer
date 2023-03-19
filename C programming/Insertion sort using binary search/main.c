/*#include <stdio.h>
int binary_search(int a[],int n,int high,int low,int key){
    int mid;
    while(high>=low){
        mid=(low+high)/2;
        if(a[mid]==key){
            return mid;
            break;}
        else if(a[mid]>key)
            high=mid-1;
        else
            low=mid+1;}
    return 1;}

int main(){
    int a[5]={1,4,3,2,5};
    printf("%d",binary_search(a, 5, 4, 0, 2));*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int j=n;j>=1;j--){
        for(int i=n;i>=1;i--){
            if(i==j)
                printf("%d\t",i);
            else
                printf("%d\t",(n+1)-i);}
        
    return 0;
}

/*int main(){
  int n,key,j;
  printf("Enter the number of elements in array:");
  scanf("%d",&n);
  int arr[n];
  printf ("Enter the array elements:");
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);}
  for(int i=1;i<n;i++){
      key=arr[i];
      j=i-1;
      int loc=binary_search(arr,n,n-1,0,key);
      while(loc<=j){
          arr[j+1]=arr[j];
          j=j-1;}
      arr[j+1]=key;}
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);}
  return 0;}*/

