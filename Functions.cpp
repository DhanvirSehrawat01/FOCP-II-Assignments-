/*#include<iostream>
using namespace std;
int sum(int,int);
int main(){
    int x,y;
    cout<<"Please Enter the 2 numbers: ";
    cin>>x>>y;
    cout<<"The Sum is: "<<sum(x,y);
}
int sum(int x, int y){
    return x+y;
}*/






#include<iostream>
using namespace std;
int sum(int,int);
float sum(float,float);
double sum(double,double);
int main(){
    cout<<sum(5,6);
    cout<<sum(5.678f,8.765f);
    cout<<sum(5.5678,8.7655);
    return 0;
}
int sum(int x,int y){
    cout<<"\n Sum is: ";
    return (x+y);
}
float sum(float x,float y){
    cout<<"\n Sum is: ";
    return (x+y);
}
double sum(double x,double y){
    cout<<"\n Sum is: ";
    return (x+y);
}