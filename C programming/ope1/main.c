#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the two numbers:");
    scanf("%d%d",&x,&y);
    printf("\n%d",x&y);
    printf("\n%d",x|y);
    printf("\n%d\n",~x);
    return 0;
}
