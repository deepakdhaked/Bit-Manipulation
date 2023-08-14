#include <iostream>
using namespace std;

// Iterative Approach
// Time Complexity : O(n)
// Auxiliary Space : O(1)
int computeXOR(int n)
{
    int xor_result = 0;
    for (int i = 1; i <= n; i++)
    {
        xor_result ^= i;
    }
    return xor_result;
}

// Time Complexity : O(1)
// Auxiliary Space : O(1)
int computeXOR(int n)
{
    if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    else if (n % 4 == 3)
    {
        return 0;
    }

    // if n%4==0 then return n.
    return n;
}

int main()
{
    int n = 7;
    cout << computeXOR(n) << endl;
}