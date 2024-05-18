#include<iostream>

using namespace std;

int main()
{
    
    int a = 5;
    int b = 4;
    
    cout<<"(a&b) AND " <<(a&b)<<endl;
    cout<<"(~a) NOT " <<(~a)<<endl;
    cout<<"(a|b) OR " <<(a|b)<<endl;
    

    cout <<"(5<<1)  Shift Left " <<  (5<<1) <<endl;
    cout <<"(5<<2)  Shift Left " <<  (5<<2) <<endl;
    cout <<"(5<<3)  Shift Left " <<  (5<<3) <<endl;

    cout << "(10>>1) Shift Right " << (10>>1) <<endl;
    cout << "(10>>2) Shift Right " << (10>>2) <<endl;
    cout << "(10>>3) Shift Right " << (10>>3) <<endl;

    cout << " (5^5) XOR " << (5^5) << endl;
    cout << " (5^2) XOR " <<(5^2) << endl;



    return 0;
} 