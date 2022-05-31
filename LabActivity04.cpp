#include<iostream>
using namespace std;

class student{
    private:
        int rollno;
        char name[10], sem[5];
        float marks;
    public:
        void input(){
            cout<<"Enter Roll No, Name, Semester, Marks: \n";
            cin>>rollno>>name>>sem>>marks;
        }
    // Retruns marks of a student
        int rollret(){
            return rollno;
        }

        void display(){
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Semester: "<<sem<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};

int main(){
    student s[50];
    int n, loc = 0, rollno = 0;

    cout<<"Enter the Number of Students: \n";
    cin>>n;

    // For Input
    for (int i = 0; i < n; i++)
    {
        s[i].input();
    }

    cout<<"Enter Roll No to search: "<<endl;
    cin>>rollno;

    // Searching student details using roll no
    for (int i = 0; i < n; i++)
    {
        if(rollno == s[i].rollret()){
            loc = i;
        }
    }

    // Displaying Results after Searching
    if(loc == -1){
        cout<<"Roll No. Not Found!"<<endl;
    }
    else{
        s[loc].display();
    }
    return 0;
}