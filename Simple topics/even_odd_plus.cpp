#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int temp =0 ;
int even =0;
int odd =0;
int cnt=0;
int i=1;

while(n!=0)
{
    temp=n%10;
    cnt++;
    if(cnt%2==0)
    {
      even+=temp;  
    }
    else{
        odd+=temp;
    }
    n=n/10;
    i++;

}
cout<<odd<<endl;
cout<<even<<endl;
return 0;
}