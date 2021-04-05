// Find the count of distinct elements in every subarray of size `k`

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int k;
  cin>>k;

  map<int,int> m1;

  int dis=0;

  for(int i=0;i<k;i++)
  {
    if(m1[a[i]]==0)
      dis++;

    m1[a[i]]++;
  }

  cout<<dis<<" ";

  for(int i=k;i<n;i++)
  {
    m1[a[i-k]]--;
    if(m1[a[i-k]]==0)
      dis--;

    if(m1[a[i]]==0)
      dis++;

    m1[a[i]]++;

    cout<<dis<<" ";
  }

  cout<<endl;

return 0;
}
