#include <iostream>
#include <vector>
using namespace std;

bool isMatch(string query, string pattern) {
    int i = 0, j = 0;

    while (i < query.size()) {
        if (j < pattern.size() && query[i] == pattern[j]) {
            i++;
            j++;
        }
        else {
            // if uppercase and not matching → fail
            if (isupper(query[i])) return false;
            i++; // skip lowercase
        }
    }
    return j == pattern.size();
}

vector<bool> camelMatch(vector<string>& queries, string pattern) {
    vector<bool> ans;

    for (string q : queries) {
        ans.push_back(isMatch(q, pattern));
    }

    return ans;
}

int main() {
    vector<string> queries = {"FooBar","FooBarTest","FootBall","FrameBuffer","ForceFeedBack"};
    string pattern = "FB";

    vector<bool> result = camelMatch(queries, pattern);

    for (bool x : result) {
        cout << (x ? "true " : "false ");
    }
}