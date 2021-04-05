// Find the closest pair to a given sum in two sorted arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;

  int a[n],b[m];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<m;i++)
    cin>>b[i];

  int l=0,r=m-1;

  int sum;
  cin>>sum;

  int diff=INT_MAX;

  pair<int,int> ans;

  while(l<n && r>=0)
  {
    int s=a[l]+b[r];

    if(abs(s-sum)<diff)
    {
      diff=abs(s-sum);
      ans.first=a[l];
      ans.second=b[r];
    }

    if(s>sum)
      r--;
    else if(s<sum)
      l++;
    else
    {
      l++;
      r--;
    }
  }

  cout<<ans.first<<" "<<ans.second<<endl;

return 0;
}
