#include<iostream>
using namespace std;
class shape{
    public:
    void area(){
        cout<<"\n no dimensions, no area";
    }
    void perimeter(){cout<<"\n no dimension, no perimeter";}
    void dimension(){cout<<"\n nothing to display";}
    void display(){cout<<"\n********We are 2D shapes********* ";}
};
class square :public shape{
    int side;
    public:
    square(int s=0)
    {side=s;}
    void area()//overriding
    {cout<<"\n area= "<<side*side;}
    void perimeter()//overriding
    {
        cout<<"\n perimeter= "<<4*side;
    }
    void dimension()//overriding
    {
        cout<<"\n Side is: "<<side;
    }
};
int main(){
    shape s1;
    square ss(12);
    ss.area();ss.perimeter();ss.dimension();
    ss.display();
    return 0;
}