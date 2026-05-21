#include <iostream>
#include <array>
using namespace std;
 int main(){
    int base[5] = {1,23,4,3,4};
    array<int,4> a = {2,34,2,3};
 int size = a.size();

 for( int i = 0; i < size; i++){
    cout << a[i]<< endl;
 }

 cout <<"Element at 2nd index "<<a.at(2)<<endl;
 cout <<"empty or not "<<a.empty()<<endl;
 cout <<"First element "<<a.front()<<endl;
 cout <<"last element "<<a.back()<<endl;
 
}