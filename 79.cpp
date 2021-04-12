// Determine the index of an element that satisfies given constraints in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int left[n];
  int ma=INT_MIN;

  for(int i=0;i<n;i++)
  {
    left[i]=ma;
    ma=max(ma,a[i]);
  }

  int mi=INT_MAX;

  int ans=-1;

  for(int i=n-1;i>=0;i--)
  {
    if(a[i]<mi && a[i]>left[i])
    {
      ans=i;
      break;
    }

    mi=min(mi,a[i]);
  }

  cout<<ans<<endl;

return 0;
}
