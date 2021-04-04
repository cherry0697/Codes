// Find minimum sum subarray of size `k`
// O(N) Sliding Window and O(1)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;

  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];

  int sum=0;

  for(int i=0;i<k;i++)
    sum+=a[i];

  int curr_sum=sum;

  for(int i=k;i<n;i++)
  {
    curr_sum+=a[i];
    curr_sum-=a[i-k];

    sum=min(sum,curr_sum);
  }

  cout<<sum<<endl;

return 0;
}
