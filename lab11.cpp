// Multiple Inheritance.
#include<iostream>
using namespace std;

class sample1{
    protected:
        float x;
};

class sample2{
    protected:
        float y;
};

class sample3:public sample1, public sample2{
    public:
        sample3(int a, int b){
            x = a;
            y = b;
        }

        void add(){
            cout<<"Sum = "<<x+y<<endl;
        }
        void sub(){
            cout<<"Difference = "<<x-y<<endl;
        }
        void mul(){
            cout<<"Multiplication = "<<x*y<<endl;
        }
        void div(){
            cout<<"Division = "<<x/y<<endl;
        }
};

int main(){
    sample3 obj(20, 2);

    obj.add();
    obj.sub();
    obj.mul();
    obj.div();

    return 0;
}