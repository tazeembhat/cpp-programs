// Lab 03
#include<iostream>
#include<conio.h>
using namespace std;

class student{
    private:
        int rollno;
        char name[10];
        float marks;
    public:
        void input(){
            cout<<"Enter Roll No, Name, Marks: \n";
            cin>>rollno>>name>>marks;
        }
    // Retruns marks of a student
        float marksret(){
            return marks;
        }

        void display(){
            cout<<"\n"<<name<<" has Maximum marks = "<<marks<<endl;
        }
};

int main(){
    student s[50];
    int n, loc = 0;
    float marks = 0;

    cout<<"Enter the Number of Students: \n";
    cin>>n;
    // For Input
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }
    // Finding max marks
    for (int i = 0; i < n; i++)
    {
        if(s[i].marksret()>marks){
            marks = s[i].marksret();
            loc = i;
        }
    }
    //Printing max marks
    s[loc].display();

    return 0;
}