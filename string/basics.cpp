#include<iostream>
#include<string>
using namespace std;
int main(){
// string str =" hello world 45 d  ";
// cout << "Using range-based for loop: ";
//     for (char ch : str) {
//         cout << ch ;
//     }
//     cout << endl;

// string s ;
// cin>>s;
// case 1 store single word only without space 
// cout<<s;
//if space is at first position then it store the space
//case 2 while initalize we can store the sentence 
// string str = " Ramanujan go to school ";
// cout<<str;

//case 3. take input of sentence 
string str;

// getline(cin,str);
// cout<<str;

string s = "ram" ;
// s[1]='s';
// cout<<s
//.length();
int n = s.size();

s.push_back('S');
cout<<s<<endl;

s.pop_back();

s.append(" world is bad ");
cout<<s<<endl;

s.insert(4," manujan ");
cout<<s<<endl;

s.erase(5,3);
cout<<s<<endl;

s.replace(0,3,"Shyam");
cout<<s<<endl;

cout<<s.substr(0,5);//specifc part ko show krna he toh substr 







}