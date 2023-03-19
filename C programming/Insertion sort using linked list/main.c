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
    temp1=(struct node *)malloc(sizeof(struct node));
    while(head!=NULL){
        struct node *next;
        next=(struct node *)malloc(sizeof(struct node));
        struct node *temp;
        next=head->next;
        temp=temp1;
        while(temp->next && temp->next->ele<head->ele){
            temp=temp->next;}
        head->next=temp->next;
        temp->next=head;
        head=next;}
    printf("\n");
    printf("Sorted Linked List:\n");
    while(temp1->next!=NULL){
        printf("%d ",temp1->next->ele);
        temp1=temp1->next;}
    printf("\n");
    return 0;}

/*#include<stdio.h>
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
    temp1=head;
    while(temp1->next!=NULL){
        int key=temp1->next->ele;
        while(j>=0 && temp1->element>key){
            temp1->ele=temp1->next->ele;
            j=j--;
        }
        
    }
}*/


/*#include<stdio.h>
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
    struct node *start;
    start=(struct node *)malloc(sizeof(struct node));
    start->next=head;
    struct node *curr=head;
    struct node *prev=start;
    while (curr!=NULL){
        if(curr->next && (curr->next->ele < curr->ele)){
            while(prev->next && (prev->next->ele<curr->next->ele))
                prev=prev->next;
        struct node *temp = prev->next;
        prev->next = curr->next;
        curr->next= curr->next->next;
        prev->next->next = temp;
        prev = start;}
        else
            curr = curr->next;}
    printf("\n");
    display();
}*/




