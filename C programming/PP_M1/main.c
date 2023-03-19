#include <stdio.h>
#include<math.h>
//#include<string.h>
/*int main() {
    int a,i,b=0;
    printf("Enter the number:");
    scanf("%d",&a);
    for(i=2;i<=a;i=i+1){
        if(a%i==0 && a!=i){
            if(i!=a){
                break;}}
        else{
            if(i==a){
                printf("%d is a prime number\n",a);
                b=1;}}}
    if(b==0)
        printf("%d is not a prime number\n",a);
    return 0;
}*/
/*{ int a,i,b=0;
    printf("Enter the number:");
    scanf("%d",&a);
    
    printf("%d\n",a);
    for(i=2;i<=ceil(sqrt(a));i=i+1){
        if(a%i==0){
            b=1;
            break;}}
    if(b==1)
        printf("Not prime\n");
    else
        printf("prime\n");
    return 0;
}*/

/*{int a,b,s1=1,s2=0,l,i;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a;
    while(a>0){
        l=a%10;
        printf("%d\n",l);
        for(i=1;i<=l;i=i+1){
            printf("%d",i);
            s1=s1*i;
            printf("%d",s1);
        }
        printf("%d\n",s1);
        s2=s2+s1;
        a=a/10;
        s1=1;
    }
    printf("%d\n",s2);
    if(s2==b)
        printf("Strong");
    return 0;
    
}*/
int main(){
    char name[100];
    int c=0;
    printf("Enter name:");
    gets(name);
    puts(name);
    for(int i=0;i<100;i++){
        if(name[i]="e"){
            c=c+1;}}
    printf("%d",c);
    return 0;}
    


