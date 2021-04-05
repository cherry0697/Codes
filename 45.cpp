// Print all triplets that form an arithmetic progression

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=1;i<n-1;i++)
  {
    int sum=2*a[i];

    int l=0,r=n-1;

    while(l<i && r>i)
    {
      if(a[l]+a[r]==sum)
      {
        cout<<a[l]<<" "<<a[i]<<" "<<a[r]<<endl;
        l++;
        r--;
      }
      else if(a[l]+a[r]>sum)
        r--;
      else
        l++;
    }
  }

return 0;
}
