// Find the index that divides an array into two non-empty subarrays with equal sum

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

  int s=a[0];

  for(int i=1;i<n-1;i++)
  {
    if(s==sum-(s+a[i]))
      cout<<i<<endl;

    s+=a[i];
  }

return 0;
}
