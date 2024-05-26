#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int row = 10;
   

    for(int i=row;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            cout << "* ";
        }

        cout<<endl;
    }

    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<row-i;j++)
        {
            if(i == 0 || j == 0 || i == row-1 || i+j == row-1)
            cout << "# ";
            else cout <<"  ";
        }

        cout<<endl;

    }


  for(int i=row;i>0;i--)
    {
        for(int j=i;j>0;j--)
        {
            
        }

    }

    

}