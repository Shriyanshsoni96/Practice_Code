  #include<iostream>
using namespace std;
int main ()
{ int i;
  
       int m ;
   cout<<"Enter the value of row ";
   cin>>m;
    i=1 ;
  while (i<=m)
  {  int space =(2*i)-2;
   while(space )
  {
    cout<<"  ";
  space--;}
   int print = m-i+1;
   while (print)
   {
       cout<<" *";
      print--;
   }
  
cout<<endl;
i++;  
}
}