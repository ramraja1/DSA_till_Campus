
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int>q;
    cout<<endl<<q.size();
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
     q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<endl<<q.front()<<" "<<q.back();
    q.pop();
     cout<<endl<<q.front()<<" "<<q.back();
    cout<<endl<<q.size();

    return 0;
}