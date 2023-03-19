#include <iostream>
using namespace std;
/*class shop{
public:
    char name[30];
    int n;
    int price;
    int a;
    int b;
    shop(){
        std::cout<<"Enter Name:";
        std::cin>>name;
        std::cout<<"Enter N:";
        std::cin>>n;
        std::cout<<"Enter Price:";
        std::cin>>price;
        std::cout<<"Enter a:";
        std::cin>>a;
        std::cout<<"Enter b:";
        std::cin>>b;}
        void s(){
            if (price>=750){
                std::cout<<"THE COST OF THE "<<name<<" IS GREATER THAN Rs.750\n";}
            else if (n>=a){
                std::cout<<"THE NUMBER OF"<<name<<"IS GREATER THAN Rs.750\n";}
            else if((price>=b)&&(n>=a)){
                std::cout<<"THE COST AND THE NUMBER OF "<<name<<"IS GREATER\n";}
            else{
                std::cout<<"NEITHER THE NUMBER OF "<<name<<" NOR THE COST IS GREATER\n";}}};
int main(){
    shop obj;
    obj.s();
    return 0;}*/

/*class vit{
    public:
    void m(int a,int b){
        int c[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                std::cout<<"Enter element:";
                std::cin>>c[i][j];}}
        std::cout<<"Entered Matrix:\n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                std::cout<<c[i][j];}
            std::cout<<"\n";}
        std::cout<<"Transpose Matrix:\n";
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                std::cout<<c[j][i];}
            std::cout<<"\n";}}};
int main(){
    int a,b;
    std::cout<<"Enter Rows:";
    std::cin>>a;
    std::cout<<"Enter Colums:";
    std::cin>>b;
    vit obj;
    obj.m(a,b);
    return 0;
}*/
    
/*int main()
{
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            
            if(i%2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    return 0;
}*/

/*class student{
public:
    int a,b;
public:
    void ca(){
        std::cout<<"Enter Details:"<<endl;
        std::cin>>a>>b;
        std::cout<<a<<b;}};
class marks{
public:
    int m,p,c;
    void mark(){
        std::cout<<"Enter Marks:";
        std::cin>>m>>p>>c;
        std::cout<<m<<p<<c;}};
class result:public student,public marks{
    int total;
    float avg;
public:
    void f(){
        total=m+p+c;
        avg=total/3;
        cout<<total<<avg;
    }
};
int main(){
    result obj;
    obj.ca();
    obj.mark();
    obj.f();
}*/

//template<class t1,class t2>

/*t swa(t a,t b){
    t temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<":"<<b;
    return 0;}*/
/*class vit{
public:
    int a;
    vit(){
        a=10;}
    int operator --(){
        a=a+10;
        cout<<"hi";
        return 0;}
    void d(){
        cout<<a;}};

int main(){
    vit obj;
    --obj;
    obj.d();
    return 0;}*/

/*class vit{
public:
    int a,b;
    virtual int as(){
        return a+b;}
    
};
class vit1:public vit{
public:
    int as(){
        return a-b;}
    int ab();
};
int vit1::ab(){
    cout<<"Hi";
    return 0;
}
int main(){
    vit *ptr;
    vit obj;
    vit1 obj1;
    //vit1 ob;
    obj1.ab();
    ptr=&obj;
    cout<<ptr->as()<<endl;
    ptr=&obj1;
    cout<<ptr->as();
}*/
#include<vector>
using namespace std; int main()
{
vector <int> v;
v.push_back(10);
v.push_back(40);
v.push_back(30);
v.push_back(20);
vector<int>::iterator itr = v.begin();
for(; itr<=v.end(); itr++)
{
cout<<"value="<< *itr <<endl;
}
return 0;
}


