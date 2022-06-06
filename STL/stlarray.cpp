#include <iostream>
#include <array>
using namespace std;


int main(int argc, char const *argv[])
{
    array<int,5> a= {1,2,3,4,5}; 
    int size= a.size();
    cout<<"Size of the array"<<" "<<size<<endl;
    cout<< "Element at 2nd Index"<<" "<<a.at(4)<<endl;
    cout<<"Empty or not"<<" "<<a.empty()<<endl;
    cout<<"First Element of the array"<<" "<<a.front()<<endl;
    cout<<"Last Element of the array"<<" "<<a.back()<<endl;
    return 0;
}
