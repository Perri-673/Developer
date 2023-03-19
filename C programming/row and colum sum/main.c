#include <stdio.h>
#include<string.h>
int main(int argc, const char * argv[])
/*{
    int a[5][5]={{5,6,7,8,9},{10,11,12,13,14},{15,16,17,18,19},{20,21,22,23,24},{25,26,27,28,29}},s=0;
    for(int i=0;i<5;i=i+1){
        s=0;
        for(int j=0;j<5;j=j+1){
            s=s+a[i][j];}
        printf("R:%d\n",s);}
    for(int i=0;i<5;i=i+1){
        s=0;
        for(int j=0;j<5;j=j+1){
            s=s+a[j][i];}
        printf("C:%d\n",s);}
    return 0;
}*/

{
    char s[20];char s1[20];
    printf("hi");
    gets(s);
    gets(s1);
    int x=strcmp(s,s1);
    printf("%d",x);
}
