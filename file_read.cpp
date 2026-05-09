#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/dhanv/Downloads/Dhanvir.txt");
    string line;

    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
}