// K–Partition Problem | Printing all partitions

#include<bits/stdc++.h>
using namespace std;

int k,n;

bool check(int s[])
{
  bool ok=true;

  for(int i=0;i<k;i++)
  {
    if(s[i]!=0)
      ok=false;
  }

  return ok;
}

bool find(int a[],int s[],int ans[],int idx)
{
  if(check(s))
  {
    for(int i=0;i<k;i++)
    {
      for(int j=0;j<n;j++)
      {
        if(ans[j]==i)
          cout<<a[j]<<" ";
      }
      cout<<endl;
    }

    return true;
  }

  if(idx==n)
    return false;

  bool ok=false;

  for(int i=0;i<k;i++)
  {
    if(!ok && s[i]-a[idx]>=0)
    {
      ans[idx]=i;
      s[i]-=a[idx];

      ok=find(a,s,ans,idx+1);
      s[i]+=a[idx];
    }
  }

  return ok;
}

int main()
{
  cin>>n;

  int a[n];

  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }

  int ans[n];
  memset(ans,-1,sizeof(ans));

  cin>>k;

  if(sum%k!=0)
    exit(0);

  int s[k];

  for(int i=0;i<k;i++)
    s[i]=sum/k;

  int ok=find(a,s,ans,0);

return 0;
}
