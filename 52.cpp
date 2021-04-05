// Partition an array into two subarrays with the same sum

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

  int s=0;

  int ind=-1;

  for(int i=0;i<n;i++)
  {
    if(s==sum-s)
    {
      ind=i;
      break;
    }

    s+=a[i];
  }

  if(s==sum-s)
  {
    for(int i=0;i<ind;i++)
      cout<<a[i]<<" ";

    cout<<endl;

    for(int i=ind;i<n;i++)
      cout<<a[i]<<" ";

    cout<<endl;
  }

return 0;
}
