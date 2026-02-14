#include<iostream>
using namespace std;
int main() {
int n,i ,j;
cout<<"enter the no ";
i=1;
cin>>n;
while(i<=n){
    j=1;
   int mid=(n/2)+1;
    while(j<=n)
    {
         if(i==1 || j==1||i==n || j==n)
         {
             cout<<" *";
        }
        else if(i==mid && j==mid)
            {
                cout<<" @";
            }
        else 
        {
            cout<<" #";
        }
         j++;
}
    cout<<endl;
    i++;
}
}