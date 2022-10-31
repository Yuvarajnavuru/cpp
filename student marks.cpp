#include<iostream>
using namespace std;
class student
{
public:
string name;
int regno, mark1,mark2,mark3,mark4;
float avg;
void input();
void calculation();
void display();
};
void student::input()
{
cout<<"\n\nENTER THE STUDENT NAME => ";
cin>>name;
cout<<"\nENTER THE REGISTER NUMBER => ";
cin>>regno;
cout<<"\nEnter the marks in python => ";
cin>>mark1;
cout<<"\nEnter the mark in C => ";
cin>>mark2;
cout<<"\nEnter the mark in Maths => ";
cin>>mark3;
cout<<"\nEnter the mark in physics => ";
cin>>mark4;
}
void student::calculation()
{
avg=(mark1+mark2+mark3+mark4)/4;
}
void student::display()
{
cout<<"\nAVERAGE SCORE IS => "<<avg;
if(avg>75)
cout<<"\nDISTINCTION";
if(avg>60 && avg<75)
cout<<"\nfIRST DIVISION";
if(avg>50 && avg<60)
cout<<"\nSECOND DIVISION";
if(avg>40 && avg<50)
cout<<"\nTHIRD DIVISION";
if(avg<40)
cout<<"\nFAIL";
}
int main()
{
int number;
student s[20];
cout<<"ENTER THE NUMBER OF STUDENT ENTRIES => ";
cin>>number;
for(int i=0;i<number;i++)
{
s[i].input();
s[i].calculation();
s[i].display();
}
}

