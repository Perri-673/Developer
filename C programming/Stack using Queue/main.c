#include <stdio.h>
#define SIZE 100
struct queue{
    int rear,front;
    int stack[100];
}q;
void init(){
    q.rear=q.front=-1;}
int isfull(){
    if(q.rear==SIZE-1){
        return 1;}
    else
        return 0;}
int isempty(){
    if(q.front>q.rear||q.front==-1){
        return 1;}
    else{
        return 0;}}
void enqueue(int ele){
    if(isfull()){
        printf("Queue is full\n");}
    else{
        if(q.front==-1){
            q.front=0;}
        q.stack[++q.rear]=ele;}}
int dequeue(){
    if(isempty()){
        printf("Queue is empty\n");
        return NULL;}
    else{
        return q.stack[q.front++];}}
int count=0;
void push(int ele){
    enqueue(ele);
    count++;}
void pop(){
    for(int i=0;i<count-1;i++){
        int a=dequeue();
        enqueue(a);}
    int value=dequeue();
    printf("Poped element is: %d\n",value);
    count--;}
void display(){
    printf("The elements of the stack is:\n");
    for(int i=q.front;i<=q.rear;i++){
        printf("%d\n",q.stack[i]);}}
int main(){
    init();
    push(1);
    push(2);
    push(3);
    display();
    pop();
    pop();
    push(2);
    display();
    return 0;}
