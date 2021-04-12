// Activity Selection Problem

// DP

#include<bits/stdc++.h>
using namespace std;

int n;
pair<int,int> a[100];

int cache[100];

int fans=-1;

int dp(int idx,int end)
{
  if(idx==n-1)
    return INT_MIN;

  int &ans=cache[idx];
  if(ans!=-1)
    return ans;

  ans=1;

  for(int i=idx+1;i<n;i++)
  {
    int temp=0;
    if(a[i].first>=end)
      ans=max(ans,1+dp(i,a[i].second));
    else
      temp=dp(i,a[i].second);
  }

  fans=max(fans,ans);
  return ans;
}

int main()
{
  cin>>n;

  for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;

  sort(a,a+n);

  memset(cache,-1,sizeof(cache));

  int ans=dp(0,0);

  cout<<fans<<endl;

return 0;
}
