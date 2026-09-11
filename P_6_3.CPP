#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of students you want to register : ";
    cin>>n;

    string enr_no[n],name[n],grade[n];
    float percentage[n];

    cout<<"Student Details"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Enrollement Number of student: ";
        cin>>enr_no[i];
        cout<<"Enter the Name of student: ";
        cin>>name[i];
        cout<<"Enter percentage obtained by student: ";
        cin>>percentage[i];
        cout<<"Enter grade of student: ";
        cin>>grade[i];
    }
    cout<<"------------------------------------------------------"<<endl;

    cout<<"Current Student Records"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(8)<<enr_no[i]<<left<<setw(20)<<name[i]<<left<<setw(25)<<percentage[i]<<left<<setw(30)<<grade[i]<<endl;
    }
    cout<<"------------------------------------------------------"<<endl;
    
    
}
