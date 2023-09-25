#include<iostream>
#include<cmath>
using namespace std;

// int main()
// {
//     int a;
//     cout<<"Enter the number:";
//     cin>>a;
//     if( a%2==0 )
//     {
//         cout<<a<<" is an even number";
//     }
//     else{
//         cout<<a<<" is an odd number";
//     }
    
//     return 0;
// }

// int main()
// {
//     char ch, p;
//     cout<<"Enter a character: ";
//     cin >>ch;
//     p = tolower(ch);

//     if ( p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u')
//     {
//         cout<<p<<" is a vowel";
//     }
//     else if (!isalpha(p))
//     {
//         cout<<"Please enter alphabet";
//     }
//     else{
//         cout<<p<<" is not a vowel";
//     }

//     return 0;
    
// }

// int main()
// {
//     int a, b, c;
//     cout<<"Enter the value a \n";
//     cin>>a;
//     cout<<"Enter the value of b \n";
//     cin>>b;
//     cout<<"Enter the value of c \n";
//     cin>>c;

//     if (a>b && a>c)
//     {
//         cout<<a<<" is the largest number";
//     }
//     else if (b>a && b>c)
//     {
//         cout<<b<<" is a largest number";
//     }
//     else{
//         cout<<c<<" is a largest number";
//     }
    
//     return 0 ;
    
// }

// int main()
// {
//     int a, b, c;
//     float D;
//     float r1 , r2;
//     cout << "Please enter the coefficients of quadratic equation: ";
//     cin>>a>>b>>c;
//     D = pow(b,2) - (4*a*c);
//     if (D > 0)
//     {
//         cout<<"Both the roots are real \n";
//         r1 = (-b + sqrt(D)) / (2*a);
//         r2 = (-b - sqrt(D)) / (2*a);
//         cout<<"The roots of the equation are: "<<r1<<" and "<<r2;
//     }
//     else if (D==0)
//     {
//         cout<<"Both the roots are real \n";
//         r1 = -b/(2*a);
//         r2 = -b/(2*a);
//         cout<<"The roots of the equation are: "<<r1<<" and "<<r2;
//     }
//     else{
//         float realPart, imaginaryPart;
//         realPart = -b/(2*a);
//         imaginaryPart = sqrt(-D)/(2*a);
//         cout<<"First root: "<<realPart<<" + "<<imaginaryPart<<"i \n";
//         cout<<"Second root: "<<realPart<<" - "<<imaginaryPart<<"i";
//     }
     
    
//     return 0;
// }

// int main()
// {
//     int y;
//     cout <<"Enter year : ";
//     cin >> y;
//     if (( y%4 == 0 && y%100 != 0) || y%400 == 0)
//     {
//         cout<<y<<" is a leap year";
//     }
//     else
//     {
//         cout<<y<<" is not a leap year";
//     }
//     return 0;
// }