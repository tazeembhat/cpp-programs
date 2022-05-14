// Program to read and display student data
#include<iostream>
#include<conio.h>
using namespace std;

class student{
    private:
        int rollno;
        float marks;
        char name[20];
    public:
        void input(){
            cin>>rollno>>marks>>name;
        }

        void display(){
            cout<<rollno<<" "<<name<<" "<<marks;
        }
};

int main(){
    student s;  
    cout<<"Enter Roll No, Marks, Name\n";
    s.input();
    s.display();

    return 0;
}
