#include<iostream>
using namespace std;

// void solid_rectangle(int n, int m)
// {
//     int i, j;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= m; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
// void hollow_rectangle(int n, int m)
// {
//     int i, j;
//     for ( i = 0; i < n; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             if (i==0 || j==0 || i== n-1|| j== m-1)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<< endl;
        
//     }
    
// }

// void half_pyramid(int n, int m)
// {
//     int i, j;
//     for ( i = 1; i <= n ; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             if (i > j)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
        
//     }
    
// }

// void inverted_pyramid(int n, int m)
// {
//     int i, j;
//       for ( i = 0; i < n ; i++)
//     {
//         for ( j = 1; j <= m; j++)
//         {
//             if (i < j)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
        
//     }
// }

// int main()
// {
//     int r, c;
//     cout<<"Enter number of rows: ";
//     cin>>r;
//     cout<<"Enter number of columns: ";
//     cin>>c;
//     cout<<endl;
    // solid_rectangle(r,c);
    // hollow_rectangle(r,c);
    // half_pyramid(r,c);
//     inverted_pyramid(r,c);
//     return 0;
// }

// int main()
// {
//     int i, j, n;
//     cout<<"Enter n: ";
//     cin>>n;
//     for ( i = n; i >= 1; i--)
//     {
//         for ( j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
        
//     }
//     return 0;
    
// }

// int main()
// {
//     int n;
//     int k = 0;
//     cout<< "Enter the number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; ++i, k=0)
//     {
//         for (int j = 1; j <= n-1; ++j)
//         {
//             cout<<" ";
//         }
//         while (k!=2*i-1)
//         {
//             cout<<"* ";
//             ++k;
//         }
        
//         cout<<endl;
        
        
//     }
//     return 0;
    
// }

// void number_pyramid(int n, int m)
// {
//     int i, j;
//     int k = 0;
//     for ( i = 1; i <= n ; i++)
//     {
//         for ( j = 0; j < m; j++)
//         {
//             if (i > j)
//             {
//                 cout<<++k;
//             }
//             else{
//                 cout<<" ";
//             }
            
//         }
//         cout<<endl;
//         k = 0;
        
//     }
    
// }

// int main()
// {
//     int r, c;
//     cout<< "Enter number of rows: ";
//     cin>>r;
//     cout<<"Enter number of columns: ";
//     cin>>c;
//     number_pyramid(r, c);
//     return 0;
// }

