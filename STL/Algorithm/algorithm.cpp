#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(9);
    v.push_back(12);
    v.push_back(15);
    v.push_back(18);

cout<<binary_search(v.begin(),v.end(),3)<<endl;

cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),18)-v.begin()<<endl;
cout<<"upper bound-> "<<upper_bound(v.begin(),v.end(),18)-v.begin()<<endl;

int a=6;
int b=8;

cout<<"max-> "<<max(a,b)<<endl;
cout<<"min-> "<<min(a,b)<<endl;

swap(a,b);
cout<<"a-> "<<a<<endl;

string abdcd="abdcd";

reverse(abdcd.begin(),abdcd.end());
cout<<"string -> "<<abdcd<<endl;

rotate(v.begin(),v.begin()+1,v.end());

cout<<"After rotate"<<endl;
for(int i:v){
    cout<<i<<" ";
}
cout<<endl;
    return 0;
}
