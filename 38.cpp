// Reverse every consecutive `m`-elements of a subarray

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int m;
  cin>>m;

  int s,e;
  cin>>s>>e;

  for(int i=s;i<=e;i+=m)
  {
    int l=i;
    int r=i+m-1;

    if(r>e)
      break;

    while(l<r)
    {
      swap(a[l],a[r]);
      l++;
      r--;
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
