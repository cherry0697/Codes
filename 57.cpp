// Find the minimum index of a repeating element in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  map<int,int> m1;

  int ans=INT_MAX;

  for(int i=0;i<n;i++)
  {
    if(m1[a[i]]!=0)
    {
      ans=min(m1[a[i]]-1,ans);
    }

    m1[a[i]]=i+1;
  }

  cout<<ans<<endl;

return 0;
}
