#include<iostream>
using namespace std;

struct student{
    float marks;
    char name[20];
};

student getDetail(student &s){
    cin>>s.marks;
}

student display(student s){
    cout<<s.marks<<"\n";
}

student print(student s){
    cout<<s.name;
}

int main(){
    student s1;
    cout<<"Enter the name:\n";
    cin>>s1.name;
    cout<<"Enter marks: \n";
    getDetail(s1);
    display(s1);
    print(s1);

    return 0;
}