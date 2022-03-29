#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a[5], temp;
    cout<<"Enter 5 elements of an array: \n";
    for (int i = 0; i < 5; i++){
        cin>>a[i];
    }
    // For sorting an Array
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(a[i] >= a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    // For printing a sorted array
    cout<<"Sorted Array is: \n";
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<"\t";
    }
    return 0;
}