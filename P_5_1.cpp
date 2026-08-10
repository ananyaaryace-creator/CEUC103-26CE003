#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int sem,ch,no_sub,i,M,p=0,q=0;
    float Avg_marks,Percentage,marks,maths_marks,physics_marks,cpf_marks,Total_marks=0;
    long long int mob_number;
    string Name,Branch,enr_number;

    /*It include the grade and performance along with the result*/
    cout<<"*********************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"*********************************\n";


    cout<<"------MAIN MENU------\n";

        cout<<" \n 1:Register New Student\n 2:Display Student Record\n 3:Enter Student Marks\n 4:Display Academic Result\n 5:Exit\n";
   M:   cout<<"Enter Your Choice : ";
        cin>>ch;

        if (ch<1||ch>5)
        {
            cout<<"Invalid option";
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
                p=1;

                goto M;

            case 2:

                if(p==0)//Using if-else case so that it doesn't print the garbage value directly if we choose option 2 without some previous data entry//
                {
                    cout<<"No Information\n";
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

                cout<<"Enter Number Of Subjects: ";
                cin>>no_sub;

                for(i=1 ; i<= no_sub ; i++)
                {
                    cout<<"Enter Number Of Subject "<<i<<":";
                    cin>>marks;
                    Total_marks=Total_marks+marks;
                    //We will calculate total marks here itself as for every loop marks will change and get added here only//
                }
                //If we calculate total marks at the end, it will only take marks of the last subject entered.//
                q=1;

                goto M;

            case 4:

                 if(q==0)
                {
                    cout<<"No information\n";
                }
                else
                {
                    cout<<"-----------------------------------\n";
                    cout<<"Academic Summary\n";
                    cout<<"-----------------------------------\n";

                    //Formula for avg marks and percentage will change slightly as no of subjects will keep changing//
                    cout<<left<<setw(25)<<"Total Marks"<<right<<setw(2)<<":"<<Total_marks<<"\n";
                    Avg_marks = ((Total_marks)/no_sub);
                    cout<<left<<setw(25)<<"Average Marks"<<right<<setw(2)<<":"<<Avg_marks<<"\n";
                    Percentage = ((Total_marks*100)/(no_sub*100));
                    cout<<left<<setw(25)<<"Percentage"<<right<<setw(2)<<":"<<Percentage<<"\n";

                    if (Percentage>=40)/*We can also use the switch case instead of if/else*/
                    {
                        cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<":"<<"PASS"<<"\n";
                    }
                    else
                    {
                        cout<<left<<setw(25)<<"RESULT"<<right<<setw(2)<<":"<<"FAIL"<<"\n";
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
            }
            case 5:
                cout<<"Thank You...";

        }
        }
    return 0;

}
