// Move all zeros present in an array to the end
// O(N) and O(1)
// Relative Order Maintained

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int l=0;

  for(int i=0;i<n;i++)
  {
    if(a[i]!=0)
    {
      swap(a[i],a[l]);
      l++;
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
