#include<iostream>
using namespace std;
int main() {
    int n = 5;
    
    // Line 1: First vertical line
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == n/2) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    
    // Line 2: Horizontal line with center (middle row)
    for(int j = 0; j < 2*n-1; j++) {
        cout << "*";
    }
    cout << endl;
    
    // Line 3: Third vertical line
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == n/2) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}