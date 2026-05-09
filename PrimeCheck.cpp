//Problem 1: Prime Check
#include<iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2; i <= n/2; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a;
    cout<<"Enter an integer: ";
    cin>>a;
    if(isPrime(a)){
        cout<<a<<"\nPrime";
    }
    else{
        cout<<a<<"\nNot Prime";
    }
    return 0;
}