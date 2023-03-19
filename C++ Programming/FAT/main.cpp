#include <iostream>
#include<math.h>
using namespace std;
//Code:1
/*int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int a[4];
    int l,i=0;
    while(n>0){
        l=n%10;
        a[i]=l;
        i=i+1;
        n=n/10;}
    for(int i=0;i<4;i++){
        if(a[i]==8){
            a[i]=a[i];}
        else if(a[i]==9)
            a[i]=1;
        else{
            a[i]=a[i]+2;}}
    for(int i=3;i>=0;i--){
        cout<<a[i];}
    return 0;}*/
//code:2
/*int main(){
    for(int j=100;j<=500;j++){
    int a[3];
    int n=j,i=0;
    //cout<<"Enter the number:";
    //cin>>n;
    int f=n;
    while(n>0){
        int l=n%10;
        a[i]=l;
        i=i+1;
        n=n/10;}
    int s=0;
    for(int i=0;i<3;i++){
        s=s+pow(a[i],3);}
    if (s==f){
        cout<<s<<endl;
    }}
}*/
//Fibonacci
/*int F(int n){
    if (n<=1){
        return n;}
    return F(n-1)+F(n-2);}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<F(n);
}*/

