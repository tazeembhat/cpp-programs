// Program to add 3 complex numbers
#include<iostream>
using namespace std;

class complex{
    private:
        float real, img;
    public:
        void input(){
            cin>>real>>img;
        }

        complex add(complex c1, complex c2){
            complex temp;
            temp.real = real + c1.real + c2.real;
            temp.img = img + c1.img + c2.img;
            return temp;
        }

        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3, c4;
    cout<<"Enter the real and imaginary part of the real no 1: "<<endl;
    c1.input();
    cout<<"Enter the real and imaginary part of the real no 2: "<<endl;
    c2.input();
    cout<<"Enter the real and imaginary part of the real no 3: "<<endl;
    c3.input();

    cout<<"The Given Complex Numbers are: "<<endl;
    c1.display();
    c2.display();
    c3.display();

    c4 = c1.add(c2, c3);
    cout<<"Sum = ";
    c4.display();
    return 0;

}