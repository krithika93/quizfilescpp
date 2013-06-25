#include<iostream>
#include<cstdlib>
#include<cstring>
#include<fstream>//presemnce of mind
using namespace std;
//class string
//{
//private:
//int length;
//char *P;
//public:
//string()
//{}

//char* string(char *a)
//{
//int length;
//length=strlen(a);
//P=new char[length+1];
//strcpy(P,a);
//return P;
//}

//};
int main()
{
ofstream fout("dat");
//fout("dat");
string s1="hello";
string s2="<"+s1+">";//string manipulattion
//char *s4;//how to add a charactet

// c++ book cover malloc free pointer 
//int len=malloc(sizeof(int)*len);
cout<<s2<<endl;
fout<<s2;
int l;
l=s2.length();
fout.close();
ifstream din("dat");
char ch;
char a;
string s;
for(int i=0;i<l;i++)
{
din.get(ch);
if(ch=='<')
{
din.get(ch);
while(ch!='>')
{
cout<<ch;
s=s+ch;
din.get(ch);

}
break;
}
}

cout<<endl;
cout<<s<<endl;
din.close();
return 0;
}

