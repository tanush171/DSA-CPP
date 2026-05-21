#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
     
            sum = sum + element;
    }
    return sum;
}

int main()
{
    int ank[8] = {2, 55, 4, 3, 4, 6, 8, 0};

    cout << "Sum of array " << sumArray(ank, 8) << endl;
}
