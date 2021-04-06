// Find two non-overlapping pairs having the same sum in an array
// Boring solution

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int flag=0;

  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  map <int,vector<pair<int,int>>> m1;

  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      int sum=a[i]+a[j];

      if(m1[sum].size()!=0)
      {
        for(auto itr: m1[sum])
        {
          if(itr.first!=i && itr.first!=j && itr.second!=i && itr.second!=j)
          {
            cout<<a[i]<<" "<<a[j]<<" and "<<a[itr.first]<<" "<<a[itr.second]<<endl;
            flag=1;
            break;
          }
        }
      }

      if(flag)
        break;

      m1[sum].push_back({i,j});
    }

    if(flag)
      break;
  }

return 0;
}
