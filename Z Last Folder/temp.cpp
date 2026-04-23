#include<iostream>
using namespace std;

int firstOccurrence(int a[], int n, int t, int i)
{
    if(i == n) return -1;
    if(a[i] == t) return i;
    return firstOccurrence(a, n, t, i + 1);
}
int main()
{
    int a[] = {1, 3, 4, 5, 3};
    cout << firstOccurrence(a, 5, 3, 0);
}
