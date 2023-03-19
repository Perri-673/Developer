#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;}
int getMax(int a[],int n){
 int max=a[0];
 for(int i=1;i<n;i++){
    if(a[i]>max)
       max=a[i];}
 return max;}
void countSort(int a[],int n){
   int output[n+1];
   int max=getMax(a,n);
   int count[max+1];
   for(int i=0;i<=max;++i){
        count[i]=0;}
   for(int i =0;i<n;i++){
      count[a[i]]++;}
   for(int i=1;i<=max;i++)
      count[i]+=count[i-1];
   for(int i=n-1;i>=0;i--){
    output[count[a[i]]-1]=a[i];
    count[a[i]]--;}
   for(int i=0;i<n;i++){
      a[i]=output[i];}}
void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);}
void printArray(int arr[],int size){
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");}
void selectionSort(int arr[],int n){
    int i,j,min_idx;
    for(i=0;i<n-1;i++){
        min_idx = i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_idx])
                min_idx=j;
        if(min_idx!=i)
            swap(&arr[min_idx],&arr[i]);}}
void insertionSort(int arr[],int n){
    int i,key,j;
    for (i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;}
        arr[j+1]=key;}}
int partition(int a[],int p,int r){
    int pivot=a[r];
    int i=p-1;
    for(int j=p;j<=r-1;j++){
        if(a[j]<=pivot){
            i=i+1;
            swap(&a[i],&a[j]);}}
        i=i+1;
        swap(&a[i],&a[r]);
        return i;}
void quicksort(int a[],int p,int r){
    if(p<r){
        int q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);}}
void merge(int a[],int p,int q,int r){
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int left[n1];int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[p+i];}
    for(int j=0;j<n2;j++){
        right[j]=a[q+j+1];}
    int k=p;
    int i=0;
    int j=0;
    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            a[k]=left[i++];}
        else{
            a[k]=right[j++];}
        k++;}
    while(i<n1){
        a[k]=left[i++];
        k++;}
    while(j<n2){
        a[k]=right[j++];
        k++;}}
void merge_sort(int a[],int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);}}
void heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n&&arr[left]>arr[largest])
      largest=left;
    if(right<n&&arr[right]>arr[largest])
      largest=right;
    if(largest!=i){
      swap(&arr[i],&arr[largest]);
      heapify(arr,n,largest);}}
void heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--)
      heapify(arr,n,i);
    for(int i=n-1;i>=0;i--){
      swap(&arr[0],&arr[i]);
        heapify(arr,i,0);}}
double timetaken1(void(*p)(),int a[],int n){
    clock_t begin,end;
    double time_taken;
    begin=clock();
    p(a,n);
    end=clock();
    time_taken=(double)(end-begin)/CLOCKS_PER_SEC;
    return time_taken;}
double timetaken2(void(*p)(),int a[],int n){
    clock_t begin,end;
    double time_taken;
    begin=clock();
    p(a,0,n-1);
    end=clock();
    time_taken=(double)(end-begin)/CLOCKS_PER_SEC;
    return time_taken;}
int main(){
    int a[10],b[100],c[1000],d[10000],e[100000],f[200000];
    int random;
    for(int i=0;i<10;i++){
        random=rand()%1000+1;
        a[i]=random;}
    for(int i=0;i<100;i++){
        random=rand()%1000+1;
        b[i]=random;}
    for(int i=0;i<1000;i++){
        random=rand()%1000+1;
        c[i]=random;}
    for(int i=0;i<10000;i++){
        random=rand()%1000+1;
        d[i]=random;}
    for(int i=0;i<100000;i++){
        random=rand()%1000+1;
        e[i]=random;}
    for(int i=0;i<200000;i++){
        random=rand()%1000+1;
        f[i]=random;}
    printf("Algorithm/#inputs 10 100 1K 10K 1L 2L");
    printf("\nBubble Sort %f %f %f %f %f %f  ",timetaken1(bubbleSort,a,10),timetaken1(bubbleSort,b,100),timetaken1(bubbleSort,c,1000),timetaken1(bubbleSort,d,10000),timetaken1(bubbleSort,e,100000),timetaken1(bubbleSort,f,200000));
    printf("\nSelection Sort %f %f %f %f %f %f  ",timetaken1(selectionSort,a,10),timetaken1(selectionSort,b,100),timetaken1(selectionSort,c,1000),timetaken1(selectionSort,d,10000),timetaken1(selectionSort,e,100000),timetaken1(selectionSort,f,200000));
    printf("\nInsertion Sort %f %f %f %f %f %f  ",timetaken1(insertionSort,a,10),timetaken1(insertionSort,b,100),timetaken1(insertionSort,c,1000),timetaken1(insertionSort,d,10000),timetaken1(insertionSort,e,100000),timetaken1(insertionSort,f,200000));
    printf("\nMerge Sort %f %f %f %f %f %f  ",timetaken2(merge_sort,a,10),timetaken2(merge_sort,b,100),timetaken2(merge_sort,c,1000),timetaken2(merge_sort,d,10000),timetaken2(merge_sort,e,100000),timetaken2(merge_sort,f,200000));
    printf("\nQuick Sort %f %f %f %f %f %f  ",timetaken2(quicksort,a,10),timetaken2(quicksort,b,100),timetaken2(quicksort,c,1000),timetaken2(quicksort,d,10000),timetaken2(quicksort,e,100000),timetaken2(quicksort,f,200000));
    printf("\nHeap Sort %f %f %f %f %f %f  ",timetaken1(heapSort,a,10),timetaken1(heapSort,b,100),timetaken1(heapSort,c,1000),timetaken1(heapSort,d,10000),timetaken1(heapSort,e,100000),timetaken1(heapSort,f,200000));
    printf("\nCounting Sort %f %f %f %f %f %f \n ",timetaken1(countSort,a,10),timetaken1(countSort,b,100),timetaken1(countSort,c,1000),timetaken1(countSort,d,10000),timetaken1(countSort,e,100000),timetaken1(countSort,f,200000));
    return 0;}



  



