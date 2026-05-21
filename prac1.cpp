#include <iostream>
#include<math.h>
using namespace std;

int main(){
 /*  int n,b;

    cout<<"Enter the value of n"<<endl;
cin>>n;
    cout<<"ENter the value of b"<<endl;
    cin>>b;
   if(n>b){
cout<<"n is greator"<<endl;
   }
if(b>n){
    cout<<"b is greator"<<endl;
}

int a ;
cout<<"ENter the value of a"<<endl;
cin>>a;

if(a>0){
    cout<<"A is postive"<<endl;

}else{
    if(a<0){
    cout<<"A is negative"<<endl;

}else{  cout<<"A is zero"<<endl;

}
 
}

int a = 9;
cout<<"enter the number";
cin>>a;
if (a==9){
    cout<<"NINEY";

}if(a>0){
    cout<<"POSITIVE";
}else{
    cout<<"Negative";
}
*/
int n;
cin>>n;
int ans=0;
int place = 1;

while(n!=0){
int bit = n&1;
ans = (bit * place)+ ans;
place *= 10;

n = n>>1;

}
cout << "ANswer is "<<ans<<endl;
}
