#include <iostream>
#include <map>
using namespace std;

int main(){

    map<int,string> m;

    m[1] = "tanush";
    m[2] = "singh ";
    m[4] = "jasrotia";

    m.insert( {5,"hey"});
cout << " before erase <<endl;"
    for(auto i : m){
        cout << i.first <<" " <<i.second<< endl;
    } 
    cout << " finding 4 " << m.count(4) << endl;
    m.erase(13);
    cout << "after erase" <<endl;
    for(int i : m){
        cout << i.first << " " << i.second << endl;  
    }

} 