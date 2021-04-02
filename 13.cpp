// Rearrange an array with alternate high and low elements
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=1;i<n;i+=2)
  {
    if(a[i-1]>a[i])
      swap(a[i],a[i-1]);
    if(i+1<n && a[i+1]>a[i])
      swap(a[i],a[i+1]);
  }

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<" ";
  }

  cout<<endl;

return 0;
}
