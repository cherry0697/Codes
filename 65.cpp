// Print all combinations of positive integers in increasing order that sums to a given number

#include<bits/stdc++.h>
using namespace std;

void find(int idx,vector <int> &ans,int sum)
{
  if(sum<0)
    return;

  if(sum==0)
  {
    for(auto itr: ans)
      cout<<itr<<" ";
    cout<<endl;

    return;
  }

  for(int i=idx;i<=sum;i++)
  {
    ans.push_back(i);
    find(i,ans,sum-i);
    ans.pop_back();
  }
}

int main()
{
  int n;
  cin>>n;

  vector <int> ans;

  find(1,ans,n);

return 0;
}
