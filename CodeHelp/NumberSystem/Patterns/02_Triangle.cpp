#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n = 10;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
                cout << "* ";
        }

        cout<<endl;
    }

     for(int row = 0;row<n;row++)
     {
        int totalColumns = row + 1;
        for(int col = 0;col<totalColumns;col++)
        {
            
                if(row == 0 || col == 0 || row == col || row == n-1)
                    cout <<"# ";
                else
                   cout <<"  ";                            
                        
        }

            cout <<"\n";

     }
}