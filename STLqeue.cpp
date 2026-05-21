#include <iostream>
#include <queue>
using namespace std;
 int main(){
    queue<string> q;

    q.push("Tanush");
    q.push("singh");
    q.push("jasrotia");
    cout << "before pop " << q.size()<<endl;

cout << "First element " << q.front()<<endl;
    q.pop();
    cout << "After pop " << q.front()<<endl;
    cout <<"Size after pop " <<q.size()<<endl;
 }
