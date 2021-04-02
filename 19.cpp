// Longest Bitonic Subarray Problem
// O(N) and O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=1,start=0,flag=0;

  int temp=-1;

  for(int i=1;i<n;i++)
  {
    if(flag==0)
    {
      if(a[i-1]>a[i])
        flag=1;
    }
    else
    {
      if(a[i-1]<a[i])
      {
        flag=0;
        if(temp==-1)
          start=i-1;
        else
          start=temp;

        temp=-1;
      }
      else if(a[i-1]==a[i])
      {
        temp=i-1;
      }
      else
        temp=-1;
    }

    ans=max(ans,i-start+1);
    if(ans==6)
    {
      cout<<start<<" "<<i<<endl;
    }
  }

  cout<<ans<<endl;

return 0;
}
