#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_back(2);

    cout<<"Elements are: "<<endl;
    for (int i : d)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Front element: "<<d.front()<<endl;
    cout<<"Back element: "<<d.back()<<endl;

    cout<<"Is empty or not: "<<d.empty()<<endl;

    cout<<"Before erase: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+2);
    cout<<"Afte erase: "<<d.size()<<endl;

    d.push_front(3);
    d.push_front(4);
    d.push_back(5);
    d.push_front(7);

    cout<<"New elements are: "<<endl;
    for ( auto i : d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();
    cout<<"New elements are: "<<endl;
    for ( auto i : d)
    {
        cout<<i<<" ";
    }cout<<endl;

    d.pop_back();
    cout<<"New elements are: "<<endl;
    for ( auto i : d)
    {
        cout<<i<<" ";
    }cout<<endl;
    

    return 0;
}