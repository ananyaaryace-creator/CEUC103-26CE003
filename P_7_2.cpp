#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char para[200],first_word[15],last_word[15];
    int ch,i,j,k,word=0,alphabets=0,digits=0,spe_ch,space=0;

    cout<<"*********************************************\n";
    cout<<"\tDOCUMENT TEXT ANALYZER\n";
    cout<<"*********************************************\n\n";

    cout<<"Enter paragraph :";
    cin.getline(para,200);
    //Always use getline to take input for array variable.

    cout<<"---------------------------------------------\n";
    cout<<"\t Text Analysis\n";
    cout<<"---------------------------------------------\n\n";

    //for characters;

    for(i=0;para[i]!='\0';i++){
        if(para[i]!=' ' && para[i-1]==' '){
            word++;
        }
        if(para[i]>='A' && para[i]<='Z' || para[i]>='a' && para[i]<='z'){
            alphabets++;
        }
        if(para[i]>='0' && para[i]<='9'){
            digits++;
        }
        if(para[i]==' '){
            space++; //finding space because we have to find special characters afterwards
        }
    }
    ch = i;//all are characters
    if(para[0]!=' '){
        word++;
    }
    spe_ch = ch-space-digits-alphabets;
    cout<<left<<setw(20)<<"Character"<<": "<<ch<<endl;
    cout<<setw(20)<<"Word"<<": "<<word<<endl;
    cout<<setw(20)<<"Alphabets"<<": "<<alphabets<<endl;
    cout<<setw(20)<<"Digits"<<": "<<digits<<endl;
    cout<<setw(20)<<"Special Characters"<<": "<<spe_ch<<endl;

    //Part B – String Extraction

    cout<<"\n---------------------------------------------\n";
    cout<<"\t String Extraction\n";
    cout<<"---------------------------------------------\n\n";

    cout<<left<<setw(15)<<"First word"<<": ";

    //first word
    i=0;//if we dont initilaise,and para[0]!=' ', i will have no value and j=i will not work in the second loop
    if(para[0]==' ')
    {
        for(i=0;para[i]==' ';i++){}
    }
        for(j=i;para[i]!=' ' && para[i]!='\0';i++,j++)
        {
            cout<<para[i];
        }
        cout<<endl;

    //last word
    cout<<"Last word : ";
    for(i=0;para[i]!='\0';i++){}
    i--;//i goes from '\0' to the last letter of the word
        if(para[i]==' ')
        {
            for(j=i;para[j]==' ';j--,i--){}
        }
    for(j=i;para[j]!=' ';j--,i--){}

    for(j=i+1;para[j]!='\0';j++,i++)
    {
        cout<<para[j];
    }
    cout<<endl;

    cout<<"First Character : "<<para[0]<<endl;

    for(i=0;para[i]!='\0';i++){}
    cout<<"Last Character : "<<para[i-1]<<endl;

    //Part C - String Concatenation

    cout<<"---------------------------------------------\n\n";
    cout<<"STRING CONCATENATION"<<endl;
    cout<<"---------------------------------------------\n\n";

    char new_para[100];
    char whole[200];

    cout<<"Enter Additional Sentence :";
    cin.getline(new_para,100);

    for(i=0;para[i]!='\0';i++)
    {
        whole[i]=para[i];
    }

    for(j=0;new_para[j]!='\0';j++,i++)
    {
        whole[i]=new_para[j];
    }
    whole[i]='\0';
    cout<<"Updated Paragraph "<<endl<<whole<<endl<<endl;

    //Part D – Pattern Matching

    cout<<"---------------------------------------------\n\n";
    cout<<"Pattern Matching"<<endl;
    cout<<"---------------------------------------------\n\n";

    char key[200];

    cout<<"Enter search word : ";
    cin.getline(key,200);
    bool found=false;

    for(i=0;whole[i]!='\0' && found==false;i++)//found==false is a necessary condition to exit the outer loop if keyword is found
    {
        for(j=0;key[j]!='\0';j++)
        {
            if(key[j]==whole[i+j])//whole[i+j] is necessary
            {
                if(key[j+1]=='\0')
                {
                    found = true;
                    k=i;
                    break;//exit from inner loop
                }
            }
            else{break;}//to exit from the outer loop
        }
    }
    if(found==true)
    {
        cout<<"Keyword Found"<<endl;
        cout<<"First Occurence position "<<k<<endl;
    }
    else{
        cout<<"Keyword Not Found"<<endl;
    }

    //Part E – String Transformation

    cout<<"---------------------------------------------\n\n";
    cout<<"String Transformation"<<endl<<endl;
    cout<<"---------------------------------------------\n\n";

    cout<<"Uppercase "<<endl;
    for(i=0;whole[i]!='\0';i++)
    {
        if(whole[i]>='a' && whole[i]<='z')
        {
            cout<<(char)(whole[i]-32);
        }
        else{
            cout<<whole[i];
        }
    }
    cout<<endl<<endl;
    cout<<"---------------------------------------------\n\n";

    cout<<"Lowercase "<<endl;
    for(i=0;whole[i]!='\0';i++)
    {
        if(whole[i]>='A' && whole[i]<='Z')
        {
            cout<<(char)(whole[i]+32);
        }
        else{
            cout<<whole[i];
        }
    }
    cout<<endl<<endl;

    cout<<"---------------------------------------------\n\n";

    cout<<"Reverse"<<endl;
    for(i=0;whole[i]!='\0';i++){}
    i--;
    for(j=i;j>=0;j--,i--)
    {
        cout<<whole[i];
    }
    cout<<endl<<endl;

    cout<<"---------------------------------------------\n\n";

    cout<<"Palindrome"<<endl;
    char check[10],r_word[10];
    found=true; //to check in the if conditional statement

    cout<<"Enter word : ";
    cin>>check;

    for(i=0;check[i]!='\0';i++){}
    i--;
    for(j=0;j<=i;j++)//starts the index from first and copies the last element of word from i as it is at '\0'
    {
        r_word[j]=check[i-j];
    }
    r_word[j]='\0';//to end the word

    for(i=0;check[i]!='\0';i++)
    {
        if(check[i]!=r_word[i])
        {
            found=false;
        }
    }
    if(found==true)
    {
        cout<<"Result : Palindrome"<<endl;
    }
    else{
        cout<<"Result : Not Palindrome"<<endl;
    }



}
