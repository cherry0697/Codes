// Print all subarrays with 0 sum
// O(relative) time and O(N) space

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  map <int,vector<int>> m1;
  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];

    m1[sum].push_back(i);
  }

  sum=0;

  for(int i=0;i<n;i++)
  {
    if(m1[sum].size()>0)
    {
      for(auto itr: m1[sum])
        cout<<i<<" "<<itr<<endl;
    }

    sum+=a[i];
    if(m1[sum].size()>0)
      m1[sum].erase(m1[sum].begin());
  }

return 0;
}
