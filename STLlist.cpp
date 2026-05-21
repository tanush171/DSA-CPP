#include <iostream>
#include <list>
using namespace std;
 int main(){
  list<int> l;

  list<int> n(5,10);

  cout << "print a list" << endl;
  for(int i :n){
    cout << i << endl;

  }cout << endl;

  l.push_back(1);
  l.push_front(2);
  for(int i : l){
    cout << i << endl;
  }cout << endl;

l.erase(l.begin());
cout << " after erase "<< endl;
for(int i : l){
    cout << i << endl;
}
cout << "size of a list : " << l.size() << endl;


 }