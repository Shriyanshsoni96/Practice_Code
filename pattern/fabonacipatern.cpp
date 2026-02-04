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
    int i = 0 ;  int g=0; 
    while(i<=n){
    
       int j=1; 
       while(j<=i){ 
        cout<<fibbo(g)<<"  ";
       j++;
       g++;
       }
       cout<<endl;
       i++;
    }
    
    return 0;
}