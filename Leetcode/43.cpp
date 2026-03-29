#include<iostream>
#include<algorithm>
using namespace std;
int conver(string n){
    int sum =0;
    cout<<n<<endl;
    for(int i = 0 ; i<n.size();i++)
    {
        sum = sum*10 + (n[i]-'0'); 
    }
    // cout<<sum<<endl;
    return sum;
}
string prodcut(string n1 , string n2 )
{
int n = conver(n1);
int m = conver(n2);
int pro= n*m;
    if (pro == 0) return "0";
string ans = "";

while (pro > 0) {
        ans.push_back((pro % 10) + '0'); 
        pro /= 10;                      
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
string n1 ="2";
string n2="3";
cout<<prodcut(n1,n2);
return 0;
}