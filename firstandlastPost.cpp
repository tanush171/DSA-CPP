#include <iostream>
using namespace std;


int firstOccur(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == key){
           ans = mid;
e = mid -1;
        }
        else if(arr[mid] < key){
            s = mid + 1;

        }
        else if( arr[mid] > key){
            e = mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int lastOccur(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    
    while(s<=e){
        if(arr[mid] == key){
           ans = mid;
            s = mid +1;
        }
        else if(arr[mid] < key){
            s = mid + 1;

        }
        else if( arr[mid] > key){
            e = mid-1;

        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int even[6] = {1,2,3,3,3,4};
    cout << "First occcurence of 3 in index " << firstOccur(even,6,3)<< endl;
cout << " ";
 cout << "last occcurence of 3 in  index " << lastOccur(even,6,3);
 //int totalcount = (lastOccur - firstOccur) + 1;

}