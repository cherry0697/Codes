// Find the longest subsequence formed by consecutive integers

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  map<int,int> m1;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    m1[a[i]]=1;
  }

  int ans=0;

  for(int i=0;i<n;i++)
  {
    if(m1[a[i]-1]!=1)
    {
      int len=1;
      while(m1[a[i]+len]==1)
        len++;

      ans=max(ans,len);
    }
  }

  cout<<ans<<endl;

return 0;
}
