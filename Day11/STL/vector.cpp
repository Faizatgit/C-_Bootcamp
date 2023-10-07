#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> l;
    vector<int> a(5,1);
    vector<int> last(a);
    for (int i : last)
    {
        cout<<i<<endl;
    }
    
    cout<<"Capacity: "<<l.capacity()<<endl;

    l.push_back(2);
    cout<<"Capacity: "<<l.capacity()<<endl;

    l.push_back(3);
    cout<<"Cpacity: "<<l.capacity()<<endl;

    l.push_back(4);
    cout<<"Capacity"<<l.capacity()<<endl;

    cout<<"Size: "<<l.size()<<endl;
    cout<<"Element at 1: "<<l.at(1)<<endl;
    cout<<"Front element: "<<l.front()<<endl;
    cout<<"Last element: "<<l.back()<<endl;

    cout<<"Before pop: "<<endl;
    for ( auto i : l)
    {
        cout<<i<<" ";
    }cout<<endl;
    l.pop_back();

    cout<<"After pop: "<<endl;
    for ( auto i : l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size: "<<l.size()<<endl;
    l.clear();
    cout<<"After clear size: "<<l.size();
    return 0;
}