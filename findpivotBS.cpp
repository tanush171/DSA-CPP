#include <iostream>
using namespace std;

int pivotelement(int arr[], int n){
int s = 0;
int e = n-1;
 int mid = s+(e-s)/2;

 while(s <= e){
    if(arr[mid] >= arr[0]){
        s = mid+1;
    }
    else{
        e = mid-1;
    }
    mid = s+(e-s)/2;
 }
 return s;

}
int main(){
    int pivot[5] = {21,22,23,3,5};

    cout << " pivot number at the index of " << pivotelement(pivot,5)<< endl;
}