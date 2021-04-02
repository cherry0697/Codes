// Check if a subarray with 0 sum exists or not
// O(N) time and O(N) space

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  map <int,int> m1;
  int sum=0;

  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];

    m1[sum]++;
  }

  sum=0;

  for(int i=0;i<n;i++)
  {
    if(m1[sum]>0)
    {
      cout<<"Subarray Exists"<<endl;
      break;
    }

    sum+=a[i];
  }

return 0;
}
