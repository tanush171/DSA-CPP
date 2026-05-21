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
// {4, 2, 2, 3}
int findDuplicate(int arr[], int size)
{
    int result[size] = {0};
    for (int i = 0; i < size; i++)
    {
        int ans = arr[i]; // 4
        for (int j = i + 1; j < size; j++)
        {
            int value = arr[j]; // 2
            if (arr[i] == arr[j])
            {
                // Add value to result
                result[i] = value;
            }
        }
    }
    Printarray(result, size);
    return 0;
}

int main()
{
    int arr[] = {4, 4, 2, 2,9,3,35,3,5};
    findDuplicate(arr, 9);
    cout << endl;
}