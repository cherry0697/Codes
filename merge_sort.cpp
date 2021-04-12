#include<bits/stdc++.h>
using namespace std;

void merge(int le,int m,int ri,int a[])
{
  int n1=m-le+1;
  int n2=ri-m;

  int l[n1],r[n2];

  for(int i=0;i<n1;i++)
    l[i]=a[i+le];

  for(int i=0;i<n2;i++)
    r[i]=a[m+1+i];

  int i=0,j=0;

  int k=le;

  while(i<n1 && j<n2)
  {
    if(l[i]<r[j])
    {
      a[k]=l[i];
      i++;
    }
    else
    {
      a[k]=r[j];
      j++;
    }

    k++;
  }

  while(i<n1)
  {
    a[k]=l[i];
    k++;
    i++;
  }

  while(j<n2)
  {
    a[k]=r[j];
    j++;
    k++;
  }
}

void mergesort(int l,int r,int a[])
{
  if(l>=r)
    return;

  int m=l+(r-l)/2;
  mergesort(l,m,a);
  mergesort(m+1,r,a);
  merge(l,m,r,a);
}

void merge_sort(int a[],int n)
{
  mergesort(0,n-1,a);
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  merge_sort(a,n);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
