#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <string> l;
    l.push("Mohammad");
    l.push("Faizan");
    l.push("Raza");

    cout<<"Top Element --> "<<l.top()<<endl;

    l.pop();
    cout<<"Top element after pop operation: "<<l.top()<<endl;

    cout<<"Size: "<<l.size()<<endl;
    cout<<"Empty: "<<l.empty();

    return 0;
}