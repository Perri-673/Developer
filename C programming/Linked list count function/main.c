#include<stdio.h>
#include<stdlib.h>
struct node{
    int ele;
    struct node *next;
}*head,*tail,*temp;
void init(){
    head=tail=NULL;}
void create(){
    struct node *new1;
    new1=(struct node *)malloc(sizeof(struct node));
    int ele;
    printf("Enter the element:");
    scanf("%d",&ele);
    if(head==NULL){
        head=new1;
        head->ele=ele;
        head->next=NULL;
        tail=head;}
    else{
        new1->ele=ele;
        new1->next=NULL;
        tail->next=new1;
        tail=new1;}}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("|%d->%hx|",temp->ele,temp->next);
        temp=temp->next;}}
int count(int n){
    temp=head;
    int count =0;
    while(temp!=NULL){
        if(temp->ele==n){
            count++;}
        temp=temp->next;}
    return count;}
int main(){
    int n;
    printf("Enter Number of elements to be stored in linked list:");
    scanf("%d",&n);
    init();
    for(int i=0;i<n;i++){
        create();}
    printf("Intial Linked List:\n");
    display();
    int n1;
    printf("\nEnter the element:");
    scanf("%d",&n1);
    int v=count(n1);
    printf("The frequency of the element is: %d\n",v);
    return 0;}
