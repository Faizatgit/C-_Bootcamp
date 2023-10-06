#include <iostream>
using namespace std;

// int main()
// {
//     int rows;
//     int column;
//     cout<<"Enter number of rows: ";
//     cin>>rows;
//     cout<<"Enter number of colums: ";
//     cin>>column;

//     int matrix1[rows][column];
//     int matrix2[rows][column];
//     int matrix3[rows][column];
//     int i, j;

//     cout<<"Enter data in matrix1: ";
//     for ( i = 0; i < rows; i++)
//     {
//         for ( j = 0; j < column; j++)
//         {
//             cin>>matrix1[i][j];
//         }

//     }
//     cout<<"Enter data in matrix2: ";

//     for ( i = 0; i < rows; i++)
//     {
//         for ( j = 0; j < column; j++)
//         {
//             cin>>matrix2[i][j];
//         }

//     }

//     for ( i = 0; i < rows; i++)
//     {
//         for ( j = 0; j < column; j++)
//         {
//             matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
//         }

//     }

//     cout<<"Resutant matrix: "<<endl;
//     for ( i = 0; i < rows; i++)
//     {
//         for ( j = 0; j < column; j++)
//         {
//             cout<<matrix3;
//         }

//     }

//     return 0;

// }

// int main()
// {
//     int r1;
//     int c1;
//     int r2;
//     int c2;
//     int i, j;
//     cout << "Enter number of rows of matrix1: ";
//     cin >> r1;
//     cout << "Enter number of columns of matrix2: ";
//     cin >> c1;
//     cout << "Enter number of rows of matrix2: ";
//     cin >> r2;
//     cout << "Enter number of columns of matrix2: ";
//     cin >> c2;

//     if (c1 != r2)
//     {
//         cout << "Matrix multiplication cannot be done! " << endl;
//     }
//     else
//     {
//         int matrix1[r1][c1];
//         int matrix2[r2][c2];
//         int matrix3[r1][c2];

//         cout << "Enter elements of matrix1: " << endl;
//         for (i = 0; i < r1; i++)
//         {
//             for (j = 0; j < c1; j++)
//             {
//                 cin >> matrix1[i][j];
//             }
//         }

//         cout << "Enter elements of matrix2: " << endl;
//         for (i = 0; i < r2; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 cin >> matrix2[i][j];
//             }
//         }

//         for (i = 0; i < r1; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 matrix3[i][j] = 0;
//                 for (int k = 0; k < c1; k++)
//                 {
//                     matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
//                 }
//             }
//         }

//         cout << "Matrix after multiplication: " << endl;

//         for (i = 0; i < r1; i++)
//         {
//             for (j = 0; j < c2; j++)
//             {
//                 cout << matrix3[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// int main()
// {
//     int r, c;
//     int i, j;
//     cout<<"Enter number of rows: ";
//     cin>>r;
//     cout<<"Enter number of columns: ";
//     cin>>c;
//     int arr[r][c];
//     cout<<"Enter elements of a mtarix: "<<endl;
//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//     }

//     cout<<"MAtrix before transpose: "<<endl;

//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             if (i > j)
//             {
//                 int temp = arr[i][j];
//                 arr[i][j] = arr[j][i];
//                 arr[j][i] = temp;

//             }
            
//         }
        
//     }

//     cout<<"Matrix after transpose: "<<endl;

//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     cout<<"Enter the value of a, b and c: "<<endl;
//     cin>>a>>b>>c;
//     cout<<"VAlue of a, b and c before swapping is: "<<endl;
//     cout<<a<<" "<<b<<" "<<c<<" "<<endl;

//     int *ptr1 = &a;
//     int *ptr2 = &b;
//     int *ptr3 = &c;

//     int temp;
//     temp = *ptr1;
//     *ptr1 = *ptr3;
//     *ptr3 = *ptr2;
//     *ptr2 = temp;

//     cout<<"Value of a, b and c after swapping is: "<<endl;
//     cout<<*ptr1<<" "<<*ptr2<<" "<<*ptr3;

//     return 0;
// }