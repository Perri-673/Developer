# include <stdio.h>
/*int main (){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int a[n+1],i,j,k,l,d,m,b[n],z;
    printf("Enter the array element:");
    for(i=0;i<n;i=i+1){
        
        scanf("%d",&a[i]);}
    for(z=0;z<n;z=z+1){
        b[z]=a[z];
    }
    printf("Enter the element:");
    scanf("%d",&k);
    printf("Enter the location of the element:");
    scanf("%d",&l);
    d=a[l];
    a[l]=k;
    for(m=l+1;m<n+1;m=m+1){
        a[m]=b[m-1];}
    for(j=0;j<n+1;j=j+1){
        printf("%d\n",a[j]);}
    return 0;}*/

int main() {

    int arr[100];
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    int arr1[100];
    for(int i=0;i<101;i=i+1){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }int loc;
    printf("Enter location:");
    scanf("%d",&loc);
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    for(int i=loc;i<n+1;i++){
        arr[i+1]=arr1[i];
    }arr[loc]=value;
    for(int i=0;i<n+1;i++){
        printf("%d\n",arr[i]);
    } return 0;
}
