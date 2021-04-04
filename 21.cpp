// Print continuous subarray with maximum sum
// Kadanes Algo

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum=0,running_sum=0;

  int start=0,end=0;
  int running_start=0,running_end=0;

  for(int i=0;i<n;i++)
  {
    running_sum+=a[i];
    if(running_sum<0)
    {
      running_start=i+1;
      running_end=i;
      running_sum=0;
    }
    else
    {
      running_end=i;
    }

    if(running_sum>sum)
    {
      sum=running_sum;
      start=running_start;
      end=running_end;
    }
  }

  for(int i=start;i<=end;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
