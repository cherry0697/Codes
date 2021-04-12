// Find a pair with the given sum in a circularly sorted array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=0,r=n-1;

  while(r-l>1)
  {
    int mid=l+(r-l)/2;
    if(a[mid]>=a[l])
      l=mid;
    else
      r=mid;
  }

  int pi;

  if(a[l]>a[r])
    pi=l;
  else
    pi=r;

  l=(pi+1)%n;
  r=pi;

  int sum;
  cin>>sum;

  while(l!=r)
  {
    if(a[l]+a[r]==sum)
    {
      cout<<a[l]<<" "<<a[r]<<endl;
      break;
    }
    else if(a[l]+a[r]>sum)
      r=(r-1+n)%n;
    else
      l=(l+1)%n;
  }


return 0;
}
