// Find pairs with difference `k` in an array

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

  sort(a,a+n);

  int diff;
  cin>>diff;

  for(int i=0;i<n;i++)
  {
    while(i+1<n && a[i]==a[i+1])
      i++;

    if(m1[a[i]-diff]==1)
      cout<<a[i]<<" "<<a[i]-diff<<endl;

    m1[a[i]]=1;
  }

return 0;
}
