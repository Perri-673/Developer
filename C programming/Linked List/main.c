/*#include<stdlib.h>
#include<stdio.h>
struct node{
    int ele;
    struct node *next;}*head,*temp,*tail;
void init(){
    head=tail=NULL;}
void create(){
    int ele;
    struct node *new1;
    printf("Enter Element:");
    scanf("%d",&ele);
    new1=(struct node *)malloc(sizeof(struct node));
    //printf("%d",new1);
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
struct node * search(int ele){
    temp=head;
    while(temp!=NULL){
        if(temp->ele==ele){
            return temp;}
        temp=temp->next;}
    return NULL;}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d->%hx\n",temp->ele,temp->next);
        temp=temp->next;}}
int main(){
    printf("Hello, World!\n");
    init();
    for(int i=0;i<5;i++){
        create();}
    display();
    struct node *a=search(5);
    printf("\n%hx",a->next);
    return 0;}*/

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
        tail=head;
        //printf("%d",new1->ele);
}
    else{
        new1->ele=ele;
        new1->next=NULL;
        tail->next=new1;
        tail=new1;
        //printf("%d",new1->ele);
}}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("|%d->%hx|",temp->ele,temp->next);
        temp=temp->next;}}
struct node *search(int ele){
    temp=head;
    while(temp!=NULL){
        if(temp->ele=ele)
            return temp;
        temp=temp->next;}
    return NULL;
}
int main(){
    init();
    printf("Hello World\n");
    for(int i=0;i<5;i++){
        create();}
    printf("Intial Node");
    display();
    int n;
    printf("\nEnter element to be searched:");
    scanf("%d",&n);
    struct node*a=search(n);
    printf("|%d->%hx|",a->ele,a->next);
    return 0;}
