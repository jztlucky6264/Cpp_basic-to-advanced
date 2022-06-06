#include <iostream>
#include <map>
using namespace std; 

int main()
{
    map<int,string> m;

    m[1]="durga";
    m[12]="prasad";
    m[3]="yadav";
m.insert({ 5,"HARE KRISHNA HARE RAMA "});
cout<<"Before earse"<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding -19 -> "<<m.count(-19)<<endl;


//erase(12)

m.erase(12);

cout<<"After erase "<<endl;
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

auto it=m.find(3);
for(auto i=it; i!=m.end();i++){
    cout<<(*i).first<<endl;
}
    return 0;
}
