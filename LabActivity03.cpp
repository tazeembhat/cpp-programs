#include<iostream>
using namespace std;

class student{
    private:
        string name, sem;
        int rollno;
    public:
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
    // For Updation
    void update(){
        cout<<"Enter New details of Student"<<endl;
        cout<<"Enter Name, Roll No, Semester:"<<endl;
        cin>>name>>rollno>>sem;
    }
    //Destructor
    ~student(){
      cout<<"Student Object Deleted!"<<endl;   
    }
};

int main(){
    student s;

    cout<<"Before Updation: "<<endl; 
    s.display();
    s.update();
    cout<<"After Updation: "<<endl;
    s.display();

    return 0;
}