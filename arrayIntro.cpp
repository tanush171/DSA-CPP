#include <iostream>
using namespace std;

void printArray(int arr[], int size){


cout << "Printing the array" << endl;

for ( int i =0; i < size; i++){
    cout << arr[i] << " ";


}
cout << " Printing Done " << endl;


}

int main(){
/*declare array
    int number[15];

    //accessing an array 
  //  cout << "Value at 14 index " << number[14] << endl;

    //cout << "Value at 33 index " << number[33] << endl;

    //initialising an array
    int second[3] = {5,4,6};
//accesing the element
    cout << " value at 0 index " << second[0] << endl;
*/
int third[12] = {3,5,6};
int n = 12;
printArray(third , 12);

int fourth[10] = {0,4,5,35,5};
 n = 10;
printArray(fourth, 10);


    return 0;
}