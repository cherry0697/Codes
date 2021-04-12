// Count the number of strictly increasing subarrays in an array

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int len=1;

  int ans=0;

  for(int i=1;i<n;i++)
  {
    if(a[i]>a[i-1])
      len++;
    else
    {
      int temp=len*(len-1);
      temp/=2;
      ans+=temp;
      len=1;
    }
  }

  int temp=len*(len-1);
  temp/=2;
  ans+=temp;

  cout<<ans<<endl;

return 0;
}
