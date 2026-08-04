#include<iostream>
#include<iomanip>
using namespace std;
int main()/*Just the formatted version of 2.1 practical*/
{
    int enr_number,sem;
    long long int mob_number/*Have used _ type of variable so we have to use this only everywhere*/;
    string name,branch;

    cout<<"******************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"******************************************\n";
    /*In codeblocks, we have to use left right to set the widht of the text*/
    cout<<left<<setw(25)<<"Enter Enrollement Number"<<right<<setw(2)<<":";
    cin>>enr_number;
    cout<<left<<setw(25)<<"Enter Student Name"<<right<<setw(2)<<":";
    getline(cin,name);
    cin.ignore();
    cin>>name;
    cout<<left<<setw(25)<<"Enter Branch"<<right<<setw(2)<<":";
    cin>>branch;
    cout<<left<<setw(25)<<"Enter Semester"<<right<<setw(2)<<":";
    cin>>sem;
    cout<<left<<setw(25)<<"Enter Mobile Number"<<right<<setw(2)<<":";
    cin>>mob_number;

    cout<<"--------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"--------------------------------------\n";

    cout<<left<<setw(25)<<"Enrollment Number"<<right<<setw(2)<<":"<<enr_number<<"\n";
    cout<<left<<setw(25)<<"Student Name"<<right<<setw(2)<<":"<<name<<"\n";
    cout<<left<<setw(25)<<"Branch"<<right<<setw(2)<<":"<<branch<<"\n";
    cout<<left<<setw(25)<<"Semester"<<right<<setw(2)<<":"<<sem<<"\n";
    cout<<left<<setw(25)<<"Mobile Number"<<right<<setw(2)<<":"<<mob_number<<"\n";
    return 0;

}
