//Program to swap two numbers present in two different classes
#include<iostream>
using namespace std;
class B;
class A{
    private:
        int a;
    public:
        void input(){
            cout<<"Enter a: \n";
            cin>>a;
        }
        friend int swapno(A&, B&);
        void display() const{
            cout<<"a = "<<a<<endl;
        }
};

class B{
    private:
        int b;
    public:
            void input(){
            cout<<"Enter b: \n";
            cin>>b;
        }
        friend int swapno(A&, B&);

        void display(){
            cout<<"b = "<<b;
        }
};

int swapno(A& x, B& y){
    int c;
    c = x.a;
    x.a = y.b;
    y.b = c;
}

int main(){
    A a1; B b1;
    a1.input();
    b1.input();
    swapno(a1, b1);
    a1.display();
    b1.display();
    return 0;
}
