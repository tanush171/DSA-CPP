#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
void update(int arr[], int n)
{
    cout << "inside the function " << endl;
    // updating array first element
    arr[0] = 120;
    // printing the array
    n = 4;
    cout << " Going back to the main function " << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};
    int size = 3;
    printArray(arr, size);
    update(arr, size);
    printArray(arr, size);
    //cout << size;
    cout << arr[0];
    return 0;
}