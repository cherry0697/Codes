// Counting sort

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  int ma=-1;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    ma=max(ma,a[i]);
  }

  int stor[ma+1]={};

  for(int i=0;i<n;i++)
  {
    stor[a[i]]++;
  }

  for(int i=1;i<=ma;i++)
  {
    stor[i]+=stor[i-1];
  }

  int ans[n];

  for(int i=0;i<n;i++)
  {
    ans[stor[a[i]]-1]=a[i];
    stor[a[i]]--;
  }

  for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";

  cout<<endl;

return 0;
}
