#include<iostream>
using namespace std;
#include<algorithm>
// Function to calculate GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int lcm(int n1, int n2) {
    return (n1 * n2) / gcd(n1, n2);
}

int main() {
    int N1, N2;
    cin >> N1;
    cin >> N2;

    cout << lcm(N1, N2);

    return 0;
}
