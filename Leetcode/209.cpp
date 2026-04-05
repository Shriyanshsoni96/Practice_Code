// using sliding window he 
// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;

// int main() {
//     vector<int> num = {2,3,1,2,4,3};
//     int target = 7;

//     int left = 0;
//     int sum = 0;
//     int ans = INT_MAX;

//     for(int right = 0; right < num.size(); right++) {
//         sum += num[right];

//         while(sum >= target) {
//             ans = min(ans, right - left + 1);
//             sum -= num[left];
//             left++;
//         }
//     }

//     if(ans == INT_MAX) cout << 0;
//     else cout << ans;

//     return 0;
// }

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

int main() {
    vector<int> num = {2,3,1,2,4,3};
    int target = 7;
    int n = num.size();

    vector<int> prefix(n + 1, 0);

    // prefix sum
    for(int i = 0; i < n; i++) {
        prefix[i + 1] = prefix[i] + num[i];
    }

    int ans = INT_MAX;

    for(int i = 0; i < n; i++) {
        int required = target + prefix[i];

        // binary search
        int j = lower_bound(prefix.begin(), prefix.end(), required) - prefix.begin();

        if(j <= n) {
            ans = min(ans, j - i);
        }
    }

    if(ans == INT_MAX) cout << 0;
    else cout << ans;

    return 0;
}

