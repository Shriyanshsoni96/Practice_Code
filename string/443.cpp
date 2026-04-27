#include<iostream>
#include<vector>
using namespace std;
int freq(vector<char>& chars)
{
    int cnt = 1;
    vector<char> ans;
    ans.push_back(chars[0]);
    for(int i = 1 ; i <chars.size() ; i++)
    {
        if(chars[i]!=chars[i-1])
        {

        }
    }

}

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    cout<<freq(chars);
    return 0;
}