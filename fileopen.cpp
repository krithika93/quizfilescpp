#include<iostream>
#include<fstream>
using namespace std;
class hello
{
public:
hello()
{
}
void good()
{
fstream hello1("hello1.dat");
//hello1<<"hel";
hello1.close();//closing is important.
}
};
int main()
{
hello a;
a.good();
}














