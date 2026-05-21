#include <iostream>
using namespace std;

int Binarysearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int  mid = start + (end - start)/2;
    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
          start = mid+1;
        }
        else
        {
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{

    int even[5] = {2, 4, 6, 14, 16};
    int odd[6] = {3, 5, 7,11, 13, 35};

    int index1 = Binarysearch(even,5,14);
    cout <<"Index of  14 is " << index1 << endl;

    int index = Binarysearch(odd,6,13);
        cout <<"Index of  13 is " << index << endl;
}
