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
    int b=0;
    while(temp!=head || b==0){
        printf("|%d->%hx|",temp->ele,temp->next);
        temp=temp->next;
        b=1;
    }}
struct node *search(int ele){
    temp=head;
    while(temp!=NULL){
        if(temp->ele=ele)
            return temp;
        temp=temp->next;}
    return NULL;}
void enQueue(struct node *p){
    struct node *new1;
    int e;
    printf("Enter the element:");
    scanf("%d",&e);
    new1=(struct node *)malloc(sizeof(struct node));
    new1->ele=e;
    new1->next=(p)->next;
    (p)->next=new1;
    (p) = new1;
    tail=p;
}
struct node *deQueue(struct node *p){
    struct node *temp = p->next;
    p->next = p->next->next;
    head=p->next;
    return temp;}
int main(){
    int n;
    printf("Enter Number of elements to be stored in linked list:");
    scanf("%d",&n);
    init();
    for(int i=0;i<n;i++){
        create();}
    tail->next=head;
    printf("Intial Linked List:\n");
    display();
    printf("\n");
    enQueue(tail);
    deQueue(tail);
    deQueue(tail);
    display();
   return 0;}
