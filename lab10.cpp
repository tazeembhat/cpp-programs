// Single Inheritance.
#include<iostream>
using namespace std;

class sample1{
    protected:
        float x, y;
    public:
        void add(){
            cout<<"Sum = "<<x+y<<endl;
        }
        void sub(){
            cout<<"Difference = "<<x-y<<endl;
        }
};

class sample2:public sample1{
    public:
        sample2(int a, int b){
            x = a;
            y = b;
        }
       
        void mul(){
            cout<<"Multiplication = "<<x*y<<endl;
        }
        void div(){
            cout<<"Division = "<<x/y<<endl;
        }
};

int main(){
    sample2 obj(15, 3);

    obj.add();
    obj.sub();
    obj.mul();
    obj.div();

    return 0;
}