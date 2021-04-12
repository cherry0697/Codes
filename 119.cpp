// Print all triplets in an array with a sum less than or equal to a given number

#include<bits/stdc++.h>
using namespace std;

int n;

void find(int a[],vector<int> &ans,int sum,int idx)
{
  if(sum<0)
    return;

  if(ans.size()==3)
  {
    for(auto itr: ans)
      cout<<itr<<" ";

    cout<<endl;

    return;
  }

  if(idx==n)
    return;

  ans.push_back(a[idx]);
  find(a,ans,sum-a[idx],idx+1);
  ans.pop_back();
  find(a,ans,sum,idx+1);
}

int main()
{
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum;
  cin>>sum;

  vector<int> ans;

  find(a,ans,sum,0);

return 0;
}
