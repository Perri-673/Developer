

#include <stdio.h>
int main()
/*{
    int base, exponent, expo, power=1;
    double power1=1.0;
    printf("Enter the base:");
    scanf("%d", &base);
    printf("Enter the exponent:");
    scanf("%d", &exponent);
    
    expo = exponent;
    if(exponent > 0)
    {
        while(exponent!=0)
        {
            power=power*base;
            exponent--;
        }
        printf("the power of the given base and exponent is: %d", power);
        }
        else
        {
        while(exponent !=0)
        {
            power1 = power1*(1.0/base);
            exponent++;
        }
        printf("The power of the given base and exponent is:%.10f ", power1);
}
        return 0;
}*/

/*{int a,b,e=1;
    double e1=1;
    printf("Enter the base");
    scanf("%d",&a);
    printf("Enter the exponent");
    scanf("%d",&b);
    if(b>0){
        for(int i=1;i<=b;i=i+1){
            e=e*a;}}
    else if(b<0){
        for(int i=1;i<=-b;i=i+1){
            e1=e1*a;}
        e1=1/e1;}
    if(b>0)
        printf("%d",e);
    else
        printf("%.3lf",e1);
    return 0;
}*/



{
        int a,b,e=1;double e1=1;
        printf("Enter the base:");
        scanf("%d",&a);
        printf("Enter the exponent:");
        scanf("%d",&b);
        if(b>0){
            for(int i=0;i<b;i=i+1){
                e=e*a;}}
        else if(b<0){
            for(int i=0;i<-b;i=i+1){
                e1=e1*a;}
            e1=1/e1;}
        else{
            e=0;}
        if(b>0){
            printf("The power of the given base and exponent is: %d",e);}
        else if(b==0){
            printf("The power of the given base and exponent is: 1");}
        else{
            printf("The power of the given base and exponent is: %.3lf",e1);}
        return 0;
    }
