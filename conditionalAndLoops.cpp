 #include <iostream>
 using namespace std;

 int main() {
  // int a;
   // cin>>a;
    //cout<< "Value of n is :"<<n<<endl;
    //if a is postive
   /*if(a>0){
        cout<< "A is postive :" <<endl;

    }
    else{
        cout<< "A is negative : "<<endl;
    }

// int a,b;
  //cin>> a >> b;
// a = cin.get();
//  a = '1' -> 49 ASCII
  //cout<< "VAlue of a and b is "<<a <<b <<endl;

// cout<<  "value of A is " << a<< endl;

int a,b;
  
//cout <<"Enter the value of a :"<<endl;
cin>>a;
cout <<"Enter the value of b :"<<endl;
cin>>b;

if(a>b){
    cout<< "A is greater"<< endl;

}
if(b>a){
    cout<< "B is greater" <<endl;
}
    
     

    int a;
  
    cout <<"Enter the value of A"<<endl;
    cin>>a;

    if(a>0){
     cout <<"a is postive";

    }
    else{
        if(a<0){
            cout<<"a is negative";
        }
            else{
                cout<<"a is 0";
            
        }
    }
        
      int a = -90;
      if(a == -99) {
        cout<<"NINEY";

      } 
      if(a>0){
        cout<<"postive";

      }
      else{
        cout<<"Negative";


      }
     

      int a = 2;
      int b = a+1;

      if((a=3)==b)
      {
      cout<<a;
      }
      else{
        cout<<a+1;
      }
       

        char ch;
        cout<<"Enter a value of ch"<<endl;
        cin>>ch;
      if (ch >= '0' && ch <= '9') {
        cout << ch << " is a Numeric digit." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a Lowercase letter." << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an Uppercase letter." << endl;
    }
    else {
        cout << ch << " is not a valid alphanumeric character." << endl;
    }

    
   // while loop
     int n;
     cin>>n;
     int i = 1;
     while(i<=n) {
        cout<<i<<" ";
        i = i+1;
     }
 
// sum of 1 to n
 int n;
 cin>>n;
 
 int i = 2;
 int sum = 0;

 while(i<=n){
    sum = sum+i;
    i = i+2;
 }

 cout<<"value of sum is : "<<sum<<endl;
   */
  int n;
  cin >> n;

  int i = 2;

  while (i<n){

    if(n%i==0){
        cout<< " not prime "<< i << endl;
    }
    else{
        cout<<"prime for" <<i << endl;
    }
    i = i+1;
  }
 }
 
    
