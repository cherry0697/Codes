// Find a triplet with the given sum in an array
// Sorting
#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum;
  cin>>sum;

  sort(a,a+n);

  for(int i=1;i<n-1;i++)
  {
    int l=0;
    int r=n-1;

    int s=sum-a[i];

    while(l<i && r>i)
    {
      if(a[l]+a[r]==s)
      {
        cout<<a[l]<<" "<<a[i]<<" "<<a[r]<<endl;
        l++;
        r--;
      }
      else if(a[l]+a[r]>s)
        r--;
      else
        l++;
    }
  }

return 0;
}
