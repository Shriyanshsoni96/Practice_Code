#include<iostream>
using namespace std;
bool check(string s1 , string s2 )
{  
    if(s1.size()!=s2.size())
    {
        return false;
    }   

    for(int i = 0 ;i<s1.size();i++)
    {
        for(int j = 0 ;j<s1.size();j++ )    
        {       
               if(s1 == s2) 
               {return true;
                }
                int temp = abs(j-1);
               else if(j-i == 2 ){
                        swap(s1[i],s1[j]);
                }
        }
    }
    return  false;
}
int main(){
string s1 ="abcd" ;
string s2 ="cdbb" ;
cout << boolalpha;
cout<<check(s1,s2);
return 0;
}