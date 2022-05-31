#include<iostream>
using namespace std;

class student{
    private:                //Private data members can't be accessed outside the class.
        string name, sem;   //Only member functions inside the class will be able to access them.
        int rollno;
        
    public:                 //Member Functions are Public, they will be accessible outside the class. 

    // Parameterised Constructor
    student(string n, string s, int rn){
        name = n;
        sem = s;
        rollno = rn;
    }

    void display(){
        cout<<"----------Student Details----------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Semester: "<<sem<<endl;
    }
};

class course{
    private:
        string courseName, code;
        float credits;
    public:
    // Parameterised Constructor
        course(string cn, string cc, float cr){
            courseName = cn;
            code = cc;
            credits = cr;
        }

        void display(){
            cout<<"----------Course Details----------"<<endl;
            cout<<"Course Name: "<<courseName<<endl;
            cout<<"Course Code: "<<code<<endl;
            cout<<"Credits: "<<credits<<endl;
        }
};

int main(){
    string sName, cName, sem, cCode;
    float cred;
    int rollno;

    cout<<"Enter the Name, Roll No and Semester of a student:"<<endl;
    cin>>sName>>rollno>>sem;

    cout<<"Enter the Course Name, Course Code and Credits:"<<endl;
    cin>>cName>>cCode>>cred;

    student s(sName, sem, rollno);
    course c(cName, cCode, cred);

    s.display();
    c.display();

    return 0;
}