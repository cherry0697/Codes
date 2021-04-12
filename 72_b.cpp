// Rearrange an array such that it contains alternate positive and negative numbers
// O(N) time and O(1) space
// Relative ordering maintained

#include<bits/stdc++.h>
using namespace std;

void right_rotate(int l,int r,int a[])
{
  int last=a[r];

  for(int i=r;i>l;i--)
  {
    a[i]=a[i-1];
  }

  a[l]=last;
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
  {
    if(i%2==0 && a[i]<0)
    {
      int ind=i;
      while(ind<n && a[ind]<0)
        ind++;

      if(ind==n)
        break;

      right_rotate(i,ind,a);
    }
    else if(i%2!=0 && a[i]>0)
    {
      int ind=i;
      while(ind<n && a[ind]>0)
        ind++;

      if(ind==n)
        break;

      right_rotate(i,ind,a);
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
