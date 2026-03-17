#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
vector<vector<int>> a(n,vector<int>(n));
for(int i =0 ;i<n;i++)
{
    for(int j = 0 ; j<n ;j++)
    {
        cin>>a[i][j];
    }
}

for(int i =0 ;i<n;i++)
{
    for(int j = 0 ; j<n ;j++)
    {
        if(a[i][j]==1)
        {
            int k = 0 ; 
            while(k<n)
            {
                a[k][j]=1;
                k++;
            }
            int l=0 ;
            while(l<n)
            {
                a[i][l]=1;
                l++;
            }
        }
        cout<<a[i][j]<<" ";

    }
    cout<<endl;
} 
}