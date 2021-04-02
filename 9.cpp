// In-place merge two sorted arrays
// O(N+M) and O(1) space

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

  int ma=max(a[n-1],b[m-1])+1;

  int i=0,j=0;

  int l=0;

  while(i<n && j<m)
  {
    int temp1=a[i]%ma;
    int temp2=b[j]%ma;

    int temp=min(temp1,temp2);

    if(l<n)
      a[l]+=temp*ma;
    else
      b[l-n]+=temp*ma;

    if(temp1<temp2)
      i++;
    else
      j++;

    l++;
  }

  while(i<n)
  {
    int temp=a[i]%ma;

    if(l<n)
      a[l]+=temp*ma;
    else
      b[l-n]+=temp*ma;

    i++;
    l++;
  }

  while(j<m)
  {
    int temp=b[j]%ma;

    if(l<n)
      a[l]+=temp*ma;
    else
      b[l-n]+=temp*ma;

    j++;
    l++;
  }

  for(i=0;i<n;i++)
  {
    a[i]/=ma;
    cout<<a[i]<<" ";
  }

  cout<<endl;

  for(i=0;i<m;i++)
  {
    b[i]/=ma;
    cout<<b[i]<<" ";
  }

  cout<<endl;

return 0;
}
