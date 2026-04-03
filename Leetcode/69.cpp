#include<iostream>
using namespace std;

int sqrtInt(int n)
{
    int left = 0, right = n;
    int ans = 0;

    while(left <= right)
    {
        int mid = left + (right - left) / 2;

        if(mid * mid == n)
        {
            return mid;
        }
        else if(mid * mid < n)
        {
            ans = mid;        // store possible answer
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return ans;   // closest integer sqrt
}

int main()
{
    int n = 8;
    cout << sqrtInt(n) << endl;
    return 0;
}