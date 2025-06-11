#include <vector>
#include <iostream>
using namespace std;

void bubble_re(vector<int> &arr, int n);
void swap(int *a, int *b);

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
    bubble_re(arr, arr.size());
    for (auto it : arr)
    {
        cout << it << " ";
    }
}

void bubble_re(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(&arr[i], &arr[i + 1]);
        }
    }

    bubble_re(arr, n - 1);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}