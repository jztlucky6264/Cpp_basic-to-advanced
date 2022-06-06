#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<" First element of the array "<<d.at(1)<<endl;
  cout<<d.front()<<endl;
  cout<<d.back()<<endl;
  cout<<d.empty()<<endl;

cout<<"Before erase "<<d.size()<<endl;

d.erase(d.begin(),d.begin()+1);

cout<<"After earse "<<d.size()<<endl;

    return 0;
}

