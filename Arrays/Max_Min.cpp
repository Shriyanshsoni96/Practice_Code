#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 7};

    auto maxIt = max_element(v.begin(), v.end());
    auto minIt = min_element(v.begin(), v.end());

    int maxIndex = maxIt - v.begin();
    int minIndex = minIt - v.begin();
    

    cout << "Max: " << *maxIt << " at index " << maxIndex << endl;
    cout << "Min: " << *minIt << " at index " << minIndex << endl;

    return 0;
}