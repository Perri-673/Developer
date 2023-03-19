#include <stdio.h>
int main(){
  printf ("Hello World\n");
  int n;
  printf ("Enter the number of elements in array:");
  scanf ("%d",&n);
  int arr[n];
  printf ("Enter the array elements:");
  for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);}
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);}
  int n1;
  printf("Enter the element to be searched:");
  scanf("%d",&n1);
  int high,low,key,mid;
  key=n1;
  high=n-1;
  low=0;
  while(high>=low){
      mid=(low+high)/2;
      if(arr[mid]==key){
      printf("You are Lucky");
      break;}
      else if(arr[mid]>key)
        high=mid-1;
      else
        low=mid+1;}
  return 0;}
