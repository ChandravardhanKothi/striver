#include <vector>
#include <iostream>
using namespace std;

void print(vector<int> &arr);
void printmiddle(vector<int> &arr, int f, int n);
void ms(vector<int> &arr, int low, int high);
void merge(vector<int> &arr, int low, int mid, int high);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    vector<int> arr;
    int ele;
    for (int i = 0; i < 10; i++)
    {
        cin >> ele;
        arr.push_back(ele);
    }
    print(arr);
    ms(arr, 0, 9);
    print(arr);
}

void printmiddle(vector<int> &arr, int f, int n)
{
    cout << "----";
    for (int i = f; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "----";
}

void print(vector<int> &arr)
{
    cout << endl;
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << endl;
}

void ms(vector<int> &arr, int low, int high)
{

    if (low == high)
        return;
    int mid = (low + high) / 2;
    printmiddle(arr, low, mid);
    ms(arr, low, mid);
    printmiddle(arr, mid + 1, high);
    ms(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
    print(arr);
}