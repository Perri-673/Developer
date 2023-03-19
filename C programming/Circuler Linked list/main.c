#include<stdio.h>
#include<stdlib.h>
struct node{
    int ele;
    struct node *next;
}*head,*tail,*temp;
void init(){
    head=tail=NULL;}
void create(int ele){
    struct node *new1;
    new1=(struct node *)malloc(sizeof(struct node));
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
    while(temp!=NULL){
        if(temp->ele==ele)
            return temp;
        temp=temp->next;}
    return NULL;}
int main(){
    init();
    for(int i=1;i<=8;i++){
        create(i);}
    struct node *a;
    a=(struct node *)(malloc(sizeof(struct node *)));
    a=search(3);
    tail->next=a;
    temp=head;
    int b=0;
    while(temp!=NULL){
        if(temp==tail->next){
            printf("Linked List is having a loop.\n");
            b=1;
            break;}
        temp=temp->next;}
    if(b==0){
        printf("Linked List is not having a loop.\n");}
    return 0;}
