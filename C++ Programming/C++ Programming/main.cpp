//#include <iostream>
//class vit{
//    int x=1,y=1;
//    public:
//    void add(){
//        //std::cout<<"Enter the values of x and y";
//        //std::cin>>x>>y;
//        std::cout<<"The sum of x and y is"<<x+y;}};
//int main() {
//    vit a;
//    a.add();
//    std::cout << "Hello world!";
//    return 0;}


#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int ans;
vi takenGarments;

void func(vvi &garments,int g, int op, int budget){
    static int curValue=0;
    static vi curGarments;

    if(g==(int)garments.size() || op==(int)garments[g].size()) return;
    if(curValue + garments[g][op] > budget) return;

    curValue += garments[g][op];
    curGarments.push_back(op);

    if(curValue > ans){
        ans=curValue;
        takenGarments=curGarments;
    }

    func(garments,g+1,0,budget);
    curValue -= garments[g][op];
    curGarments.pop_back();
    func(garments,g,op+1,budget);
}

int main(){
    
    int m,k;
    cin>>m>>k;

    vvi garments(k);
    for(int i=0;i<k;i++){
        int nc;
        cin>>nc;
        vi garment(nc);
        for(int j=0;j<nc;j++) cin>>garment[j];

        garments[i]=garment;
    }

    func(garments,0,0,m);
    
    if(garments.size() !=k){
        cout<<"\nNo solution";
        return NULL;
    }
    
    cout<<"\nMax Value: "<<ans<<endl<<endl;
    for(int i=0;i<(int)takenGarments.size();i++){
        cout<<"Garment "<<i+1<<" : ";
        cout<<garments[i][takenGarments[i]]<<endl;
    }
    
    cout<<endl;
    return 0;
}
