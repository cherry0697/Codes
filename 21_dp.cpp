#include<bits/stdc++.h>
using namespace std;

int n;
int cache[100];
int a[100];

int fans=0;

int dp(int idx)
{
  if(idx==n)
    return INT_MIN;

  int &ans=cache[idx];

  if(ans!=INT_MIN)
    return ans;

  ans=max(a[idx],a[idx]+dp(idx+1));

  fans=max(fans,ans);

  return ans;
}

int main()
{
  cin>>n;
  fans=INT_MIN;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    cache[i]=INT_MIN;
  }

  int waste=dp(0);

  cout<<fans<<endl;

return 0;
}
