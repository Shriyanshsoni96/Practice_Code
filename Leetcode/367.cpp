#include<iostream>
using namespace std;

int sqrtInt(int n)
{
    int left = 1, right = n;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(mid * mid == n)
        {
            return 1;
        }
        else if(mid * mid < n)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n = 9;
    cout << sqrtInt(n) << endl;
    return 0;
}