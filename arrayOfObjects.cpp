// Array of objects
#include<iostream>
using namespace std;

class employee{
    private:
        int empID, salary;
        char empName[20], desig[10];
    public:
        void getdata(){
            cout<<"Enter the Employee ID, Name, Desig and Salary: \n";
            cin>>empID>>empName>>desig>>salary;
        }

        void display(){
            cout<<"ID:"<<empID<<" Name:"<<empName<<" Desig:"<<desig<<" Salary:"<<salary<<endl;
        }
};

int main(){
    employee manager[3];
    employee worker[2];
    employee foreman[4];
    
    //Input for manager 
    cout<<"Enter the details of Managers: "<<endl;
    for (int i = 0; i < 3; i++){
        manager[i].getdata();
    }
    // Input for worker
    cout<<"Enter the details of Workers: "<<endl;
    for (int i = 0; i < 2; i++){
        worker[i].getdata();
    }
    // Input for foremen
    cout<<"Enter the details of Foremen: "<<endl;
    for (int i = 0; i < 4; i++){
        foreman[i].getdata();
    }

    // Display deatils of managers
    cout<<"\nDetails of Managers are: "<<endl;
    for (int i = 0; i < 3; i++){
        manager[i].display();
    }
    // Display deatils of workers
    cout<<"\nDetails of Workers are: "<<endl;
    for (int i = 0; i < 3; i++){
        worker[i].display();
    }
    // Display deatils of foremen
    cout<<"\nDetails of Foremen are: "<<endl;
    for (int i = 0; i < 3; i++){
        foreman[i].display();
    }

    return 0;
}