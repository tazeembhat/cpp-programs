#include<iostream>
using namespace std;

class detail{
    public:
        string name;
        int ph;
        string sem;

        void inputDetail(){
            cout<<"Enter Details of a student"<<endl;
            cin>>name;
            cin>>ph>>sem;
        }

};

class marks:public detail{
    public:
        float m1, m2, m3;
        float avg;
       
       void inputMarks(){
            cout<<"Enter the marks of subjects"<<endl;
            cin>>m1>>m2>>m3;
       }

        void cal_avg(){
            avg = (m1+m2+m3)/3;
            cout<<name<<" "<<ph<<" "<<sem<<" "<<avg<<endl;
        }

};

int main(){
    marks obj;
    obj.inputDetail();
    obj.inputMarks();

    obj.cal_avg();
    return 0;
}