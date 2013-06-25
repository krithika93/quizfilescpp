virt//basic file program
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

float cost;
char name[30];
char n;
do
{
cout<<"Enter"<<endl;
char a;
cin>>a;
switch(a)
{
case 'r':
{
	ofstream out("ITEM");
	cout<<"Enter item name";
	
	cin>>name;
	
	out<<name<<"\n";
		
	cout<<"Enter item cost:"<<endl;
	
	cin>>cost;
	
	out<<cost<<"\n";
	
	out.close();
	break;
}
case 'a':
{	
	ifstream in("ITEM");
	
	in>>name;
	in>>cost;
	cout<<"\n";
	cout<<"Item name:"<<name<<"\n";
	cout<<"Item cost:"<<cost<<"\n";
	in.close();
	break;
	}

}

cout<<"Do you want to continue?"<<endl;
cin>>n;
}while(n!='n');//can i give conditions for not  if or else for this
	return 0;
			}

