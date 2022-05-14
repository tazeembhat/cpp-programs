// Program to add 2 complex numbers using friend function
#include<iostream>
using namespace std;

class complex{
    private:
        float real, img;
    public:
        void input(){
            cin>>real>>img;
        }

       friend complex add(complex, complex);

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

complex add(complex c1, complex c2){
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    return c3;
}

int main(){
    complex c1, c2, c3;
    cout<<"Enter the real and imaginary part of the real no 1: "<<endl;
    c1.input();
    cout<<"Enter the real and imaginary part of the real no 2: "<<endl;
    c2.input();

    cout<<"The Given Complex Numbers are: "<<endl;
    c1.display();
    c2.display();
    c3 = add(c1, c2);
    cout<<"Sum = ";
    c3.display();
    return 0;

}