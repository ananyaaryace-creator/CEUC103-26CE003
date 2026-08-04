#include<iostream>
using namespace std;
int main()/*If the code runs sucessfully it displays 0.If not it displays any non negative number.*/
{
    int enr_number,sem;
    long long int mob_number;
    string name,branch;

    cout<<"******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"******************************************\n";

    cout<<"Enter Enrollement Number: ";
    cin>>enr_number;
    cout<<"Enter Student Name: "/*It is a string so to go in the next line we have to use getline and cin.ignore() both.*/;
    getline(cin,name);
    cin.ignore();
    cin>>name;
    cout<<"Enter Branch: ";
    cin>>branch;
    cout<<"Enter Semester: ";
    cin>>sem;
    cout<<"Enter Mobile Number: "/*Have to use long long int because more than the limit of only int*/;
    cin>>mob_number;

    cout<<"--------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"--------------------------------------\n";
    /*Main output of the program so have to use \n everwhere.*/
    cout<<"Enrollment Number:"<<enr_number<<"\n";
    cout<<"Student Name:"<<name<<"\n";
    cout<<"Branch:"<<branch<<"\n";
    cout<<"Semester:"<<sem<<"\n";
    cout<<"Mobile Number:"<<mob_number<<"\n";
    return 0;

}
