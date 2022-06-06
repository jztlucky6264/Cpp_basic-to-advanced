#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<string> q;

     q.push("durga");
    q.push("prasad");
    q.push("yadav");
cout<<"First Element -> "<<q.front()<<endl;
q.pop();
cout<<"First Element -> "<<q.front()<<endl;
cout<<"size after pop "<<q.size()<<endl;
    return 0;
}
