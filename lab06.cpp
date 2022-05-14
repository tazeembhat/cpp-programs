//Program to multiply two complex numbers
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

        complex multiply(complex c){
            complex temp;
            temp.real = real*c.real - img*c.img;
            temp.img = img*c.real + real*c.img;
            return temp;
        }

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1.multiply(c2);
    cout<<"Given Complex Numbers are: "<<endl;
    c1.display();
    c2.display();
    cout<<"Result = ";
    c3.display();

    return 0;
}