// Find a subarray having the given sum in an integer array

// Positive Elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,s;
  cin>>n>>s;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum=0,j=0;

  for(int i=0;i<n;i++)
  {
    sum+=a[i];

    while(sum>s)
    {
      sum-=a[j];
      j++;
    }

    if(sum==s)
    {
      cout<<j<<" "<<i<<endl;
      break;
    }
  }

return 0;
}
