#include<iostream>
using namespace std;
//not working for -ve;

int pow(int x, long long n){

    if(n==0){
       return 1;
    }
    if(n<0){
        return 1.0/pow(x,-n);
    }
    if(n%2==0){
        return pow(x*x,n/2);
    }

    return x*pow(x*x,n/2);
}


int main(){
    //X^n
    int x,n;
    cout<<"Enter the base: "<<endl;
    cin>>x;
    cout<<"Enter the power: "<<endl;
    cin>>n;

   int result= pow(x,n);
   cout<<"result:"<<result<<endl;


    

    return 0;
}