#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> v, int k, int index, int&ans ){

    if(v.size()==1){
        ans=v[0];
        return;
    }

    index=(index+k)% v.size();
    v.erase(v.begin()+index);

    solve(v,k,index,ans);
}

int main(){
    int n,k;
    cout<<"enter the number of person: "<<endl;
    cin>>n;
    cout<<"Enter the number to skip: "<<endl;
    cin>>k;

    vector<int> v ;

    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    k=k-1;

    int ans = 0;                 
    solve(v, k, 0, ans);         

    cout<<"Survivor is person number: "<< ans <<endl;


    


    return 0;

}
