// Add data of two different classes using friend function
#include<iostream>
using namespace std;
// Class 1
class sum1{
    private:
        int x;
    public:
    // Input for x
        void input(){
            cout<<"Enter the first number: \n";
            cin>>x;
        }

        friend int add(sum1, class sum2);
};
// Class 2
class sum2{
    private:
        int y;
    public:
    // Input for y
        void input(){
            cout<<"Enter the second number: \n";
            cin>>y;
        }

        friend int add(class sum1, sum2);
};

int add(sum1 s1, sum2 s2){
    int result;
    result = s1.x + s2.y;
    return result;
}

int main(){
    sum1 s1;
    sum2 s2;
    int ans;
    s1.input();
    s2.input();
    ans = add(s1, s2);
    cout<<"Sum = "<<ans;
    
    return 0;
}
