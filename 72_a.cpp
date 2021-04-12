// Rearrange an array such that it contains alternate positive and negative numbers
// O(N) time and O(1) space
// Relative ordering disturbed

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int j=0;

  for(int i=0;i<n;i++)
  {
    if(a[i]<0)
    {
      swap(a[i],a[j]);
      j++;
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

  for(int i=0;i<j;i+=2)
  {
    if(j>=n)
      break;

    swap(a[i],a[j]);
    j++;
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
