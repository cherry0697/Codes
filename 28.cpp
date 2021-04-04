// Find the smallest subarray length whose sum of elements is greater than `k`

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int s;
  cin>>s;

  int ans=INT_MAX;

  int j=0,sum=0;

  for(int i=0;i<n;i++)
  {
    sum+=a[i];
    while(sum>s)
    {
      ans=min(ans,i-j+1);
      sum-=a[j];
      j++;
    }
  }

  cout<<ans<<endl;

return 0;
}
