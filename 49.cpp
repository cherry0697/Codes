// Find the maximum absolute difference between the sum of two non-overlapping subarrays

#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

int cache[100];

int dp(int idx)
{
  if(idx==n)
    return -18188181;

  int &ans=cache[idx];

  if(ans!=-1788181)
    return ans;

  ans=max(a[idx],a[idx]+dp(idx+1));

  return ans;
}

int main()
{
  cin>>n;

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
    cache[i]=-1788181;

  int waste=dp(0);

  int left_max[n];

  for(int i=0;i<n;i++)
    left_max[i]=cache[i];

  for(int i=0;i<n;i++)
    cache[i]=-1788181;

  for(int i=0;i<n;i++)
    a[i]*=(-1);

  waste=dp(0);

  for(int i=0;i<n;i++)
    a[i]*=(-1);

  int left_min[n];

  for(int i=0;i<n;i++)
    left_min[i]=-cache[i];

  reverse(a,a+n);

  for(int i=0;i<n;i++)
    cache[i]=-1788181;

  waste=dp(0);

  int right_max[n];

  for(int i=0;i<n;i++)
    right_max[i]=cache[n-1-i];

  for(int i=0;i<n;i++)
    cache[i]=-1788181;

  for(int i=0;i<n;i++)
    a[i]*=(-1);

  waste=dp(0);

  int right_min[n];

  for(int i=0;i<n;i++)
    right_min[i]=-cache[i];

  for(int i=0;i<n;i++)
  {
    cout<<left_min[i]<<" ";
  }

  cout<<endl;

  int ans=INT_MIN;

  for(int i=0;i<n-1;i++)
  {
    int temp1=abs(left_max[i+1]-right_min[i]);
    int temp2=abs(left_min[i+1]-right_max[i]);

    ans=max(ans,max(temp1,temp2));
  }

  cout<<ans<<endl;

return 0;
}
