#include<iostream>
#include<fstream>
using namespace std;
class quiz
{
public:
int k;
char name[30];
char choice[3];         

string question
cout<<"Welcome to submit your questions"<<endl;
cout<<"Enter the subject you want from the two choices: 'Geo' for geography,'His' for history"<<endl;
cin>>choice;
if(choice=="Geo")
{
geography::question1();
}
if(choice=="His")
{
history::question1();
}

};
class geography
{

public:
void question1()
{
ifstream inf("ITEM");
cout<<"1"<<endl
cout<<"Which is the most beautiful river in the world"<<endl;
cout<<"amazon"<<endl
cout<<"nile"<<endl;
cout<<"ganges"<<endl;
cout<<"yamuna"<<endl;
cout<<"nile"<<endl;
cout<<"2"<<endl;
cout<<"Which is most highest peak in the world"<<endl;
cout<<"mount everest"<<endl;
cout<<"kanchenjunga"<<endl;
cout<<"nanda parbathi"<<endl;
cout<<"anapoorni"<<endl;
}
void answer()
{
ofstream outf("ITEM1")
cout<<"amazon"<<endl;
cout<<"mount everest"<<endl;//answer repeats or not
}
};






//winzip kate
//ofstream outf("ITEM"); //dll file, object creation,spelling correctyl
cout<<"Enter the item name";//i want  to work at microsoft
char name[30];//answer can change any time u can read faster...
cin>>name;
outf<<name<<"\n";
cout<<"Enter item cose:";
float cost;
cin>>cost;
outf<<cost<<"\n";
outf.close();
ifstream inf("ITEM");
inf>>name;
inf>>cost;
cout<<"\n";
cout<<"Item name:"<<name<<"\n";
cout<<"Item cost:"<<cost<<"\n";
inf.close();
return 0;
}


