#include<iostream>
#include<string>
using namespace std;

// int main()
// {
//     int N , sum = 0;
//     cout<<"Enter the number: ";
//     cin>>N;
//     for (int i = 0; i <= N; i++)
//     {
//         sum = sum + i;
//     }
//     cout<<"Sum of numbers= "<<sum;

//     return 0;
// }

// int main()
// {
//     int fact = 1;
//     int N;
//     cout<<"Enter the value whose factorial is to be found: ";
//     cin>>N;
//     for (int i = 1; i <= N; i++)
//     {
//         fact = fact*i;
//     }
//     cout<<"Factorial of "<<N<<" is "<<fact;
//     return 0;
    
// }

// int main()
// {
//     int N;
//     cout<<"Enter the number whose table is to be formed: ";
//     cin>>N;
//     for (int i = 1; i < 11; i++)
//     {
//         cout<<N<<" * "<<i<<" = "<<N*i<<"\n";
//     }
//     return 0;
    
// }

// int main()
// {
//     int N;
//     cout<<"Enter the value upto which the fibonacci series is to be found: ";
//     cin>>N;
//     int F1 = 0;
//     int F2 = 1;
//     int nextTerm;
//     for (int i = 1; i <= N; i++)
//     {
//         if (i == 1)
//         {
//             cout<<F1<<", ";
//             continue;
//         }
//         if (i == 2)
//         {
//             cout<<F2<<", ";
//         }

//         nextTerm = F1+F2;
//         F1 = F2;
//         F2 = nextTerm;
//         cout<<nextTerm<<", ";
        
//     }

//     return 0;
    
// }

// int main()
// {
//     int a, b, r;
//     cout<<"Enter first number: ";
//     cin>>a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     r = a%b;
//     while (r != 0)
//     {
//         a = b;
//         b = r;
//         r = a%b;
//     }
    
    
//     cout<<"GCD: "<<b;
//     return 0;
// }

// int main()
// {
//     int a, b, r, lcm, N1, N2;
//     cout<<"Enter first number: ";
//     cin>>a;
//     N1 = a;
//     cout<<"Enter second number: ";
//     cin>>b;
//     N2 = b;
//     r = a%b;
//     while (r != 0)
//     {
//         a = b;
//         b = r;
//         r = a%b;
//     }
//     lcm = (N1*N2)/b;
//     cout<<"LCM of two numbers: "<<lcm;
//     return 0;
// }


int main()
{
    int N;
    int reversedNumber = 0;
    int remainder;
    cout<<"Enter the number: ";
    cin >> N;
    while (N!=0)
    {
        remainder = N%10;
        reversedNumber = reversedNumber * 10 + remainder;
        N = N/10;
    }
    cout<<"Reversed number is: "<<reversedNumber;
    return 0;
    
}