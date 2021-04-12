// Count triplets which form an inversion in an array
// O(N^2)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=0;

  for(int i=1;i<n-1;i++)
  {
    int temp1=0,temp2=0;

    for(int j=0;j<i;j++)
    {
      if(a[j]>a[i])
        temp1++;
    }

    for(int j=i+1;j<n;j++)
    {
      if(a[j]<a[i])
        temp2++;
    }

    ans+=(temp1*temp2);
  }

  cout<<ans<<endl;

return 0;
}
