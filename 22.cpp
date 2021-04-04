// Maximum Sum Circular Subarray

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  int sum=0;
  int sum1=0,running_sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    running_sum+=a[i];

    if(running_sum<0)
      running_sum=0;

    sum+=a[i];
    a[i]*=(-1);

    sum1=max(sum1,running_sum);
  }

  int neg_sum=0;
  running_sum=0;

  for(int i=0;i<n;i++)
  {
    running_sum+=a[i];
    if(running_sum<0)
      running_sum=0;

    neg_sum=max(neg_sum,running_sum);
  }

  neg_sum*=(-1);

  cout<<max(sum1,sum-neg_sum)<<endl;

return 0;
}
