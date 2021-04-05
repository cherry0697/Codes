// Find a pair with a minimum absolute sum in an array

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

  int mi=INT_MAX;

  pair<int,int> ans;

  while(l<r)
  {
    if(abs(a[l]+a[r])<mi)
    {
      mi=abs(a[l]+a[r]);
      ans.first=a[l];
      ans.second=a[r];
    }

    if(mi==0)
      break;

    if(a[l]+a[r]<0)
      l++;
    else
      r--;
  }

  cout<<ans.first<<" "<<ans.second<<endl;

return 0;
}
