/*#include <stdio.h>
void pattern(int n,int n1){
    int k=0;
    int count=0;
    for(int i=0;i<n1;i++){
        printf("%d\t",n-i);
        count=count+1;
        if(i==(n1-1))
            k=n-i;}
    int constant=2*n-1;
    int c1=constant-(2*count);
    for(int i=1;i<=c1;i++){
        printf("%d\t",k);}
    if(k!=1){
    for(int i=k;i<=n;i++){
        printf("%d\t",i);}}
    else{
        for(int i=k+1;i<=n;i++){
            printf("%d\t",i);}}}
int main(){
    printf("Hello world\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        pattern(n,i);
        printf("\n");}
    for(int i=n-1;i>=1;i--){
        pattern(n,i);
        printf("\n");}
    return 0;}*/
#include <stdio.h>

int main(void) {
    // your code goes here
    int n,i,j,k;
    scanf("%d",&n);
    int total=0;
    for(int l=0;l<n;l++){
        scanf("%d",&i);
        scanf("%d",&j);
        scanf("%d",&k);
        total=(i-j)+k;
        printf("%d\n",total);
    }
    return 0;
}

