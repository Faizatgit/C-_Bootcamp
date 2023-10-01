#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;

// void even_Number(int n1, int n2)
// {
//     for (int i = n1; i <= n2; i++)
//     { 

//         if (i<2)
//         {
//             continue;
//         }

//         bool is_Prime =  true;
//         for (int j = 2; j <= sqrt(i); j++)
//         {
//             if (i%j == 0)
//             {
//                 is_Prime = false;
//                 break;
//             }
            
//         }
//         if (is_Prime)
//         {
//             cout<<i<<" ";
//         }
        
        
//     }
    
// }

// int main()
// {
//     int a, b;
//     cout<<"Enter the first Number: ";
//     cin>>a;
//     cout<<"Enter the second Nember: ";
//     cin>>b;
//     even_Number(a ,b);
//     return 0;
// }

// bool checkPrime(int n) {
// int i;
// bool isPrime = true;
// 0 and 1 are not prime numbers
// if (n == 0 || n == 1) {
// isPrime = false;
// }
// else {
// for(i = 2; i <= n/2; ++i) {
// if(n % i == 0) {
// isPrime = false;
// break;
// }
// }
// }
// return isPrime;
// }

// int main()
// {
//     int n, i;
//     bool flag = false;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for ( i = 2; i <= n/2; i++)
//     {
//         if (checkPrime(i))
//         {
//             if (checkPrime(n-i))
//             {
//                 cout<<n<<" = "<<i<<" + "<<n-1<<endl;
//                 flag = true;
//             }
            
//         }
        
//     }
//     if (!flag)
//     {
//         cout<<n<<" cannot be expressed in the form of two prime numbers! ";
//     }
    
//     return 0;
    
// }

// int binaryToDecimal(string& binary)
// {
//     int decimal = 0;
//     int length = binary.length();

//     for (int i = length - 1 ; i >= 0 ; i--)
//     {
//         int digit = binary[i] - '0';
//         decimal += digit * pow(2, length-1-i);
//     }
    
//     return decimal;
// }

// int main()
// {
//     string binaryNum;
//     cout<<"Enter the binary number: ";
//     cin>>binaryNum;
//     int res = binaryToDecimal(binaryNum);
//     cout<<"Corresponding binary number for the given decimal number is: "<<res;
//     return 0;
// }

string decimalToBinary( int decimal)
{
    string binary = "";
    while(decimal>0)
    {
        int remainder = decimal%2;
        binary = binary + to_string(remainder);
        decimal /= 2;
    }
    reverse(binary.begin(),binary.end());
    return binary;

}

int main()
{
    int decimal;
    cout<<"Enter a decimal number: ";
    cin>>decimal;

    string res = decimalToBinary(decimal);
    cout<<"\nThe corresponding Binary Number of entered Decimal Number is :"<<endl <<res;
    return 0;

}