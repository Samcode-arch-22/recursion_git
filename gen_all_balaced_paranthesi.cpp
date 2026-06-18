#include<iostream>
#include<vector>
using namespace std;

void solve(int open, int close, string op, vector<string>& v){

    if(close==0 && open == 0){
        v.push_back(op);
        return;
    }

    if(open!=0){
       string op1=op;
       op1.push_back('(');
       solve(open-1, close,op1,v);
    }

    if(close>open){
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,v);
    }

    return;

}
int main(){

    vector<string> v;

    int n;
    cout<<"Enter the number of prenthesis: ";
    cin>>n;

    int close=n;
    int open=n;
    
    string op="";
    
    solve(open,close,op,v);

    for(string s : v){
        cout<<s<<endl;
    }

    return 0;
}