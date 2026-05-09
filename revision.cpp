/*#include<iostream>
using namespace std;
int main(){
    float r=5, V;
    V=(4/3)*3.14*r*r*r;
    cout<<"Volume of Sphere is: "<<V; 
}*/



//Sum of two numbers
/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<x+y;
}*/



//prodect of 3 numbers
/*#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first number: ";
    cin>>x;
    cout<<"Enter second number: ";
    cin>>y;
    cout<<"Enter third number: ";
    cin>>z;
    cout<<x*y*z;
}*/







/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter integer: ";
    cin>>x;
    float y= (float)x; //typecasting
    cout<<"Half of the integer is: "<<y/2;
}*/




//odd or even
/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Integer: ";
    cin>>x;
    if(x%2==0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
}*/




//Area perimeter of rectangle
/*#include<iostream>
using namespace std;
int main(){
    int x,y;
    int Area,Perimeter;
    cout<<"Enter Length: ";
    cin>>x;
    cout<<"Enter Breadth: ";
    cin>>y;
     Area=x*y;
    Perimeter= 2*(x+y);
    if(Area>Perimeter){
        cout<<"Area is greater";
    }
    else
    cout<<"Perimeter is greater";
}*/







/*#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Integer: ";
    cin>>x;
    if(x%5==0 && x%3==0){
        cout<<"It is Divisible by 5 and 3";
    }
    else if(x%3==0){
    cout<<"It is Divisible by 3";
    }
    else if(x%5==0){
    cout<<"It is divisible by 5";
}
else
cout<<"Not divible by any";
}*/






//Greatest of 3 num
/*#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter First Number: ";
    cin>>x;
    cout<<"Enter Second Number: ";
    cin>>y;
    cout<<"Enter Third Number: ";
    cin>>z;
    if(x>y && y>z){
        cout<<"First number is the Greatest";
    }
    else if(y>x && x>z){
        cout<<"Second number is Greatest";
    }
    else
    cout<<"Third number is Greatest";
}*/










//For loop
/*#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<101; i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
    }
}*/






/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Integer: ";
    cin>>n;
    for(int i=1;i<11;i++){
        cout<<n*i<<endl;
    }
}*/





/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=4;i<3*n+1;i+=3){
        cout<<i<<endl;
    }
}*/








//Do while loop
/*#include<iostream>
using namespace std;
int main(){
    int i=10;
    while(i=20)
    cout<<"Ch";
}*/




/*#include<iostream>
using namespace std;
int main(){
    int x=4, y=0;
    while(x>=0){
        x--;
        y++;
        if(x==y){
            continue;
        }
        else{
            cout<<x<<" "<<y<<endl;
        }
    }
}*/



/*#include<iostream>
using namespace std;
int main(){
    int x, Multiplication=1;
    int ld;
cout<<"Enter the Number: ";
cin>>x;
while(x!=0){
ld= x%10;
x=x/10;
Multiplication*=ld;
}
cout<<Multiplication;
}*/




/*#include<iostream>
using namespace std;
int main(){
    int x, sum=0, ld;
    cout<<"Enter Number: ";
    cin>>x;
    while(x!=0){
        ld=x%10;
        x=x/10;
        if(ld%2==0){
            sum+=ld;
        }
    }
    cout<<sum;

}
*/





/*#include<iostream>
using namespace std;
int main(){
    int x,r=0,ld;
    cout<<"Enter Number: ";
    cin>>x;
    while(x!=0){
        ld= x%10;
        x=x/10;
        r=r*10;
        r=r+ld;
    }
    cout<<"Reverse of the number is: "<<r;
}*/





/*#include<iostream>
using namespace std;
int main(){
    int x,i, multiply=1;
    cout<<"Enter Number: ";
    cin>>x;
    for(i=x;i>=1;i--){
multiply*=i;
    }
    cout<<multiply;
}*/







