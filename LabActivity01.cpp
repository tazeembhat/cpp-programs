#include<iostream>
using namespace std;

class student{
    private:
        string name, sem;
        int rollno;
    public:
    // Constructor
    student(){
        name = "Tazeem";
        sem = "4th";
        rollno = 17;
    }

    void display(){
        cout<<"----------Student Details----------"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<rollno<<endl;
        cout<<"Semester: "<<sem<<endl;
    }
    // Destructor
    ~student(){
        
    }
};

class course{
    private:
        string courseName, code;
        float credits;
    public:
    // Constructor
        course(){
            courseName = "OOP";
            code = "COM-411";
            credits = 4.0;
        }

        void display(){
            cout<<"----------Course Details----------"<<endl;
            cout<<"Course Name: "<<courseName<<endl;
            cout<<"Course Code: "<<code<<endl;
            cout<<"Credits: "<<credits<<endl;
        }
    // Destructor
        ~course(){
            
        }
};

int main(){
    student s;
    course c;

    s.display();
    c.display();

    return 0;
}