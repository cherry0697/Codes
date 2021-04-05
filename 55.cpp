// Print all subarrays of an array having distinct elements

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  map<int,int> m1;

  int start=0;

  int ans[n];

  memset(ans,1,sizeof(ans));

  for(int i=0;i<n;i++)
  {
    m1[a[i]]++;

    if(m1[a[i]]!=1)
    {
      cout<<start<<" "<<i-1<<endl;
      while(m1[a[i]]!=1)
      {
        m1[a[start]]--;
        start++;
      }
    }
  }

  cout<<start<<" "<<n-1<<endl;

return 0;
}
