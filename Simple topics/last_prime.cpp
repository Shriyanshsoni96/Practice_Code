#include<iostream>
using  namespace std;
int main(){
int i,j,n;
cout<<"Enter the limit ";
cin>>n;
int flag=1;
for(i=n-1;i>1;i--)
    {
        for(j=2;j<i;j++)
         { 
            if(i%j!=0)
            {
            flag=0;
            break;
            } 
         }
        
    
    }
     if(flag==0)
          {cout<<i<<endl; 
             
           } 
}