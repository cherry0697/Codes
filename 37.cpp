// Find the longest continuous sequence length with
// the same sum in given binary arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n],b[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
    cin>>b[i];

  map <int,vector<int>> m1;

  int sum1=0,sum2=0;

  for(int i=0;i<n;i++)
  {
    sum1+=a[i];
    sum2+=b[i];

    m1[sum1-sum2].push_back(i);
  }

  sum1=0;
  sum2=0;

  int ans=-1;

  for(int i=0;i<n;i++)
  {
    if(m1[sum1-sum2].size()>0)
      ans=max(ans,m1[sum1-sum2].back()-i+1);

    sum1+=a[i];
    sum2+=b[i];

    if(m1[sum1-sum2].size()>0)
      m1[sum1-sum2].erase(m1[sum1-sum2].begin());
  }

  cout<<ans<<endl;

return 0;
}
