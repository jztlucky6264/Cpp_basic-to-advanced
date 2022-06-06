#include <iostream>
#include <vector>
using namespace std;

int main()
{
//vector<int> a(size,initialize element)
vector<int> a(5,1);
cout<<"Print a "<<endl;
     for(int i:a){
         cout<<i<<" ";
     }
cout<<endl;

//copy one vector to another one
    vector<int> newOne(a);
cout<<"print newOne "<<endl;
     for(int i:newOne){
         cout<<i<<" ";
     }
cout<<endl;
    vector<int> v;
    cout<<"capacity "<<v.capacity()<<endl;

      v.push_back(1);
    cout<<"capacity "<<v.capacity()<<endl;

      v.push_back(2);
    cout<<"capacity "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"capacity "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

  cout<<"Element at 1 index is  "<<v.at(1)<<endl;

  
    cout<<"First Element of the array"<<" "<<v.front()<<endl;
    cout<<"Last Element of the array"<<" "<<v.back()<<endl;

//pop back
     cout<<"Before pop "<<endl;
     for(int i:v){
         cout<<i<<" ";
     }
cout<<endl;
  v.pop_back();
     cout<<"After pop "<<endl;

  for(int i:v){
         cout<<i<<" ";
     }
cout<<endl;


//clear

  cout<<"before clear size "<<v.size()<<endl;
  
     v.clear();

cout<<"after clear size "<<v.size()<<endl;


    return 0;
}
 