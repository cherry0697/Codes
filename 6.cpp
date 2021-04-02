// Find maximum length subarray having an equal number of 0’s and 1’s
// O(N) and O(N)
// Change 0 to -1 then find maximum length subarray of 0 sum
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

    if(a[i]==0)
      sum-=1;

    m1[sum].push_back(i);
  }

  int ans=-1;

  sum=0;

  for(int i=0;i<n;i++)
  {
    if(m1[sum].size()>0)
    {
      ans=max(ans,m1[sum].back()-i+1);
    }

    sum+=a[i];
    if(a[i]==0)
      sum-=1;
    if(m1[sum].size()>0)
      m1[sum].erase(m1[sum].begin());
  }

  cout<<ans<<endl;

return 0;
}
