#include <iostream>
using namespace std;

void insertion(int arr[], int n);
void swap(int *a, int *b);
void selection(int arr[], int n);
void print(int arr[], int n);
void bubble(int arr[], int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a = 10;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    // bubble(arr, a);
    insertion(arr, a);
    // selection(arr, a);
}

void selection(int arr[], int c)
{
    int min;
    for (int i = 0; i < c - 1; i++)
    {
        min = i;
        for (int j = i; j < c; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[i], arr[min]);
    }
    print(arr, c);
}

void bubble(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    print(arr, n);
    cout << "\n";
}

void print(int arr[], int a)
{
    for (int i = 0; i < a; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertion(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        int temp = arr[j];
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
        arr[j] = temp;
        print(arr, n);
        cout << "\n";
    }
}