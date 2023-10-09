#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // MAX Heap
    priority_queue <int> maxi;

    maxi.push(1);
    maxi.push(-20);
    maxi.push(34);
    maxi.push(8);

    cout<<"Size of  maxi: "<<maxi.size()<<endl;
    int n = maxi.size();

    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<endl;
        maxi.pop();
    }cout<<endl;

    // MIN Heap

    priority_queue < int , vector <int> , greater <int> > mini;

    mini.push(34);
    mini.push(-67);
    mini.push(9);
    mini.push(4);

    cout<<"Size of mini: "<<mini.size()<<endl;
    int m = mini.size();

    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<endl;
        mini.pop();
    }cout<<endl;
    
    cout<<"Empty or not: "<<mini.empty()<<endl;

    return 0;
    
}