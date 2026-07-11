#include <iostream>
using namespace std;

// Recursive function to calculate the sum of the first n natural numbers.
int sumOfNaturalNumbers(int n)
{
    // Base case: when n is 0, the sum is 0.
    if (n == 0)
        return 0;

    // Recursive case: add n to the sum of natural numbers up to n - 1.
    return n + sumOfNaturalNumbers(n - 1);
}

int main()
{
    int n;

    // Read a natural number from input.
    cin >> n;

    // Output the calculated sum.
    cout << sumOfNaturalNumbers(n);
}