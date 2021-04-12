// Shuffle an array according to the given order of elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int pos[n];

  for(int i=0;i<n;i++)
    cin>>pos[i];

  for(int i=0;i<n;i++)
  {
    while(pos[i]!=i)
    {
      swap(a[i],a[pos[i]]);
      swap(pos[i],pos[pos[i]]);
    }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
