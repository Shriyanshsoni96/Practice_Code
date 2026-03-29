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
                int temp = abs(j-i);

               if(temp == 2 ){
                        swap(s1[i],s1[j]);
                }
        }
    }
    return  false;
}
int main(){
string s1 ="bnxw" ;
string s2 ="bwxn" ;
cout << boolalpha;
cout<<check(s1,s2);
return 0;
}