// Find the smallest window in an array sorting
// which will make the entire array sorted

// O(N) and O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=0;
  int flag=0;

  for(int i=0;i<n;i++)
  {
    if(a[i]<a[l])
    {
      flag=1;
      while(l>=0 && a[i]<a[l])
        l--;
    }
    else
    {
      if(flag==0)
        l=i;
    }
  }

  int r=n-1;
  flag=0;

  for(int i=n-1;i>=0;i--)
  {
    if(a[i]>a[r])
    {
      flag=1;
      while(r<n && a[i]>a[r])
        r++;
    }
    else
    {
      if(flag==0)
        r=i;
    }
  }

  if(l<r)
    cout<<l+1<<" "<<r-1<<endl;

return 0;
}
