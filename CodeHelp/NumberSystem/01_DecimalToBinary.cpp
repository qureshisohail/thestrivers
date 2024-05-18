#include<iostream>
#include<cmath>
using namespace std;

float decimalToBinary(int n)
{
    float binaryNumber = 0 ,i = 0;

    while(n > 0)
    {
        int bit = n%2;
        binaryNumber = bit * pow(10,i++) + binaryNumber;
        n = n/2;
    }

    return binaryNumber;
}

float decimalToBinaryBitwise(int number)
{
    float binaryNumber = 0;
    int i = 0;

    while(number > 0)
    {
        int bit = number & 1;
        binaryNumber = bit* pow(10,i++) + binaryNumber;

        number = number >> 1;
    }

    return binaryNumber;
}


int main()
{
    int number;
   
 cout <<"Enter Decimal Number"<<endl;  
 cin >> number;
 cout <<"Binary "<< decimalToBinaryBitwise(number);
 
}