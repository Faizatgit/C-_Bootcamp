#include<iostream>
using namespace std;


    //  --> Calculator program
int main()
{
    int a,b,c;
    cout<<"Enter the value of a \n";
    cin>>a;
    cout<<"Enter the value of b \n";
    cin>>b;
    cout<<"Press 1 for sum"<<endl;
    cout<<"Press 2 for difference"<<endl;
    cout<<"Press 3 for multiplication"<<endl;
    cout<<"Press 4 for division"<<endl;
    cin>>c;
    if(c==1){
    cout<<"Sum of two numbers ="<<a+b<<endl;
    }
    else if(c==2){
    cout<<"Product of two numbers ="<<a-b<<endl;
    }
    else if(c==3){
    cout<<"Multiple of two numbers ="<<a*b<<endl;
    }
    else if(c==4){
    cout<<"Division of two numbers ="<<a/b<<endl;
    }

    return 0;
}


    //   -->  Swapping of two numbers
// int main()
// {
//     int a,b;
//     cout<<"Enter the first number"<<endl;
//     cin>>a;
//     cout<<"Enter the second number"<<endl;
//     cin>>b;
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
//     cout<<"After swapping the number \n"<<"First number = \n"<<a<<"\nsecond number = \n"<<b<<endl;
//     return 0;
// }


    //  -->  HCF
// int main()
// {
//     int a,b,d;
//     cout<<"Enter the larger number"<<endl;
//     cin>>a;
//     cout<<"Enter the smaller number"<<endl;
//     cin>>b;
//     d = 1;
//     while(d!=0){
//         d = a%b;
//         a = b;
//         b = d;

//     }
//     cout<<"HCF of of the given two numbers is "<<a<<endl;
//     return 0;
    
// }


