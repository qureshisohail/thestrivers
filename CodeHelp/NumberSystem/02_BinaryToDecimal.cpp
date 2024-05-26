#include<iostream>
#include<cmath>
using namespace std;

float BinaryToDecimal(int number)
{
    int num = 3.4;
    float decimalNumber = 0;
    int i = 0;

    while(number > 0)
    {
        int bit = number % 10;

        decimalNumber += bit * pow(2,i++);

        number = number /10;
    }

    return decimalNumber;
}

float BinaryToDecimalBitwise(int number)
{
    float decimalNumber = 0;
    int i = 0;

    while(number > 0)
    {
        int bit = number & 1;

        decimalNumber += bit * pow(2,i++);

        number = number /10;
    }

    return decimalNumber;
}
int main()
{
    int number;
   
 cout <<"Enter Binary Number"<<endl;  
 cin >> number;
 cout <<"Decimal "<< BinaryToDecimal(number);
 
}