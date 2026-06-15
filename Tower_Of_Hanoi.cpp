#include<iostream>
using namespace std;

void solve ( char s, char h, char d, int n){

    if(n==1){
        cout<<" move plate "<< n << " from "<< s << " to "<< d <<" "<<endl;
        return;
    }

    solve( s,  h, d, n-1);
    cout<<" move plate "<< n << " from " << s << " to " << d << endl;

    

    solve ( h, d,  s,  n-1);

       
}

int main(){
    int n;
    cout<<"Enter number of plates: ";
    cin>>n;
    solve ('s','h','d',n);

  

    return 0;
}
