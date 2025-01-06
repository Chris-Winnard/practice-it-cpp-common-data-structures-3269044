#include <iostream>
#include <vector>

using namespace std;

void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    for (size_t i = 0; i < size; i++)
    {
        int element = arr[i];

        bool elementIsPrime = true;

        if (element < 2)
        {
            elementIsPrime = false;
        }
        if (element > 2)
        {
            for (size_t j = 2; j < element; j++)
            {
                if (element % j == 0)
                {
                    elementIsPrime = false;
                }
            }

            if (elementIsPrime == true)
            {
                primes.push_back(element);
            }
        }
    }
}

int main()
{
    int numbers[]{-1, 4, 7, 12, 3, 9, 17, 29};

    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
