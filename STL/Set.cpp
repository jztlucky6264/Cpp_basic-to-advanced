#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert( 5);
    s.insert( 5);
    s.insert( 5);
    s.insert( 3);
        s.insert( 6);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl; 
set<int>::iterator it=s.begin();
it++;
    s.erase(it);


 for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;  
    
    cout<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(3);
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" "; 
    }    cout<< endl;
    
    return 0;
}
