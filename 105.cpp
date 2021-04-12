#include<bits/stdc++.h>
using namespace std;

int merge(int a[],int l,int m,int r)
{
  int n1=m-l+1;
  int n2=r-m;

  int L[n1],R[n2];

  for(int i=0;i<n1;i++)
    L[i]=a[i+l];
  for(int i=0;i<n2;i++)
    R[i]=a[m+1+i];

  int cnt=0;

  int i=0,j=0,k=l;

  while(i<n1 && j<n2)
  {
    if(L[i]>R[j])
    {
      a[k]=R[j];
      int temp=
      cnt+=(n1-i);
      j++;
    }
    else
    {
      a[k]=L[i];
      i++;
    }

    k++;
  }

  while(i<n1)
  {
    a[k]=L[i];
    i++;
    k++;
  }

  while(j<n2)
  {
    a[k]=R[j];
    j++;
    k++;
  }

  return cnt;
}

int inversion_count(int a[],int l,int r)
{
  if(l>=r)
    return 0;

  int mid=l+(r-l)/2;
  int cnt=0;

  cnt+=inversion_count(a,l,mid);
  cnt+=inversion_count(a,mid+1,r);
  cnt+=merge(a,l,mid,r);

  return cnt;
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=inversion_count(a,0,n-1);

  cout<<ans<<endl;

return 0;
}
