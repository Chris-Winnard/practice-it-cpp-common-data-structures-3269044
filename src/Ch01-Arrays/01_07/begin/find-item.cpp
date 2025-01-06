#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    int index = -1;
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == target)
            index = i;
    }
    return index;
}

int main()
{
    int testArray[]{1, 3, 5};
    int target = 5;

    size_t size = sizeof(testArray) / sizeof(testArray[0]);
    cout << "testArray first contains the target " << target << " at index: " << findItem(testArray, size, target) << endl;

    std::string testArray2[]{"apple", "banana", "cherry"};
    std::string target2 = "cake";

    size_t size2 = sizeof(testArray2) / sizeof(testArray2[0]);
    cout << "testArray first contains the target " << target2 << " at index: " << findItem(testArray2, size2, target2) << endl;

    return 0;
}
