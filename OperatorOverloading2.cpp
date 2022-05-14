// Parameterised, Default Constructors and Operator Overloading
#include<iostream>
using namespace std;

class sample{
    private: int r, i;
    public:
        sample(){
        r = 10;
        i = 12;
        }
        sample(int a, int b){
            r = a;
            i = b;
        }
        void operator++(){
            ++r;
            ++i;
        }
        void display(){
            cout<<"r = "<<r<<"\ni = "<<i<<endl;
        }
};

int main(){
    sample s1, s2(12, 13);
    ++s1;
    ++s2;
    cout<<"For s1\n";
    s1.display();
    cout<<"For s2\n";
    s2.display();
    return 0;
}