// Find subarrays with a given sum in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  map<int,vector<int>> m1;

  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
    m1[sum].push_back(i);
  }

  int s;
  cin>>s;

  sum=0;

  for(int i=0;i<n;i++)
  {
    if(m1[s+sum].size()!=0)
    {
      for(auto itr: m1[s+sum])
        cout<<i<<" "<<itr<<endl;
    }

    sum+=a[i];
    if(m1[sum].size()!=0)
      m1[sum].erase(m1[sum].begin());
  }


return 0;
}
