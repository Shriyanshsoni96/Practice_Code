#include<iostream>
#include<vector>
using namespace std;
bool check(string s1 , string s2 )
{  
    if(s1.size()!=s2.size())
    {
        return false;
    }   

    vector<int> s1_even(26, 0), s1_odd(26, 0), s2_even(26, 0), s2_odd(26, 0);
    for(int i = 0; i < s1.size(); i++)
    {
        if(i % 2 == 0)
        {
            s1_even[s1[i] - 'a']++;
            s2_even[s2[i] - 'a']++;
        }
        else
        {
            s1_odd[s1[i] - 'a']++;
            s2_odd[s2[i] - 'a']++;
        }
    }
    return s1_even == s2_even && s1_odd == s2_odd;
}
int main(){
string s1 ="bnxw" ;
string s2 ="bwxn" ;
cout << boolalpha;
cout<<check(s1,s2);
return 0;
}