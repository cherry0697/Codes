// Find maximum length subarray having a given sum
// O(N) and O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  int sum=0;

  map<int,vector<int>> m1;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];

    m1[sum].push_back(a[i]);
  }

  int s;
  cin>>s;

  sum=0;

  int ans=-1;

  for(int i=0;i<n;i++)
  {
    if(m1[sum+s].size()>0)
    {
      ans=max(ans,m1[sum+s].back()-i+1);
    }

    sum+=a[i];
    if(m1[sum].size()>0)
      m1[sum].erase(m1[sum].begin());
  }

  cout<<ans<<endl;

return 0;
}
