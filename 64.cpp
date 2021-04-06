// Count distinct absolute values in a sorted array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=0;

  int l=0,r=n-1;

  while(l<=r)
  {
    while(l<r && a[l]==a[l+1])
      l++;

    while(l<r && a[r]==a[r-1])
      r--;

    if(abs(a[l])==abs(a[r]))
    {
      ans++;
      l++;
      r--;
    }
    else if(abs(a[l])>abs(a[r]))
    {
      ans++;
      l++;
    }
    else
    {
      ans++;
      r--;
    }
  }

  cout<<ans<<endl;

return 0;
}
