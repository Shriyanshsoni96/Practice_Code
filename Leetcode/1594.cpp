#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    int n ; 
    cin>>n; 

    vector<vector<int>> mat ={{1,2,3},{4,5,6},{7,8,9}};

    // // Input mat
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> mat[i][j];
    //     }
    // }
   int ans = 1;
    for(int i= 0 ; i<n ; i++)
    {   
        int product=1;
        for(int j = 0 ; j<n ; j++)
        {
           if(product*mat[i][j]<0)
           {
            ans = product*mat[i][j];
            break;
           }
           else
           {
            ans=mat[i][j];
           }
        }
        cout<<product<<endl;
    }
return 0;
}