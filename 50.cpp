// Find all symmetric pairs in an array of pairs

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  pair<int,int> a[n];

  for(int i=0;i<n;i++)
    cin>>a[i].first>>a[i].second;

  map<pair<int,int>,int> m1;

  for(int i=0;i<n;i++)
  {
    if(m1[{a[i].second,a[i].first}]!=0)
      cout<<a[i].first<<" "<<a[i].second<<" || "<<a[i].second<<" "<<a[i].first<<endl;
    else
      m1[{a[i].first,a[i].second}]++;
  }

return 0;
}
