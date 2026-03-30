#include<iostream>
#include<string>
using namespace std;
int main(){
int n = 3;

string ans="";

        for(int i = 0 ; i<n ; i++)
        {
            if(i%3==0 && i%5 == 0)
            {
                ans.insert(i,"FizzBuzz");
                // cout<<"3 or 5 chalaa ";
            }
            else if(i%3==0)
            {
                ans.insert(i,"Fizz ");
                // cout<<"3 chalaa ";

            }
            else if(i%5==0)
            {
                ans.insert(i,"Buzz ");
                // cout<<"5 or chalaa ";

            }
            else
            {
                ans.insert(i,"i+1");
                // cout<<" i chalaa ";

            }
        }

        for(int i = 0 ; i< ans.size();i++)
        {
            cout<<ans[i];
        }        
}