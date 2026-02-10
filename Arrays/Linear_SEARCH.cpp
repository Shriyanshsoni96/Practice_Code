#include<iostream>
using namespace std;
int main() {
int n ;
cin>>n;
int a[n];
int v = 45;
int i = 0;
while(i<n)
{
    cin>>a[i];
    i++;
}

// int j =0 ;
// while(j<n)
// {
//     cout<<a[j]<<" "<<endl;
//     j++;
// }
bool flag;
int tem=0;
int k=0 ;
while(k<n)
{
    if(a[k]==v)
    {
        flag = true;
        tem=k;
        break;
    }
    else{
        flag = false;
    }
    k++;
}
if(flag)
{
    cout<<"value found at "<<tem<<" index";
}
else{
    cout<<"Value is not present in the array";

}
}