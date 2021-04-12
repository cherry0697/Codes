// 2–partition problem extended

#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

int cache[100][1000];

int dp(int idx,int sum)
{
  if(sum==0)
    return 1;

  if(sum<0 || idx==n)
    return 0;

  int &ans=cache[idx][sum];

  if(ans!=-1)
    return ans;

  ans=0;

  ans|=dp(idx+1,sum-a[idx]);
  ans|=dp(idx+1,sum);

  return ans;
}

int main()
{
  cin>>n;

  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }

  memset(cache,-1,sizeof(cache));

  if(sum%2==0)
  {
    int ans=dp(0,sum/2);
    if(ans==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else
    cout<<"NO"<<endl;

return 0;
}
