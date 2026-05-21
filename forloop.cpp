#include<iostream>
using namespace std;

int main(){
/*
    int n;
    cout<<" enter the value of n"<<endl;
    cin >>n;

    cout<<"printing count from 1 to n"<< endl;
   int i = 1;
   // for(int i = 1; i<=n; i++){
   for(; ;)
{
    if(i<=n){
         cout<<i<<endl;
    }
    else{
        break;
    }
    i++;
}
     
   // }


for(int a = 0 , b =1, c= 2; a>=0 && b>=1 && c>=2; a--, b--, c--){
    cout<<a <<" "<<b <<" "<<c << endl;
}
    
   //fibonacci series
     int n=10;
     int a = 0 ;
     int b= 1;
     cout << a<<" "<<b<< " ";

     for( int i =1 ; i<=n; i++){
        int nextNumber = a+b;
        cout<< nextNumber<<" ";

     
      a=b;
      b=nextNumber;
     } 
*/

int n;
cout << " enter the value of n"<< endl;

cin>>n;

bool isPrime =1;

for(int i=2; i<n; i++)
//rem = o ,Not a prime
{
    if(n%i==0){
      //  cout<<"Not a prime no" <<endl;
      isPrime = 0;
        break;

    }
}
if(isPrime == 0){
    cout << " Not a Prime number"<<endl;
}
else{
    cout<<"is a prime Number"<<endl;
}

}