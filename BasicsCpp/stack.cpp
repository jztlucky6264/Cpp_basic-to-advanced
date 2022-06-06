#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("durga");
    s.push("prasad");
    s.push("yadav");
//Last In First Out
    cout<<" Top Element "<<s.top()<<endl;

    s.pop();

    cout<<" Top Element "<<s.top()<<endl;
    cout<<" Size of stack "<<s.size()<<endl;
       
    return 0;
}
