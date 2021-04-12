// Activity Selection Problem

// Greedy

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  pair<int,int> a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i].second>>a[i].first;
  }

  sort(a,a+n);

  int ans=1;

  int end=a[0].first;

  for(int i=1;i<n;i++)
  {
    if(a[i].second>=end)
    {
      ans++;
      end=a[i].first;
    }
  }

  cout<<ans<<endl;

return 0;
}
