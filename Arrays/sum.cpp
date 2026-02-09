#include<iostream>
using namespace std;
int main() {
int a[]={45,33,-21,34,56};
int s=sizeof(a)/sizeof(int);

int i = 0 ;
int sum=0;
while(i<s)
{
    sum=sum+a[i];
    i++;
}
cout<<sum;
}