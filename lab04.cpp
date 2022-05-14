/* Program to find max marks of a student and display marks of students
    in descending order using structure*/
#include<iostream>
using namespace std;

struct student{
    int rollno;
    float marks;
    char name[10];
};

int main(){
    student s[50];
    int n, loc = 0;
    float marks1=0;

    cout<<"Enter the number of students: \n";
    cin>>n;
    cout<<"Enter the Roll No., Name, Marks: \n";
    for(int i=0; i<n; i++){
        cin>>s[i].rollno>>s[i].name>>s[i].marks;
    }
    // For finding the max marks
    for(int i=0; i<n; i++){
        if(marks1<s[i].marks){
            loc = i;
            marks1 = s[i].marks;
        }
    }
    cout<<"The name of the student with max marks is "<<s[loc].name<<" = "<<s[loc].marks<<endl;
    cout<<"Marks of Students in Descending Order:"<<endl;
    for (int i = 0; i <n; i++)
    {
        cout<<s[loc].name<<" = "<<s[loc].marks<<endl;
        loc--;
    }
    
    return 0;

}