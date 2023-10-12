#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"Finding 4: "<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),4) - v.begin()<<endl;
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),4) - v.end()<<endl;

    int a = 3;
    int b = 5;

    cout<<"Max: "<<max(a,b)<<endl;
    cout<<"Min: "<<min(a,b)<<endl;

    swap(a,b);
    cout<<"After swapping: "<<endl;
    cout<<"A: "<<a<<", B: "<<b<<endl;

    string str = "abcd";
    cout<<"String before reverse: "<<str<<endl;

    reverse(str.begin(),str.end());

    cout<<"String after reverse: "<<str<<endl;

    cout<<"Elements before roate and reverse: "<<endl;
    for(auto i: v)
    {
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After roatate: "<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"After sorting: "<<endl;
    for(auto i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}
