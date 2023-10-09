#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue <string> l;
    l.push("Mohammad");
    l.push("Faizan");
    l.push("Raza");

    cout<<"Size before pop--> "<<l.size()<<endl;
    cout<<"Front element: "<<l.front()<<endl;
    l.pop();
    cout<<"Size after pop--> "<<l.size()<<endl;
    cout<<"Front element: "<<l.front()<<endl;
    cout<<"Back element: "<<l.back();

    return 0;

}