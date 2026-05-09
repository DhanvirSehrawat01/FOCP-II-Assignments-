#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin("C:/Users/dhanv/Downloads/Dhanvir.txt");
    ofstream fout("C:/Users/dhanv/Downloads/yoyoyoyo.txt");

    string line;

    while(getline(fin,line)){
        fout<<line<<endl;
    }
    cout<<"File copied successfully";

    fin.close();
    remove("C:/Users/dhanv/Downloads/Dhanvir.txt");
    fout.close();
}