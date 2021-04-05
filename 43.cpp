// Quickselect Algorithm

#include<bits/stdc++.h>
using namespace std;

int part(int a[],int l,int r)
{
  int pivot=a[r];
  int i=l-1;

  for(int j=l;j<r;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      swap(a[i],a[j]);
    }
  }

  swap(a[i+1],a[r]);
  return i+1;
}

void quickselect(int a[],int l,int r,int k)
{
  if(l<r)
  {
    int pi=part(a,l,r);

    if(pi==k)
    {
      cout<<a[pi]<<endl;
      return;
    }

    if(pi>k)
      quickselect(a,l,pi-1,k);
    else
      quickselect(a,pi+1,r,k);
  }
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int k;
  cin>>k;

  // 0 based indexing for k

  quickselect(a,0,n-1,k);

return 0;
}
