#include<iostream>
using namespace std;
int count(int n ,int v)
{
int i=1;
int temp=0;
int cnt=0;
while(n!=0)
{
    temp=n%10;
        if(v==temp)
        {
            cnt++;
        }
   
    n=n/10;
    i++;
}
return cnt;
}
int main(){
int n;
int v;
cin>>n;
cin>>v;
cout<<count(n,v);
return 0;
}