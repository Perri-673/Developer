#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    int s=0,l,i=0,i1=0,c=0;
    int b[100];
    while(a>0){
        l=a%2;
        c=c+1;
        b[i]=l;
        a=a/2;
        i=i+1;}
    for(int i=c-1;i>=0;i--){
        s=s+(b[i]*pow(2,i1));
        i1=i1+1;}
     cout<<s;
    return 0;
}
