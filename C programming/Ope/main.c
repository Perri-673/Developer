#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,e,g;
    double h;
    float f,i,j;
    printf("Enter the two numbers:");
    scanf("%d%d",&a,&b);
    i=a;
    j=b;
    c=a+b;
    d=a-b;
    e=a*b;
    f=i/j;
    g=a%b;
    h=pow(a,b);
    printf("Sum of %d and %d:%d\n",a,b,c);
    printf("Differance of %d and %d:%d\n",a,b,d);
    printf("Product of %d and %d:%d\n",a,b,e);
    printf("Quationt of %d and %d:%f\n",a,b,f);
    printf("Reminder of %d and %d:%d\n",a,b,g);
    printf("Power of %d and %d:%lf\n",a,b,h);
    return 0;
}
