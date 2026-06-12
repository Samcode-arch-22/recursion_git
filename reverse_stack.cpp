#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int> &s,int temp ){
   // base case;
   if(s.empty()){
    s.push(temp);
    return;
   }
    int temp2 = s.top();
    s.pop();
    insert(s,temp);
    s.push(temp2);
    
    }
   
void revStack(stack<int> &s){

   //base case;
   if(s.empty()){
    return;
   }
    int temp=s.top();
    s.pop();
    revStack(s);

    insert(s,temp);
    
    }
   
int main(){
    stack <int> s;
    s.push(1);
    s.push(2);

    s.push(3);

    s.push(4);

    s.push(5);
    
    
    revStack(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<endl;
    return 0;


}