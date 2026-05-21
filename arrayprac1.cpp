#include <iostream>
using namespace std;

void PrintArray( char arr[], char size){
    for ( int i = 0; i<size; i ++){
      

        cout << "Printing the array "<< " "<< endl;

    cout <<  arr[i] << endl;
    }
    cout << "Printing done" << endl;

}

int main(){
   // int number[12] = {333,55 ,6 };
    //int n = 12;
//PrintArray(number, 12);

//int you[10] = {4,5,6,3,55,66};

// n = 10;
//PrintArray( you , 10);

char ch[5] =  { 'e', 't' , 'e','a','h'};

PrintArray(ch , 5);

    }



    
