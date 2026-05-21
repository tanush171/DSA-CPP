#include <iostream>
#include <set>
using namespace std;

int main(){

    set<int> s;
s.insert(4);
s.insert(3);
s.insert(2);
s.insert(3);
s.insert(35);
s.insert(6); 
s.insert(3);

for(auto i : s){
    cout << i << endl;
}
cout << endl;

set <int>::iterator it = s.begin();
it++;

s.erase(it);

for(auto i : s){
    cout << i << endl;
}

cout << " 35 is present or not " << s.count(3) << endl;

set<int>::iterator itr = s.find(35);
for(auto it = itr;it != s.end();it++){
    cout << *it <<" ";

}cout << endl;

}
