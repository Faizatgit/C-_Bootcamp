#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> l;
    list <int> n(5,100);

    for (auto i : n)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    l.push_back(5);
    l.push_front(1);

    for( int i : l)
    {
        cout<<i<<" ";
    }cout<<endl;

    l.erase(l.begin());
    cout<<"After erase: "<<endl;
    for( auto i : l)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Size of list: "<<l.size();

    return 0;
}