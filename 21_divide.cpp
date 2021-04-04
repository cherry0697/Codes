#include<bits/stdc++.h>
using namespace std;

int crossing(int a[],int l,int m,int r)
{
  int left_sum=INT_MIN;
  int right_sum=INT_MIN;

  int sum=0;

  for(int i=m;i>=l;i--)
  {
    sum+=a[i];
    left_sum=max(left_sum,sum);
  }

  sum=0;

  for(int i=m+1;i<=r;i++)
  {
    sum+=a[i];
    right_sum=max(right_sum,sum);
  }

  return max({left_sum,right_sum,left_sum+right_sum});
}

int find(int a[],int l,int r)
{
  if(l==r)
    return a[l];

  int mid=l+(r-l)/2;

  int temp1=find(a,l,mid);
  int temp2=find(a,mid+1,r);
  int temp3=crossing(a,l,mid,r);

  return max({temp1,temp2,temp3});
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ans=find(a,0,n-1);

  cout<<ans<<endl;

return 0;
}
