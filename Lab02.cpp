// Program to find the area of circle
#include<iostream>
#include<conio.h>
using namespace std;

class circle{
    private:
        float radius;
        float a;
    public:
        void input(){
            cin>>radius;
        }
        void area(){
            a=3.14*radius*radius;
            cout<<"Area of Circle = "<<a;
        }
};

int main(){
    circle c;
    cout<<"Enter the radius of a Circle: \n";
    c.input();
    c.area();
    return 0;
}
