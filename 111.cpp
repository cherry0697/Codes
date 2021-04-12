// Find surpasser count for each array element

#include<bits/stdc++.h>
using namespace std;

map<int,int> m1;

void merge(int a[],int l,int m,int r)
{
  int n1=m-l+1;
  int n2=r-m;

  int L[n1],R[n2];

  for(int i=0;i<n1;i++)
    L[i]=a[l+i];
  for(int i=0;i<n2;i++)
    R[i]=a[m+1+i];

  int i=0,j=0,k=l;

  int co=n2;

  while(i<n1 && j<n2)
  {
    if(L[i]<R[j])
    {
      a[k]=L[i];
      i++;
      m1[a[k]]+=co;
    }
    else
    {
      a[k]=R[j];
      j++;
      co--;
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
}

void merge_sort(int a[],int l,int r)
{
  if(l==r)
    return;

  int m=l+(r-l)/2;
  merge_sort(a,l,m);
  merge_sort(a,m+1,r);
  merge(a,l,m,r);
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    m1[a[i]]=0;
  }

  merge_sort(a,0,n-1);

  for(auto itr: m1)
  {
    cout<<itr.first<<" "<<itr.second<<endl;
  }

return 0;
}
