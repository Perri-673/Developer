#include<stdio.h>
int main(){
int id,u;
scanf("%d",&id);
scanf("%d",&u);
if(0<=u & u<=200){
printf("Electricity Amount to be paid is:%.2f",u*0.50);}
else if(201<=u & u<=400){
printf("Electricity Amount to be paid is:%.2f",100.00+((u-200)*0.65));}
else if(401<=u & u<=600){
printf("Electricity Amount to be paid is:%.2f",230.00+((u-400)*0.80));}
else{
printf("Electricity Amount to be paid is:%.2f",390.00+((u-600)*0.15));}
return 0;}
