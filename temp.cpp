#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
bool cmp(string a, string b) {
    return a + b > b + a;
}
int main() {
    vector<int> v ={7, 3, 5 ,4,1,10};
    sort(v.begin(),v.end(),cmp);
    for(int i = 0 ; i< v.size(); i++)
    {
        cout<<v[i];
    }
    return 0;
}