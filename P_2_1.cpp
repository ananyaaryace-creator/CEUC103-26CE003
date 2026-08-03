#include<iostream>
using namespace std;
int main()
{
    int enr_number,sem;
    long long int mob_number;
    string name,branch;

    cout<<"******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"******************************************\n";

    cout<<"Enter Enrollement Number: ";
    cin>>enr_number;
    cout<<"Enter Student Name: ";
    getline(cin,name);
    cin.ignore();
    cin>>name;
    cout<<"Enter Branch: ";
    cin>>branch;
    cout<<"Enter Semester: ";
    cin>>sem;
    cout<<"Enter Mobile Number: ";
    cin>>mob_number;

    cout<<"--------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"--------------------------------------\n";

    cout<<"Enrollment Number:"<<enr_number<<"\n";
    cout<<"Student Name:"<<name<<"\n";
    cout<<"Branch:"<<branch<<"\n";
    cout<<"Semester:"<<sem<<"\n";
    cout<<"Mobile Number:"<<mob_number<<"\n";


}
