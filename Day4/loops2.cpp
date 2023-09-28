#include<iostream>
#include<cmath>
#include<string>
using namespace std;

// int main()
// {
//     int N;
//     int remainder;
//     int sum = 0;
//     cout << "Enter the value of N: ";
//     cin >>N;
//     while (N!=0)
//     {
//         remainder = N%10;
//         sum = sum + remainder;
//         N = N/10;
//     }
//     cout<<"Sum of all digits of a number is: "<<sum;
//     return 0;
    
// }

// int main()
// {
//     int b, e;
//     int power;
//     cout<<"Enter the value of base: ";
//     cin>>b;
//     cout<<"Enter the value of exponent: ";
//     cin>>e;
//     power = pow(b,e);
//     cout<<"The value of "<<b<<" to the power "<<e<<" = "<<power;
//     return 0;

// }

// int main()
// {
//     int N;
//     int remainder;
//     string str1, str2;
//     int reversedNumber = 0;
//     cout<<"Enter the number: ";
//     cin >>N;
//     str1 = to_string(N);
//     while (N != 0)
//     {
//         remainder = N%10;
//         reversedNumber = reversedNumber * 10 + remainder;
//         N = N/10;
//     }
//     str2 = to_string(reversedNumber);
//     if (str1 == str2)
//     {
//         cout<<str1<<" is palindrome";
//     }
//     return 0;
    
// }

// int main()
// {
//     int N;
//     cout << "Enter the number: ";
//     cin >> N;
//     if (N <= 1)
//     {
//        cout << N << " is not a prime number";
//     }
//     if (N == 2)
//     {
//         cout << N << " is a prime number";
//     }
//     if (N == 3)
//     {
//         cout << N << " is a prime number";
//     }
//     for (int i = 2; i <= sqrt(N); i++)
//     {
//         if (N%i == 0)
//         {
//             cout<< N << " is a not a prime number";
//         }
       
//     }
//     cout << N << " is a prime number";
   

//     return 0;
    
    
// }

// int main()
// {
//     int N1, N2;
//     cout<<"Enter the first number: ";
//     cin >> N1;
//     cout<<"Ente the second numner: ";
//     cin >> N2;
//     cout<< "Prime numbers between given two numbers are: ";
//     for (int i = N1; i <= N2; i++)
//     {
//         if (i < 2 )
//         {
//             continue;
//         }
//         bool is_prime = true;
//         for (int j = 2; j <= sqrt(i) ; j++)
//         {
//             if (i%j == 0)
//             {
//                 is_prime = false;
//                 break;
//             }
            
//         }
//         if (is_prime)
//         {
//             cout<<i<<", ";
//         }
//     }
    
    
//     return 0;
    
    
// }

// int main()
// {
//     int n, count , remainder = 0, sum = 0;
//     string str;
//     cout<< "Enter a number: ";
//     cin>>n;
//     int N = n;
//     str = to_string(n);
//     count = str.length();

//     while (n!=0)
//     {
        
//         remainder = n%10;
//         sum = sum + pow(remainder,count);
//         n = n/10;
    
//     }

//     if (sum == N)
//     {
//         cout << sum <<" is an armstrong number";
//     }
//     else{
//         cout<<sum<<" is not an armstrong number";
//     }
//     return 0;
    
// }

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     cout<<"Factors of "<<n<<" are: ";
//     for (int i = 2; i <= n/2 ; i++)
//     {
//         if (n%i == 0)
//         {
//             cout<<i<<", ";
//         }
        
//     }
//     return 0;
// }

