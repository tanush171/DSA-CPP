#include <iostream>
#include <queue>
using namespace std;
 int main(){
  //max heap
   priority_queue<int> maxi;

   //min heap
   priority_queue<int,vector<int> , greater<int> > mini;
   
   maxi.push(1);
   maxi.push(2);
   maxi.push(3);
   maxi.push(0);
   maxi.push(5);
cout << " size of pqueue" << maxi.size()<<endl;
int n = maxi.size();
for(int i = 0; i < n; i++){
    cout << maxi.top() << endl;
    maxi.pop();

}cout << endl;
   mini.push(0);
   mini.push(3);
   mini.push(4);
   mini.push(2);
   mini.push(5);

   int m = mini.size();
   for( int i = 0; i < m; i++){
    cout << mini.top() << endl;
mini.pop();

   }
   cout << endl;

   cout << " empty or not"<<mini.empty() << endl;
 }