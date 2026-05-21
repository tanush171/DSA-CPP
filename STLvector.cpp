#include <iostream>
#include <vector>
using namespace std;
 int main(){
   vector<int> v;

   vector<int> a(5,2);
   cout << "print a " << " ";
   for(int i : a){
    cout << i <<endl;
   }
   cout << "capacity " <<v.capacity()<<endl;

   v.push_back(1);
   cout << " capacity -->"<<v.capacity()<<endl;
 
    v.push_back(2);
   cout << " capacity-->"<<v.capacity()<<endl;
    v.push_back(3); 
   cout << " capacity->"<<v.capacity()<<endl;

   cout << " Size -->"<<v.size()<<endl; 

   cout << " Element at second index-->"<<v.at(2)<<endl;
 cout <<"First element "<<v.front()<<endl;
 cout <<"last element "<<v.back()<<endl;

 cout <<" before pop"<<endl;
 for(int i:v){
  cout << i << endl;
 }cout<< " ";

 v.pop_back();
 cout << "after pop back"<<endl;
 for(int i:v){
  cout <<i << endl;
 }
 cout << "before clear" <<v.size()<< endl;
 v.clear();
 cout <<"After clear"<< v.size()<<endl;
 }