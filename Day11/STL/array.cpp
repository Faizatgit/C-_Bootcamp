#include<iostream>
#include<array>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4};
    array<int,4> a = {1,2,3,4};
    int size = a.size();
    cout<<"Size= "<<size<<endl;
    cout<<"Elements are: "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<endl;
    }
    
    cout<<"Elements at index 2 is: "<<a.at(2)<<endl;
    cout<<"Empty or not ? "<<a.empty()<<endl;
    cout<<"Front element: "<<a.front()<<endl;
    cout<<"Back element: "<<a.back();
    
    return 0;
}