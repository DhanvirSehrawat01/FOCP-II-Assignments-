#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("C:/Users/dhanv/Downloads/Dhanvir.txt",ios::app);

    fout<<"\n1234567 \nLets Do It";
    fout<<"\nmindout";
    fout.close();
    cout<<"data written";
}