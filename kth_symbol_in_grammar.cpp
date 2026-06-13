#include<iostream>
#include<cmath>
using namespace std;

int solve(int N, int K){
    //base condition;

    if(N==1){
        return 0;
    }

    int mid=pow(2,N-1)/2;
    if(K<=mid){
        return solve(N-1,K);
    }
    else{
        return !solve(N-1,K-mid);
    }
    

}
int main(){
    int N=4,K=5;
    cout<<"kth symbo in row "<< N <<" at position "<< K 
        <<"is: "<<solve(N,K)<<endl;
    return 0;

}
