#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
//copy list to new one

list<int> n(l);
    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"After earse "<<endl;
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"size of List "<<l.size()<<endl;
    return 0;
}
