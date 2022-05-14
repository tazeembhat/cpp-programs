#include<iostream>
using namespace std;

class sample{
    private: int a;
    public:
        sample(int a1){
            a = a1;
        }
        bool operator>(sample s){
            if(a>s.a){
                return true;
            }
            else{
                return false;
            }
        }
        void display(){
            cout<<a<<" is bigger.\n";
        }
};

int main(){
    sample s1(10), s2(20);
    if(s1>s2){
        s1.display();
    }
    else{
        s2.display();
    }
    return 0;
}