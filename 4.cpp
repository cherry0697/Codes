// Sort binary array in linear time
// O(N) time and O(1) space
// Two Pointers

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=0,r=n-1;

  while(l<r)
  {
    if(a[l]==0)
      l++;
    else
    {
      swap(a[l],a[r]);
      r--;
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
