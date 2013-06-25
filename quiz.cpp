#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<cmath>
#include<sstream>
#include<ostream>
#include<istream>//set pointer too how much developed
#include<string>
using namespace std;

int main()
{
char a;

string ans_f(" ");
string ans(" ");
string question(" ");
string ques_f(" ");
string options(" ");
int points;
int n;

char ch;
string s(" ");
//int nn=(rand()%n)+1;
char cc;
string user(" ");
string us(" ");

string no;
ostringstream convert;


int i=0;//store in an array is possible all the file strings
do
{
cout<<"Welcome to the world of quiz.Select you want to read a question or \n add a question "<<endl;
cin>>a;
cin.ignore();
if(a== 'a')
{
ofstream fout("dat");//put do while after

cout<<"How many no. of questions you want to add to your database"<<endl;
cin>>n;
cin.ignore();
for( i=0;i<n;i++)
{
cout<<"Enter the question you want to add to our question and the options to the database"<<endl;
getline(cin,question);
//show the contents of the file 
cout<<"Enter the options now"<<endl;
getline(cin,options);
convert<<(i+1);
no=convert.str();
ques_f= "<"+no+question+options+">";
fout<<ques_f;
cout<<"Enter the right option"<<endl;
getline(cin,ans);//we can write from the same file the variables
ans_f="["+no+ans+"]";
fout<<ans_f;
}
fout.close();

}
ifstream din("dat");
//din.seekg(0);
//int nn=rand()%5+1;
int nn=1;

if(a=='r')
{
ifstream fin("dat");
     string s("");
if(!fin)
{
 cout<<"Cannot open file!! \n";
	return 1;
}
int nn=rand(1,2);
if(nn==1)
{
while(fin)
{//go to another file how is it possible?? 
//cout<<"hh"<<endl;//read before write breaks both the loops?
 fin.get(ch);
//cout<<ch;
if(ch=='1')
{
while(fin)
{
fin.get(ch);

if(ch=='>')
{
break;
}
//fin.get(ch);
 s=s+ch; 
}
break;
}

}
int n=0;
string s1("");
while(fin)
{
fin.get(ch);
if(ch=='1')
{
while(fin)
{

fin.get(ch);//while charactor read from files have spaces

if(ch==']')
{
break;
}
n=1;
s1=s1+ch;
}
break;
}
}
string s2("");
cout<<"Enter your answer"<<endl;
//s1.erase(0,1);
//s.erase(0.1);
if((s1.compare(s2))==0)
{
cout<<"correct answer"<<endl;
}

cout<<s2<<endl;
cout<<s<<endl;
cout<<s1<<endl;


}
}
if(nn=2)
{
	ifstream fin("dat");
     string s("");
if(!fin)
{
 cout<<"Cannot open file!! \n";
	return 1;
}
while(fin)
{//go to another file how is it possible?? 
//cout<<"hh"<<endl;//read before write breaks both the loops?
 fin.get(ch);
//cout<<ch;
if(ch=='1')
{
while(fin)
{
fin.get(ch);

if(ch=='>')
{
break;
}
//fin.get(ch);
 s=s+ch; 
}
break;
}

}
int n=0;
string s1("");
while(fin)
{
fin.get(ch);
if(ch=='1')
{
while(fin)
{

fin.get(ch);//while charactor read from files have spaces

if(ch==']')
{
break;
}
n=1;
s1=s1+ch;
}
break;
}
}
string s2("");
//s1.erase(0,1);
//s.erase(0.1);
if((s1.compare(s2))==0)
{
cout<<"correct answer"<<endl;
}
else
{
cout<<"wrong answer"<<endl;
}
}

cout<<s2<<endl;
cout<<s<<endl;
cout<<s1<<endl;
}

cout<<"Do you wanna continue?(y/n)"<<endl;
char choice;
cin>>choice;
}while(choice!='n');
fin.close();//closes?
return 0;

}


