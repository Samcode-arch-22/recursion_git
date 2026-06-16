#include<iostream>
#include<map>
#include<vector>
using namespace std;

void solve(string ip, string op, vector<string>& allsub){

    if(ip.length()==0){
        allsub.push_back(op);
        return;
    }

    string op1= op;
    string op2=op;

    op2.push_back(ip[0]);
    ip.erase(0,1);

    solve(ip,op1,allsub);
    solve(ip,op2,allsub);

    return;
}


int main(){

    string ip;
    cout<<"Enter string : ";
    cin>>ip;

    vector<string> allsub;
    solve(ip,"", allsub);

    cout<<"\nAll Subset ("<< allsub.size()<<") :"<< endl;
    for(string s: allsub){
        cout<<(s.empty() ? "(empty)" : s ) << endl;
    }


    map<string, bool> seen;
    vector<string> unqsub;
    
    // little confusion ;
    for(string subset : allsub){
        if(seen [subset] == false){
            seen[subset]=true;
            unqsub.push_back(subset);
        }
    }

    cout<<"\nUnique Subsets ("<<unqsub.size()<<") :"<<endl;
    for(string s : unqsub){
        cout<< (s.empty() ? "(empty)" : s) <<endl;
    }




    return 0;
}