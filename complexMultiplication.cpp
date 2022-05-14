// Multiplication of two complex nos using friend function
#include<iostream>
using namespace std;

class complex{
    private:
        int real, img;
    public:
        void input(){
            cout<<"Enter the real and imaginary part of real number: "<<endl;
            cin>>real>>img;
        }

        friend complex multiply(complex, complex);

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

complex multiply(complex c1, complex c2){
            complex temp;
            temp.real = c1.real*c2.real - c1.img*c2.img;
            temp.img = c1.img*c2.real + c1.real*c2.img;
            return temp;
        }

int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = multiply(c1, c2);
    cout<<"Given Complex Numbers are: "<<endl;
    c1.display();
    c2.display();
    cout<<"Result = ";
    c3.display();

    return 0;
}