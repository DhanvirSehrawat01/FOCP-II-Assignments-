//Problem 2:Swap Mechanism
#include<iostream>
using namespace std;
void swapByValue(int a, int b){
    cout<<"A and B before swap in function: "<<a<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"A and B after swap in function: "<<a<<b<<endl;
}
void swapByReference(int &a, int &b){
    cout<<"A and B before swap in function: "<<a<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"A and B after swap in function: "<<a<<b<<endl;
}

int main(){
    int x,y;
    cout<<"Enter 2 integers: "<<endl;
    cin>>x>>y;
    cout<<"X and Y in mian before function call: "<<x<<y<<endl;
    swapByValue(x,y); //calling
    cout<<"X and Y in main after function call: "<<x<<y<<endl;
    cout<<"X and Y in mian before function call: "<<x<<y<<endl;
    swapByReference(x,y); //calling
    cout<<"X and Y in main after function call: "<<x<<y;
    return -1;
}


