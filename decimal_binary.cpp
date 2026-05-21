#include <iostream>
#include<math.h>
using namespace std;

int main(){
/*
int n ;
cin >> n;

int ans = 0;
int place = 1;
while(n!=0){
    int bit = n & 1;
    ans = (bit * place) + ans;
    place *= 10;
    n = n >> 1;


}

cout << " answer is "<< ans << endl;
*/
int n ;
cin>>n;
int place =1;
int ans = 0;
while(n!=0){
    int digit = n%10;
    if(digit== 1){
        ans = ans+place;
        place *=2;
    }
    n = n/10;
  
}
cout <<ans << endl;


}