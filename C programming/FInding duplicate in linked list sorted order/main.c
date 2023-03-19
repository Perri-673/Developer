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
struct node *search(int ele){
    temp=head;
    while(temp->next!=NULL){
        if(temp->ele=ele)
            return temp;
        temp=temp->next;}
    return NULL;}
int main(){
    int n;
    printf("Enter Number of elements to be stored in linked list:");
    scanf("%d",&n);
    init();
    for(int i=0;i<n;i++){
        create();}
    printf("Intial Linked List:\n");
    display();
    struct node *temp1;
    struct node *temp2;
    temp1=head;
    while(temp1->next!=NULL){
        if(temp1->ele==temp1->next->ele){
            temp2=temp1->next->next;
            free(temp1->next);
            temp1->next=temp2;}
        else{
            temp1=temp1->next;}}
    printf("\n");
    printf("Linked List After Removing Duplicates:\n");
    display();
    return 0;}
