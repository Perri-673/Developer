#include <stdio.h>

int main()
/*{
    printf("Enter NUmber:");
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {printf("Even\n");}
    else
    {printf("Odd\n");}
    return 0;*/
    

/*{
int a=2,b=3,c,d,e;
c=a++ + b--;
printf("%d\n%d\n",c,b);
d=a-- + ++b;
e=++a + --b;
printf("%d,%d\n",a,b);
return 0;
}*/


/*{
int n;
printf("Enter the number:");
scanf("%d", &n);
if (n % 2 == 0)
printf("The number is even %d", n);printf("The number is odd%d", n);
else
printf("The code is for even and odd number");
}*/

/*{
int a,b,c;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
printf("Enter the third number:");
scanf("%d",&c);
if (a>b)
{if (a>c)
{printf("%d is the greatest number.\n",a);}
else
{if (c>b)
{printf("%d is the greatest number.\n",c);}}}
else
{if(b>c)
{printf("%d is the greatest number\n",b);}
else
{if (c>a)
{printf("%d is the greatest number.\n",c);}}}
if (a==b)
{if (a==c)
{printf("%d is the greatest number.\n",a);}}
return 0;
}*/



/*{int a;
printf("Enter the number:");
scanf("%d",&a);
switch (a)
{case 0:
printf("zero");
break;
case 1:
printf("One");
break;
default:
printf("Enter 1 or 0");
case 2:
printf("hello");
break;
return 0;
}}*/

/*{
short int i = 1;
while (1)
{
printf("i: %d \n", i);
++i;
}
    return 0;
}*/


/*{int i,a,s=0;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<a;i=i+1)
{if (a%i==0)
s=s+i;}
//printf("%d",s);
if (s==a){
printf("%d is a perfect number.\n",a);}
else
printf("%d is not a perfect number.\n",a);}*/
{   int a,b;
    char ch;
    
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the symbol{+,-,*,/,%%}:");
    scanf("%c",&ch);
    if(ch=='+')
        printf("Sum of the numbers is %d\n",a+b);
    else if(ch=='-')
        printf("Difference of the numbers is %d\n",a-b);
    else if(ch=='*')
        printf("Product of the numbers is%d\n",a*b);
    else if(ch=='/')
        printf("Quotient of the two numbers is%d\n",a/b);
    else if(ch=='%')
        printf("Reminder of the two numbers is %d\n",a%b);
    else
        printf("Invalid operator\n");
    return 0;
    }


/*
{int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2==0)
        goto even;
    else
        goto odd;
even:
    printf("%d is even.",a);
    exit(0);
odd:
    printf("%d is odd.",a);
    exit(0);
    return 0;
    
}*/


/*{ int n=1;
loop:
    printf("%d\n",n);
    n=n+1;
if (n<=10)
    goto loop;
    return 0;
}*/


