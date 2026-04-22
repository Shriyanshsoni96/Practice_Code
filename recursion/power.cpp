#include<iostream>
using namespace std;

int power(int n, int f)
{
    if(f == 0) return 1;     // base case
    return n * power(n, f-1);
}

int main(){
    int n = 2;
    int f = 3;
    cout << power(n, f);
    return 0;
}