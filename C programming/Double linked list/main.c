#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;}*temp;
struct Node* head=NULL;
struct Node* tail=NULL;
int i=0;
int co=1;
void insert(long int first,long int a[],long int last,int num){
    struct Node* temp=malloc(sizeof(struct Node));
    if(i<=2){
    temp->data=a[i];
    temp->prev=NULL;
    temp->next=NULL;
    i++;}
    else{
       i=i+2;
       if(a[i]!=first && co!=0 && i<num)
       {
       temp->data=a[i];
       temp->prev=NULL;
       temp->next=NULL;
       i++;}
       else{
           co=0;}}
    if(head==NULL){
        head=temp;
        temp->prev=head;
        temp->next=head;
        tail=temp;}
    else{
        if(co!=0){
        temp->prev=tail;
        temp->next=head;
        tail->next=temp;
        head->prev=temp;
        tail=temp;}}}
void display(){
    struct Node* ptr=head;
    int c=1;
    while(ptr->next!=head){
         ptr=ptr->next;
         c++;}
    ptr=head;
    printf("%d\n",c);
    while(ptr->next!=head){
         printf("%d ",ptr->data);
         ptr=ptr->next;}
    printf("%d ",ptr->data);}
int main(){
    int num;
    scanf("%d", &num);
    long int a[num];
    for(int i=0;i<num;i++){
            scanf("%d",&a[i]);}
    long int first;
    long int last=0;
    first=a[0];
    for(int i=0;i<num;i++){
        if(a[i]==first && i!=0){
            last=a[i-1];}}
    if(last==0)
    last=a[num-1];
    for(int i=0;i<num;i++){
          insert(first,a,last,num);}
    display();
    return 0;}




/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int ele;
    struct node *prev;
    struct node *next;
}*head,*tail,*temp;
void init(){
    head=tail=NULL;}
void create(int ele){
    struct node *new1;
    new1=(struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        head=new1;
        head->next=NULL;
        head->prev=NULL;
        head->ele=ele;
        tail=head;}
    else{
        new1->ele=ele;
        new1->prev=tail;
        new1->next=NULL;
        tail->next=new1;
        tail=new1;}}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("|%hx<-%d->%hx|",temp->prev,temp->ele,temp->next);
        temp=temp->next;}}
struct node *search(int ele){
    temp=head;
    while(temp!=NULL){
        if(temp->ele=ele)
            return temp;
        temp=temp->next;}
    return NULL;}
int main(){
    init();
    //create(1);
    //create(9);
    //create(12);
    //create(7);
    //tail->next=head;
    //head->prev=tail;
    create(1);
    create(9);
    create(12);
    create(9);
    create(12);
    create(7);
    create(12);
    create(7);
    create(1);
    printf("Intial Node:\n");
    display();
    
    
    temp=head;
    
    struct node *new2;
    int n=9;
    new2=(struct node *)(malloc(sizeof(struct node)));
    for(int i=0;i<3;i++){
        new2=temp;
        
        new2->ele=temp->ele;
        tail->next=new2;
        new2->prev=tail;
        new2->next=NULL;
        tail=new2;
        printf("%p\n",temp);
        temp=temp->next;
        
        printf("%p",temp);
    }
    
    
    return 0;}*/

/*#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;}*head,*temp,*tail;
void init(){
    head=tail=NULL;}
int i=0;
int co=1;
void insert(int first,int a[],int last){
    struct Node* temp=malloc(sizeof(struct Node));
    if(i<=2){
        temp->data=a[i];
        temp->prev=NULL;
        temp->next=NULL;
        i++;}
    else{
       i=i+2;
       if(a[i]!=first && co!=0){
       temp->data=a[i];
       temp->prev=NULL;
       temp->next=NULL;
       i++;}
       else{
           co=0;}}
    if(head==NULL){
        head=temp;
        temp->prev=head;
        temp->next=head;
        tail=temp;}
    else{
        if(co!=0){
        temp->prev=tail;
        temp->next=head;
        tail->next=temp;
        head->prev=temp;
        tail=temp;}}}
void display(){
    struct Node* ptr=head;
    int c=1;
    while(ptr->next!=head){
         ptr=ptr->next;
         c++;}
    ptr=head;
    printf("%d\n",c);
    while(ptr->next!=head){
         printf("%d ",ptr->data);
         ptr=ptr->next;}
    printf("%d ",ptr->data);}
int main(){
    int num;
    scanf("%d", &num);
    int a[num];
    for(int i=0;i<num;i++){
            scanf("%d",&a[i]);}
    int first;
    int last;
    first=a[0];
    for(int i=0;i<num;i++){
        if(a[i]==first && i!=0){
            last=a[i-1];}}
    for(int i=0;i<num;i++){
          insert(first,a,last);}
    display();}*/


