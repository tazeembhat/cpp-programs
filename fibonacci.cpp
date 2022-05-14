// Program to print fibonacci series using Constructor
#include<iostream>
using namespace std;

class fibonacci{
    private:
        int a, b;
    public:
        fibonacci(){
            a = -1;
            b = 1;
        }
    void fib(int n){
        for(int i=0; i<n; i++){
            int next;
            next = a+b;
            cout<<next<<" ";
            a = b;
            b = next;
        }
    }
};

int main(){
    fibonacci f;
    int n;
    cout<<"Enter the range: "<<endl;
    cin>>n;
    f.fib(n);

    return 0;
}