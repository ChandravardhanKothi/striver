#include <vector>
#include <iostream>
using namespace std;

void quick(vector<int> &arr, int low, int high);
void partition(vector<int> &arr, )

    int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int nomo;
    vector<int> arr;
    for (int i = 0; i < 10; i++)
    {
        cin >> nomo;
        arr.emplace_back(nomo);
    }
    for (auto it : arr)
    {
        cout << it << " ";
    }
}