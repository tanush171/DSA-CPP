#include <iostream>
using namespace std;

void Printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << " ";
    }
    cout << endl;
}
void SwapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{

    int even[6] = {2, 4, 3, 5, 3, 5};
    int odd[5] = {3, 4, 5, 2, 4};
    SwapArray(even, 6);
    Printarray(even, 6);

    cout << endl;

    SwapArray(odd,5);
    Printarray(odd,5);

    cout << endl;
}