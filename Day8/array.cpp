#include<iostream>
#include<cmath>
using namespace std;

// int main()
// {
//     int N;
//     float arr[N];
//     cout<<"Enter the value of N: ";
//     cin>>N;
//     if (N<0 || N>=100)
//     {
//         cout<<"Please enter number of element between one and hundred: ";
//     }
//     else{
//         cout<<"Slot of elements created successfully: ";
//     }
//     cout<<"Enter the elements: "<<endl;
//     for (int i = 0; i < N; i++)
//     {
//         cin>>arr[i];
//     }
//     float avg = 0;
//     for (int j = 0; j <N ; j++)
//     {
//         avg = avg + arr[j];
//     }
//     float res = avg/N;
//     cout<<"Average of given numbers are: "<<res;
//     return 0;

    
// }

// Reversing an array

// int main()
// {
//     int arr[10];
//     int n = 10;
//     cout << "enter values in array" << endl;
//     for (int i = 0; i < 10; i++)
//     {
//         cin>>arr[i];
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         int temp;
//         temp  = arr[j];
//         arr[j] = arr[n-1];
//         arr[n - 1]=temp;
//         n = n-1;
//     }
//     cout<<"New array: ";
//     for (int k = 0; k < 10; k++)
//     {
//         cout<<arr[k]<<" ";
//     }
//     return 0;
    
// }

// int main()
// {
//     int n;
//     int arr[n];
//     cout<<"Enter the number of elemets in an array: ";
//     cin>>n;
//     cout<<"ENter the values: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
//     int max =  arr[0];
//     for (int j = 1; j < n; j++)
//     {
//         if (max < arr[j])
//         {
//             max = arr[j];
//         }
        
//     }
//     cout<<"Maximum element in an array is: "<<max;
    
//     return 0;
    
// }

// float standardDeviation( int arr[], int m)
// {
//     int sum = 0;
//     float sum1 = 0;
//     float SD;
//     float var;
//     float arr1[m];
//     float mean;
//     for (int i = 0; i < m ; i++)
//     {
//         sum += arr[i];
//     }
//     mean = sum/m;
//     for (int j = 0; j < m; j++)
//     {
//         arr1[j] = pow((arr[j] - mean), 2);
//     }
//     for (int k = 0; k < m; k++)
//     {
//         sum1 = sum1 + arr1[k];
//     }

//     var = sum1/m;
//     SD = sqrt(var);

//     return SD;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number of elemets whose SD is to be found: ";
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     float res = standardDeviation(a,n);
//     cout<<"Standar Deviation: "<<res;
    
// }

// int main()
// {
//     int a[] = {10, 20, 30, 40, 50};
//     int *ptr = a;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Element at position: "<<i<<" is "<<*ptr<<endl;
//         ptr++;
//     }
//     return 0;
// }