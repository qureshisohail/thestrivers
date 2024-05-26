#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int num;

    cout << "Enter a number"<<endl;
    cin>>num;

    if(cin.fail())
    {
        cout << "Failed";
    }
    else
    {
        cout << "Success";
    }
}