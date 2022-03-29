#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a[5], x, result;
    cout<<"Enter the 5 elements of an Array: \n";
    for (int i = 0; i < 5; i++){
        cin>>a[i];
    }

    cout<<"Enter the element to search: \n";
    cin>>x;
    // For searching an element in an array
    for (int i = 0; i < 5; i++){
        if(a[i] == x){
            result = i;
            break;
        }
        result = -1;
    }

    if (result == -1){
        cout<<"Element Not Found!\n";
    }
    else{
        cout<<"Element found at location "<<result<<endl;
    }
    return 0;
}