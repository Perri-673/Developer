//
//  main.c
//  Charint
//
//  Created by Perrichiappan Annamalai on 21/02/22.
//

#include <stdio.h>
#include<limits.h>

/*int main() {
    // insert code here...
    char ch;
    printf("Input the character:");
    scanf("%c",&ch);
    printf("%d",SHRT_MAX);
    return 0;
}*/

int p(int n){
    int c=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            printf("%d",i);c=c+i;}}
    if (c==n){
        return 1;}
    else
        return 0;}
int main(){
    //for(int j=1;j<=1000;j++){
    int n;
    scanf("%d",&n);
    if(p(n)==1){
        printf("%d",n);
        printf("\n");}
    return 0;
}
