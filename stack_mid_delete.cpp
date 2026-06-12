#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s, int k ){
    if(k==1){
        s.pop();
        return;
    }
    int temp= s.top();
    s.pop();
    solve( s, k-1);
    s.push(temp);
}

void deleteMid(stack<int>&s){
    if(s.empty())
    return;
int size = s.size();
int k = (size/2)+1;
solve(s,k);

}
int main(){
    stack<int> s ;
    s.push(1);
     s.push(2);
      s.push(3);
     s.push(4);
      s.push(5);
      
      deleteMid(s);
      cout<<"stack after deleting middle: ";


      while(!s.empty()){
        cout<<s.top()<<"";
        s.pop();

      }
      cout<<endl;
      return 0;
}