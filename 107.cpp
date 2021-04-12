// Sort elements by their frequency and index

#include<bits/stdc++.h>
using namespace std;

bool mine(tuple<int,int,int> const& p1,tuple<int,int,int> const& p2)
{
  if(get<1>(p1)!=get<1>(p2))
    return get<1>(p1)>get<1>(p2);

  return get<2>(p1)<get<2>(p2);
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  map<int,pair<int,int>> m1;

  vector <tuple<int,int,int>> v1;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    m1[a[i]].first++;

    if(m1[a[i]].first==1)
      m1[a[i]].second=i;
  }

  for(auto itr: m1)
    v1.push_back({itr.first,itr.second.first,itr.second.second});

  sort(v1.begin(),v1.end(),mine);


  int a1,b1,c1,k=0;

  for(auto itr: v1)
  {
    tie(a1,b1,c1) = itr;
    for(int j=0;j<b1;j++)
        a[k++]=a1;
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;
}
