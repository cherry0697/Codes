// Find minimum removals required in an array to satisfy given constraints
// O(N^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=1;

  for(int i=0;i<n;i++)
  {
    int mi=a[i],ma=a[i];

    for(int j=i+1;j<n;j++)
    {
      mi=min(mi,a[j]);
      ma=max(ma,a[j]);

      if(ma<2*mi)
      {
        ans=max(ans,j-i+1);
      }
    }
  }

  cout<<n-ans<<endl;

return 0;
}
