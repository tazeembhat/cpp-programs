#include<iostream>
using namespace std;

class sample{
    private:
        int x;
        float y;
    public:
        sample(){
            x = 10;
            y = 20.5;
        }
        sample(sample &c){
            x = c.x;
            y = c.y;
        }
        void display(){
            cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
        }
};

int main(){
    sample s1, s2(s1);
    s1.display();
    cout<<"Copied\n";
    s2.display();
    return 0;
}