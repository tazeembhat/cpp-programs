// Demonstration of Constructor - Default and Parameterised/Constructor Overloading.
#include<iostream>
using namespace std;

class x{
    private: 
        int l, m;
    public:
    //Default Constructor
        x(){
            l=10;
            m=20;
        }
    //Parameterised Constructor
        x(int l1, int m1){
            l = l1;
            m = m1;
        }
        void display(){
            cout<<"l = "<<l<<endl<<"m = "<<m<<endl;
        }        
};

int main(){
    x obj;
    x obj1(30, 40);
    cout<<"Default Constructor\n";
    obj.display();
    cout<<"Parameterised Constructor\n";
    obj1.display();
    return 0;
}