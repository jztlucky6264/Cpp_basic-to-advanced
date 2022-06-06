#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //max_heap
    priority_queue<int> maxi;
  //min_heap
  priority_queue<int ,vector<int>, greater<int> > mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    maxi.push(5);
int max=maxi.size();
    for(int i=0; i<max; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
 
 mini.push(1);
   mini.push(2);
   mini.push(3);
   mini.push(4);
   mini.push(5);
int min=mini.size();
    for(int i=0; i<min; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
 
 cout<<"khali hai kya ? "<<mini.empty()<<endl;
    return 0;
}
