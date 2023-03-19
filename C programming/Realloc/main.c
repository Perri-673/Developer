
/*int main() {
    int*x;
    x=(int*)malloc(2*sizeof(int));
    printf("Enter the number:");
    for(int i=0;i<2;i++){
        scanf("%d",x);
        x++;}
    x=(int*)realloc(x,4*sizeof(int));
    printf("Enter the number:");
    for(int i=2;i<4;i++){
        scanf("%d",x);
        x++;}
    printf("Enter the number:");
    for(int i=0;i<4;i++){
        printf("%d",*x);
        x++;}
    return 0;}*/

/*int main(){
    char c[]="GATE2011";
    char*p=c;
    printf("%s",p+p[3]-p[1]);
}*/


/*int main() {
    int a,b;
    printf("Enter the range:");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int c=i;
        int k=i;
        int s=0;
        while(k>0){
            int l,f;
            f=1;
            l=k%10;
            for(int j=1;j<=l;j++){
                f=f*j;}
            s=s+f;
            k=k/10;}
        if(c==s){
            printf("%d is a strong Number\n",c);}}
    return 0;}*/

/*int main() {
    int a,b;
    printf("Enter the range:");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        int k=i;
        int s=0;
        for(int j=1;j<k;j++){
            if(k%j==0){
                s=s+j;}}
        if(s==k){
            printf("%d is a perfect number\n",k);}}
    return 0;}*/

#include<stdio.h>
/*int main(){
    int x=10;
    int *y;
    y=&x;
    printf("X %d\n",x);
    printf("AX %d\n",&x);
    printf("Y %d\n",y);
    printf("Y %d\n",*y);
    printf("AY %d\n",&y);
    printf("%d",sizeof(y));
    return 0;
    
 }*/

int main(){
    int i,j;
    int a[8]={1,2,3,4,5,6,7,8};
    for(i=0;i<3;i++){
        a[i]=a[i]+1;
        i++;}
    i--;
    printf("%d\n",i);
    printf("%d\n",i);
    for(j=7;j>4;j--){
        printf("%d\n",j);
        int i=j/2;
        printf("%d\n",i);
        a[i]=a[i]-1;
        printf("%d h\n",i);
    }
    printf("%d\n",i);
    printf("%d %d\n",i,a[i]);
    int b=5/2;
    printf("%d\n",b);
    return 0;}

   
