/*Practical 8.1
User defined functions */

#include<iostream>
#include<iomanip>
using namespace std;

    int i,sem,marks[5],total_marks=0;
    float per;
    char enr_no[10],name[20],branch[10],grade[3];

    void displayHeader()
    {
        cout<<"*********************************************************"<<endl;
        cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
        cout<<"*********************************************************"<<endl;
    }

    void acceptStudentDetails()
    {
        cout<<"------------Student Registrations------------"<<endl;
        cout<<left<<setw(25)<<"Enter Enrollement Number"<<":";
        cin.getline(enr_no,10);
        cout<<left<<setw(25)<<"Enter Name"<<":";
        cin.getline(name,20);
        cout<<left<<setw(25)<<"Enter Branch"<<":";
        cin.getline(branch,10);
        cout<<left<<setw(25)<<"Enter semester"<<":";
        cin>>sem;

        cout<<"Enter marks for"<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"Subject "<<i+1<<" : ";
            cin>>marks[i];
        }
    }

    void calculateAcademicResult()
    {
        for(i=0;i<5;i++)
        {
            total_marks += marks[i];
        }
        per = total_marks/5.0;
    }


    void displayStudentReport()
    {
        cout<<endl<<"------------Academic Result------------"<<endl;

        cout<<left<<setw(25)<<"Enrollement Number"<<right<<setw(2)<<":"<<enr_no<<endl;
        cout<<left<<setw(25)<<"Name"<<right<<setw(2)<<":"<<name<<endl;
        cout<<left<<setw(25)<<"Branch"<<right<<setw(2)<<":"<<branch<<endl;
        cout<<left<<setw(25)<<"Semester"<<right<<setw(2)<<":"<<sem<<endl;
        cout<<left<<setw(25)<<"Total Marks"<<right<<setw(2)<<":"<<total_marks<<endl;
        cout<<left<<setw(25)<<"Percentage"<<right<<setw(2)<<":"<<per<<endl;
        if (per>=90)
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"O"<<"\n";
        }
        else if (per>=80)
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"A+"<<"\n";
        }
        else if (per>=70)
        {

            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"A"<<"\n";
        }
        else if (per>=60)
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"B+"<<"\n";
        }
        else if (per>=50)
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"B"<<"\n";
        }
        else if (per>=40)
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"C"<<"\n";
        }
        else
        {
            cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"F"<<"\n";
        }
        if (per>=40)
        {
            cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<":"<<"PASS"<<"\n";
        }
        else
        {
            cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<"FAIL"<<"\n";
        }
    }
    int main()
    {
        displayHeader();
        acceptStudentDetails();
        calculateAcademicResult();
        displayStudentReport();

        cout<<"--------------------------------------------------------------------------------"<<endl;
        cout<<"Program Executed Successfully Using User-defined Functions."<<endl;
        cout<<"--------------------------------------------------------------------------------"<<endl;
    }
