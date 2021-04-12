// Find minimum moves required for converting a given array to an array of zeroes

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

  while(1)
  {
    int cnt=0;

    for(int i=0;i<n;i++)
    {
      if(a[i]%2!=0)
      {
        ans++;
        a[i]--;
      }

      if(a[i]==0)
        cnt++;
    }

    if(cnt==n)
      break;

    ans++;

    for(int i=0;i<n;i++)
    {
      a[i]/=2;
    }
  }

  cout<<ans<<endl;

return 0;
}
