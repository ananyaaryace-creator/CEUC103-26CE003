/*This file contains use of switch case along with if-else
  Last edited : 4 September 2026*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short short int sem,ch,p=0,q=0;/*We are taking two more variables p,q with value 0.
                                     So, it won't create an error if we directly use the case 2 or 4*/
    float Avg_marks,Percentage,maths_marks,physics_marks,cpf_marks,Total_marks;
    long long int mob_number;
    string Name,Branch,enr_number,M;


    cout<<"*********************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*********************************\n";

    //This is used to display all the options available//
    cout<<"------MAIN MENU------\n";

        cout<<" \n 1:Register New Student\n 2:Display Student Record\n 3:Enter Student Marks\n 4:Display Academic Result\n 5:Exit\n";
   M:   cout<<"Enter Your Choice : ";
        cin>>ch;
/*  This practical also contains the use of 'goto' statement whenever required.
    goto is used for the jump from one to another part of code after we run the code.
    We are using 'M' as a variable to use goto statement whenever there is error after choosing a certain option*/
        if (ch<1||ch>5)
        {
            cout<<"Invalid option\n";
            goto M;
        }
        else
        {
            switch (ch)
        {
            case 1:
                cout<<"-----------------------------------\n";
                cout<<"Student Registration\n";
                cout<<"-----------------------------------\n";

                cout<<left<<setw(25)<<"Enter Enrollment Number"<<right<<setw(2)<<":";
                cin>>enr_number;
                cin.ignore();
                cout<<left<<setw(25)<<"Enter Student Name"<<right<<setw(2)<<":";
                getline(cin,Name);
                cout<<left<<setw(25)<<"Enter Branch"<<right<<setw(2)<<":";
                cin>>Branch;
                cout<<left<<setw(25)<<"Enter Semester"<<right<<setw(2)<<":";
                cin>>sem;
                cout<<left<<setw(25)<<"Enter Mobile Number"<<right<<setw(2)<<":";
                cin>>mob_number;
                cout<<"Student Registered Successfully\n";

                p=1;//Here, we gave p the value 1, so that it indicates that the student information has been assigned some data//

                goto M;

            case 2:

                if(p==0)//Using if-else case so that it doesn't print the garbage value directly if we choose option 2 without some previous data entry//
                {
                    cout<<"No Information\n";
                    goto M;
                }
                else
                {
                    cout<<"-----------------------------------\n";
                    cout<<"Student Information\n";
                    cout<<"-----------------------------------\n";

                    cout<<left<<setw(25)<<"Enrollment Number"<<right<<setw(2)<<":"<<enr_number<<"\n";
                    cout<<left<<setw(25)<<"Student Name"<<right<<setw(2)<<":"<<Name<<"\n";
                    cout<<left<<setw(25)<<"Branch"<<right<<setw(2)<<":"<<Branch<<"\n";
                    cout<<left<<setw(25)<<"Semester"<<right<<setw(2)<<":"<<sem<<"\n";
                    cout<<left<<setw(25)<<"Mobile Number"<<right<<setw(2)<<":"<<mob_number<<"\n";
                    }

                goto M;

            case 3:
                cout<<"-----------------------------------\n";
                cout<<"Academic Information\n";
                cout<<"-----------------------------------\n";

                cout<<left<<setw(35)<<"Enter Mathematics Marks"<<right<<setw(2)<<":";
                cin>>maths_marks;
                cout<<left<<setw(35)<<"Enter Physics Marks"<<right<<setw(2)<<":";
                cin>>physics_marks;
                cout<<left<<setw(35)<<"Enter Programming Foundation Marks"<<right<<setw(2)<<":";
                cin>>cpf_marks;
                cout<<"Marks Entered Successfully\n";

                q=1;//Same as the need of assigning value '1' to p//

                goto M;

            case 4:
                if(q==0)
                {
                    cout<<"No information\n";
                    goto M;
                }
                else
                {

                    cout<<"-----------------------------------\n";
                    cout<<"Academic Summary\n";
                    cout<<"-----------------------------------\n";

                    Total_marks = (maths_marks+physics_marks+cpf_marks);
                    cout<<left<<setw(25)<<"Total Marks"<<right<<setw(2)<<":"<<Total_marks<<"\n";
                    Avg_marks = ((Total_marks)/3);
                    cout<<left<<setw(25)<<"Average Marks"<<right<<setw(2)<<":"<<Avg_marks<<"\n";
                    Percentage = ((Total_marks*100)/300);
                    cout<<left<<setw(25)<<"Percentage"<<right<<setw(2)<<":"<<Percentage<<"\n";

                    if (Percentage>=40)
                    {
                        cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<":"<<"PASS"<<"\n";
                    }
                    else
                    {
                        cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<"FAIL"<<"\n";
                    }
                    if (Percentage>=90)
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"O"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Outstanding"<<"\n";
                    }
                    else if (Percentage>=80)
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"A+"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Excellent"<<"\n";
                    }
                    else if (Percentage>=70)
                    {

                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"A"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Very Good"<<"\n";
                    }
                    else if (Percentage>=60)
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"B+"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Good"<<"\n";

                    }
                    else if (Percentage>=50)
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"B"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Satisfactory"<<"\n";
                    }
                    else if (Percentage>=40)
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"C"<<"\n";
                        cout<<left<<setw(25)<<"Performance"<<right<<setw(2)<<":"<<"Need Improvement"<<"\n";
                    }
                    else
                    {
                        cout<<left<<setw(25)<<"Grade"<<right<<setw(2)<<":"<<"F"<<"\n";
                        cout<<left<<setw(25)<<"Peformance"<<right<<setw(2)<<":"<<"Failed"<<"\n";
                    }
                    goto M;//Writing goto here is mandatory, otherwise it will directly exit the code after option 4//
                }
                case 5:
                    cout<<"Thank You...";
                }

        }
    return 0;

}
