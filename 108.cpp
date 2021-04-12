// Sort an array based on order defined by another array

#include<bits/stdc++.h>
using namespace std;

map<int,int> m1;

bool mine(int const& p1,int const& p2)
{
  if(m1[p1]==0 && m1[p2]==0)
    return p1<p2;

  if(m1[p1]==0)
    return false;
  if(m1[p2]==0)
    return true;

  return m1[p1]<m1[p2];
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int m;
  cin>>m;

  for(int i=0;i<m;i++)
  {
    int x;
    cin>>x;
    m1[x]=i+1;
  }

  sort(a,a+n,mine);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
