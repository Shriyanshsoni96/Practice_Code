int i= 0;
int max = INT_MIN;
while(i<s)
{
  if(max<a[i])
    {
        max = a[i];
    } 
i++;
}
cout<<max;