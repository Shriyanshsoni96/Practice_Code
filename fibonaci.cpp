#include<iostream>
using namespace std;
int fibbo(int n ){
    if(n==0 or n==1)
    {
        return n;
}
return fibbo(n-1)+fibbo(n-2);
}
int main() {
    int n;
    cin>>n;
    int i = 0 ;
    while(i<n){
        cout<<fibbo(i)<<"  ";
        i++;
    }
    
    return 0;
}