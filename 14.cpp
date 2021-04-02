// Find equilibrium index of an array
// O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }

  int temp_sum=0;

  for(int i=0;i<n;i++)
  {
    temp_sum+=a[i];

    if(temp_sum-a[i]==sum-temp_sum)
    {
      cout<<i<<" ";
    }
  }

  cout<<endl;

return 0;
}
