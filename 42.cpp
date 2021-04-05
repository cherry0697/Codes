// Print all quadruplets with a given sum | 4 sum problem extended

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  int sum;
  cin>>sum;

  for(int i=0;i<=n-4;i++)
  {
    for(int j=i+1;j<=n-3;j++)
    {
      int s=sum-(a[i]+a[j]);

      int l=j+1,r=n-1;

      while(l<r)
      {
        if(a[l]+a[r]==s)
        {
          cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<endl;
          l++;
          r--;
        }
        else if(a[l]+a[r]>s)
          r--;
        else
          l++;
      }
    }
  }

return 0;
}
