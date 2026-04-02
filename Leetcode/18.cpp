#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
vector<int> nums= {-2,-1,0,0,1,2};
sort(nums.begin(),nums.end());
int target=0 ;

// vector<vector<int>> ans;
vector<int> ans;

int n = nums.size();
int left= 0, right = n-1;
while(left+1 <right-1)
{
  int a = nums[left];
  int b = nums[left+1];
  int c = nums[right];
  int d = nums[right-1];

  int sum = a+b+c+d;
  if(sum==target)
  {
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    ans.push_back(d);
    left++;
    right--;
  }
  if(sum<target)
  {
    left++;
  }
  else
  {
    right--;
  }

} 
return 0;
}