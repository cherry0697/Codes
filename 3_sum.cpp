// 3–partition problem extended

#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

int cache[100][100][100][100];

int dp(int idx,int sum1,int sum2,int sum3)
{
  if(sum1==0 && sum2==0 && sum3==0)
    return 1;

  if(sum1<0 || sum2<0 || sum3<0 ||idx==n)
    return 0;

  int &ans=cache[idx][sum1][sum2][sum3];

  if(ans!=-1)
    return ans;

  ans=0;

  ans|=dp(idx+1,sum1-a[idx],sum2,sum3);
  ans|=dp(idx+1,sum1,sum2-a[idx],sum3);
  ans|=dp(idx+1,sum1,sum2,sum3-a[idx]);

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

  if(sum%3==0)
  {
    int ans=dp(0,sum/3,sum/3,sum/3);
    if(ans==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  else
    cout<<"NO"<<endl;

return 0;
}
