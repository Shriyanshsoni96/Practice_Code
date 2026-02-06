#include<iostream>
using namespace std;
int main() {
int n ; 
int i ;
cin>>n;
i=0;
while(i<n){
    
    int j = 0;
    int val = 1;
    while(j<=i){
        cout<<val<<" ";
        val = val * (i - j) / (j + 1);
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}