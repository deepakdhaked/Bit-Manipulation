#include <iostream>
#include <bitset>
#include <cstring>
using namespace std;

string rmsbMask(int n)
{
    int twos_Compliment = (~n) + 1;
    int ans = n & twos_Compliment;
    string binaryString = std::bitset<32>(ans).to_string();
    return binaryString;
}

int main()
{
    int n = 96;
    cout << rmsbMask(n) << endl;
}