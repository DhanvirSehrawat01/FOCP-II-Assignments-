#include <iostream>
using namespace std;
int factorial(int x);
int factorial(int x){
    if(x==1)
    return 1;
    else{
        int f = 1;
        for(int i = 1; i<=x;i++){
            f = f*i;
        }
    return x *factorial(x-1);}
}
int main(){
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"factorial: "<<factorial(n);
}