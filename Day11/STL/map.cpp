#include<iostream>
#include<map>

using namespace std;

int main()
{
    map <int,string> m;
    m[1] = "Faizan";
    m[3] = "Manisha";
    m[4] = "Ashu";
    cout << m.size()<<endl;
    m.insert({5,"Abhishek"});
    cout<<"Before erase: "<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13: "<<m.count(-13)<<endl;
    
    m.erase(5);
    cout<<"After 5 is removed: "<<endl;

    for(auto i: m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    auto it = m.find(4);
    for( auto i=it; i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }cout<<endl;
    
    return 0;
}