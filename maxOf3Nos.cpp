// Maximum of three nos stored in three different classes
#include<iostream>
using namespace std;
// Class 1
class max1{
    private:
        int x;
    public:
        void input(){
            cout<<"Enter the first number: "<<endl;
            cin>>x;
        }
        friend int maximum(max1, class max2, class max3);
};
// Class 2
class max2{
    private:
        int y;
    public:
        void input(){
            cout<<"Enter the second number: "<<endl;
            cin>>y;
        }
        friend int maximum(class max1, max2, class max3); 
};
// Class 3
class max3{
    private:
        int z;
    public:
        void input(){
            cout<<"Enter the third number: "<<endl;
            cin>>z;
        }
        friend int maximum(class max1, class max2, max3);
};

int maximum(max1 m1, max2 m2, max3 m3){
    int big;
    if(m1.x > m2.y && m1.x > m2.y){
        big = m1.x;
    }
    else if(m2.y > m1.x && m2.y > m3.z){
        big = m2.y;
    }
    else{
        big = m3.z;
    }
    return big;
}

int main(){
    int result;
    max1 m1; max2 m2; max3 m3;
    m1.input();
    m2.input();
    m3.input();

    result = maximum(m1, m2, m3);
    cout<<"Max = "<<result;
    return 0;
}