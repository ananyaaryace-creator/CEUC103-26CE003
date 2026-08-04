#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int enr_number,sem;
    float Avg_marks,Percentage,maths_marks,physics_marks,cpf_marks,Total_marks;
    long long int mob_number;
    string Name,Branch;
    /*also includes the status pass/fail*/
    cout<<"*********************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*********************************\n";
    cout<<"-----------------------------------\n";
    cout<<"Student Registration\n";
    cout<<"-----------------------------------\n";

    cout<<left<<setw(25)<<"Enter Enrollment Number"<<right<<setw(2)<<":";
    cin>>enr_number;
    cout<<left<<setw(25)<<"Enter Student Name"<<right<<setw(2)<<":";
    getline(cin,Name);
    cin>>Name;
    cin.ignore();
    cout<<left<<setw(25)<<"Enter Branch"<<right<<setw(2)<<":";
    cin>>Branch;
    cout<<left<<setw(25)<<"Enter Semester"<<right<<setw(2)<<":";
    cin>>sem;
    cout<<left<<setw(25)<<"Enter Mobile Number"<<right<<setw(2)<<":";
    cin>>mob_number;

    cout<<"-----------------------------------\n";
    cout<<"Academic Information\n";
    cout<<"-----------------------------------\n";

    cout<<left<<setw(35)<<"Enter Mathematics Marks"<<right<<setw(2)<<":";
    cin>>maths_marks;
    cout<<left<<setw(35)<<"Enter Physics Marks"<<right<<setw(2)<<":";
    cin>>physics_marks;
    cout<<left<<setw(35)<<"Enter Programming Foundation Marks"<<right<<setw(2)<<":";
    cin>>cpf_marks;

    cout<<"-----------------------------------\n";
    cout<<"Academic Summary\n";
    cout<<"-----------------------------------\n";

    Total_marks = (maths_marks+physics_marks+cpf_marks);
    cout<<left<<setw(25)<<"Total Marks"<<right<<setw(2)<<":"<<Total_marks<<"\n";
    Avg_marks = ((Total_marks)/3);
    cout<<left<<setw(25)<<"Average Marks"<<right<<setw(2)<<":"<<Avg_marks<<"\n";
    Percentage = ((Total_marks*100)/300);
    cout<<left<<setw(25)<<"Percentage"<<right<<setw(2)<<":"<<Percentage<<"\n";

    cout<<"-----------------------------------\n";
    cout<<"Student Information\n";
    cout<<"-----------------------------------\n";

    cout<<left<<setw(25)<<"Enrollment Number"<<right<<setw(2)<<":"<<enr_number<<"\n";
    cout<<left<<setw(25)<<"Student Name"<<right<<setw(2)<<":"<<Name<<"\n";
    cout<<left<<setw(25)<<"Branch"<<right<<setw(2)<<":"<<Branch<<"\n";
    cout<<left<<setw(25)<<"Semester"<<right<<setw(2)<<":"<<sem<<"\n";
    cout<<left<<setw(25)<<"Mobile Number"<<right<<setw(2)<<":"<<mob_number<<"\n";

    cout<<"-----------------------------------\n";
    cout<<"Academic Result\n";
    cout<<"-----------------------------------\n";
    if (Percentage>=40)
    {
        cout<<left<<setw(13)<<"RESULT"<<right<<setw(2)<<":"<<"PASS"<<"\n";
        cout<<"Congratulations! You have sucessfully passed.";
    }
    else
    {
        cout<<left<<setw(13)<<"RESULT"<<right<<setw(2)<<"FAIL"<<"\n";
        cout<<"You have failed";
    }
}
