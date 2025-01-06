#include <iostream>
using namespace std;

int calculateSum(const int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    const int ints[]{1, -7, 17};
    int size = sizeof(ints) / sizeof(ints[0]);
    cout << "The sum of all elements in the array is " << calculateSum(ints, size) << endl;
}