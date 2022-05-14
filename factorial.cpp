// Factorial of a number.
#include<iostream>
using namespace std;

class factorial{
    private:
        int n, f=1;
    public:
        void input(){
            cin>>n;
        }
        int result();
        void display(){
            cout<<result();
        }
};
int factorial :: result(){
        for(int i=1; i<=n; i++){
            f = f * i;
        }
        return f;
    }
int main(){
    factorial f1, f2;
    cout<<"Enter the Number: "<<endl;
    f1.input();
    f1.display();
}