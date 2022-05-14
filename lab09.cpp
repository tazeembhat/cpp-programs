// Multiplication on two complex numbers using Operator Overloading.
#include<iostream>
using namespace std;

class complex{
    private: float r, i;
    public:
        complex(){

        }
        complex(float r1, float i1){
            r = r1;
            i = i1;
        }

        complex operator*(complex c){
            complex temp;
            temp.r = r*c.r - i*c.i;
            temp.i = r*c.i + i*c.r;
            return temp;
        }
        void display(){
            cout<<r<<" + "<<i<<"i";
        }
};

int main(){
    complex c1(2, 2), c2(4, 1), c3;
    c3 = c1*c2;
    c3.display();
    return 0;
}