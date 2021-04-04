// Find the maximum sequence of continuous 1’s formed by replacing at-most `k` zeroes by ones
//O(N) and O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int prev=-1;

  int ans=-1;

  queue <int> q1;

  for(int i=0;i<n;i++)
  {
    if(a[i]==0)
      q1.push(i);

    if(q1.size()>k)
    {
      prev=q1.front();
      q1.pop();
    }

    ans=max(ans,i-prev);
  }

  cout<<ans<<endl;

return 0;
}
