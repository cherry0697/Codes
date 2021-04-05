// Decode an array constructed from another array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=1,r=n;
  int si=-1;

  while(l<=r)
  {
    int mid=l+(r-l)/2;

    int ele=mid*(mid-1);
    ele/=2;

    if(ele==n)
    {
      si=mid;
      break;
    }

    if(ele>n)
      r=mid-1;
    else
      l=mid+1;
  }

  int sum1=a[0]+a[1];
  int sum2=a[si-1];

  int ans[si];

  ans[0]=sum1-sum2;
  ans[0]/=2;

  cout<<ans[0]<<" ";

  for(int i=0;i<si-1;i++)
  {
    ans[i+1]=a[i]-ans[0];
    cout<<ans[i+1]<<" ";
  }

  cout<<endl;

return 0;
}
