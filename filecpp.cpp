#include<iostream>
#include<fstream>

#include<stdlib.h>
using namespace std;
int main()
{
	system("clear");
	char ch;
	ifstream fin;
	fin.open("dat",ios::in);
if(!fin)
{
 cout<<"Cannot open file!! \n";
	return 1;
}
string s1("");
while(fin)
{
 fin.get(ch);
s1=s1+ch;
cout<<ch;
}

fin.close();
cout<<s1<<endl;
return 0;
}
