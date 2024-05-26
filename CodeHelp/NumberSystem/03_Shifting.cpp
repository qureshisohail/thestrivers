#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char ch = 'A';
    char i = ch >> 1;

    cout<<i<<endl;

    char ich = (char)(ch >> 1);

    cout<<"new char "<<ich;
}