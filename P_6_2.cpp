/*ARRAYS
    This practical also includes more functions like Search a participant,sorting and display according to ranks
  Last updated on : 8 September 2026*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int n,i,j;

    cout<<"****************************************\n";
    cout<<"SPORTS EVENT SCORE ANALYSIS\n";
    cout<<"****************************************\n";

    cout<<left<<setw(28)<<"Enter number of participants"<<right<<setw(2)<<":";
    cin>>n;

    //We use [n] hereas array, it changes as the value of i change in the loop//
    string part_ID[n],part_Name[n];
    float part_score[n];

    //To register multiple participants//
    for(i=0;i<n;i++)
    {
        cout<<left<<setw(25)<<"Enter Participant Id"<<right<<setw(2)<<":";
        cin>>part_ID[i];
        cout<<left<<setw(25)<<"Enter Participant Name"<<right<<setw(2)<<":";
        cin>>part_Name[i];
        cout<<left<<setw(25)<<"Enter Participant Score"<<right<<setw(2)<<":";
        cin>>part_score[i];
        cout<<endl;
    }

    float total_score=0,avg_score=0,lowest_score=part_score[0],highest_score=part_score[0];
//Initializing the value of total_score and avg_score as zero to calculate the score properly//
    cout<<"--------------------------------------------------\n";
    cout<<"Participant Performance\n";
    cout<<"--------------------------------------------------\n";

    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(20)<<"Name";
    cout<<left<<setw(30)<<"Score"<<"\n";
    cout<<"--------------------------------------------------\n";

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(5)<<part_ID[i]<<left<<setw(20)<<part_Name[i]<<left<<setw(30)<<part_score[i]<<endl;
        total_score= (total_score + part_score[i]);

        if(part_score[i]>highest_score)
        {
            highest_score = part_score[i];
        }
        if(part_score[i]<lowest_score)
        {
            lowest_score = part_score[i];
        }
    }
    cout<<"--------------------------------------------------\n";

    avg_score = (total_score/n);

    cout<<left<<setw(15)<<"Total Score"<<right<<setw(2)<<":"<<total_score<<endl;
    cout<<left<<setw(15)<<"Average Score"<<right<<setw(2)<<":"<<avg_score<<endl;
    cout<<left<<setw(15)<<"Highest Score"<<right<<setw(2)<<":"<<highest_score<<endl;
    cout<<left<<setw(15)<<"Lowest Score"<<right<<setw(2)<<":"<<lowest_score<<endl;

    cout<<"--------------------------------------------------\n";

    string search_ID;
    bool found=false;

    cout<<"****************************************\n";
    cout<<"Search Participant\n";
    cout<<"****************************************\n";

    cout<<left<<setw(35)<<"Enter Participant Id you want to search"<<right<<setw(2)<<":";
    cin>>search_ID;

    for(i=0;i<n;i++)
    {
        if(part_ID[i]==search_ID)
        {
            found=true;
            cout<<"--------------------------------------------------\n";
            cout<<"Participant Found!"<<endl<<"Details:"<<endl;
            cout<<"--------------------------------------------------\n";

             cout<<left<<setw(15)<<"ID"<<right<<setw(2)<<":"<<part_ID[i]<<endl;
             cout<<left<<setw(15)<<"Name"<<right<<setw(2)<<":"<<part_Name[i]<<endl;
             cout<<left<<setw(15)<<"Score"<<right<<setw(2)<<":"<<part_score[i]<<endl;
        }
    }
            if(!found)
        {
            cout<<"Participant with ID "<<search_ID<<" not Found!"<<endl;
        }
    //Using for loop for Sort participant records in descending order of scores.
    //We sort all the three arrays together using the same logic

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(part_score[j]<part_score[j+1])
            {
                //Swaping the scores,name and ids
                float temp_score=part_score[j];
                part_score[j]=part_score[j+1];
                part_score[j+1]=temp_score;

                string temp_ID=part_ID[j];
                part_ID[j]=part_ID[j+1];
                part_ID[j+1]=temp_ID;

                string temp_name=part_Name[j];
                part_Name[j]=part_Name[j+1];
                part_Name[j+1]=temp_name;
            }

        }
    }
    //Display Ranking according to ascending order
    cout<<"--------------------------------------------------\n";
    cout<<"Ranking List"<<endl;
    cout<<"--------------------------------------------------\n";

    cout<<left<<setw(8)<<"Rank";
    cout<<left<<setw(15)<<"ID";
    cout<<left<<setw(20)<<"Name";
    cout<<left<<setw(30)<<"Score"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<left<<setw(8)<<(i+1)<<left<<setw(15)<<part_ID[i]<<left<<setw(20)<<part_Name[i]<<left<<setw(30)<<part_score[i]<<endl;
    }
    cout<<"--------------------------------------------------\n";

    //Display top three performers

    cout<<"--------------------------------------------------\n";
    cout<<"Top Three Performers"<<endl;
    cout<<"--------------------------------------------------\n";

    cout<<left<<setw(8)<<"Rank";
    cout<<left<<setw(15)<<"ID";
    cout<<left<<setw(20)<<"Name";
    cout<<left<<setw(30)<<"Score"<<endl;

    int top;
    if(n<3)
    {
        top=n;
    }
    else
    {
        top=3;
    }

    for(i=0;i<top;i++)
    {
       cout<<left<<setw(8)<<(i+1)<<left<<setw(15)<<part_ID[i]<<left<<setw(20)<<part_Name[i]<<left<<setw(30)<<part_score[i]<<endl;
    }
    cout<<"--------------------------------------------------\n";

}
