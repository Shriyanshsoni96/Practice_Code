#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums = {1,2,1,3,5,6,4};

    int index = max_element(nums.begin(), nums.end()) - nums.begin();

    cout << "Peak at index: " << index << endl;

    return 0;
}