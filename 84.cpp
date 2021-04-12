// Job Sequencing Problem with Deadlines
// DSU

#include<bits/stdc++.h>
using namespace std;

int parent[105];

int find(int i)
{
  if(parent[i]!=i)
    return parent[i]=find(parent[i]);
  return parent[i];
}

int main()
{
  int n;
  cin>>n;

  pair<int,int> a[n];

  for(int i=0;i<n;i++)
    cin>>a[i].second>>a[i].first;

  sort(a,a+n,greater<pair<int,int>>());

  for(int i=0;i<=100;i++)
    parent[i]=i;

  int ans=0;

  for(int i=0;i<n;i++)
  {
    int temp=find(a[i].second);
    if(temp==0)
      continue;
    parent[temp]=temp-1;
    ans+=a[i].first;
  }

  cout<<ans<<endl;

return 0;
}
