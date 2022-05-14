#include<iostream>
using namespace std;

class complex{
    private: float r, i;
    public:
        complex(){
        r = 10.5;
        i = 12.2;
        }
        void operator++(){
            ++r;
            ++i;
        }
        void display(){
            cout<<"r = "<<r<<"\ni = "<<i;
        }
};

int main(){
    complex s;
    ++s;
    s.display();
    return 0;
}