// Merge two arrays by satisfying given constraints

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int a[n],b[m];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<m;i++)
    cin>>b[i];

  // Lets push all non-zeroes at end without
  // disturbing their relative order

  int r=n-1;

  for(int i=n-1;i>=0;i--)
  {
    if(a[i]!=0)
    {
      swap(a[i],a[r]);
      r--;
    }
  }

  int l=0;
  r++;

  int ind;

  while(r<n && l<m)
  {
    if(a[r]<b[l])
    {
      a[ind]=a[r];
      r++;
    }
    else
    {
      a[ind]=b[l];
      l++;
    }

    ind++;
  }

  while(r<n)
  {
    a[ind]=a[r];
    r++;
    ind++;
  }

  while(l<m)
  {
    a[ind]=b[l];
    l++;
    ind++;
  }

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

  cout<<endl;

return 0;
}
