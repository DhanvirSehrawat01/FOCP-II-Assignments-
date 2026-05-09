/*#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    Person(){
        cout<<"Person Default";
        name="Default";
        age=18;
    }
    Person(string name,int age){
        cout<<"\n Person Parametarized";
        this->name=name;
        (*this).age=age;
    }
    void displayPerson(){
        cout<<"\nName: "<<name<<"\nAge: "<<age;
    } 
};
class Student:public Person{
    string rollno;
    public:
    Student(){
        cout<<"\nStudent Default";
        rollno="25CSU000";
    }
    Student(string name, int ag, string rno):Person(name,ag){
cout<<"\n Student Parametarized";
rollno=rno;
    }
    void displayStudent(){
        displayPerson();
        cout<<"\nRoll No: "<<rollno;
    }
};

int main(){
    Student p1, p2("Section B",17,"25CSU064");
    p1,displayStudent();
    p2.displayStudent();
    return 0;
}*/



#include <iostream>
using namespace std;
class Person{
    public:
    string name; int age;
Person(){
    name = "default";
    age = 18;
}
Person(string name, int age){
    this -> name = name;
    this -> age = age;
}
void display_person(){
    cout<<"\nname: "<<name<<"\nage: "<<age;
}
};
class Student:public Person{
    public:
    string rollno;
    Student(){
        rollno = "25CSU000";
    }
    Student(string nm, int ag, string rno):Person(nm,ag){
        rollno=rno;
    }
    void display_student(){
        display_person();
        cout<<"\nroll number: "<<rollno;

    }

};
int main(){
    Student s1,s2,s3("Dhanvir", 18, "25CSU064");
    Person p1("DD", 19);
    s1.display_person(); // this should print default value from constructor   
    p1.display_person(); // this should print garv and 19
    s2.display_student(); // this should print defualt value (including rollno)
    s3.display_student(); // this should print complete values
}