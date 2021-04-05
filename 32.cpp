// Trapping Rain Water

// O(N) and O(N)

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int ri[n];

  ri[n-1]=a[n-1];

  for(int i=n-2;i>=0;i--)
  {
    int temp=max(a[i],ri[i+1]);
    ri[i]=temp;
  }

  int ans=0;
  int ma=-1;

  for(int i=0;i<n;i++)
  {
    ma=max(ma,a[i]);
    int temp=min(ma,ri[i]);

    ans+=max(temp-a[i],0);
  }

  // O(1) solution

  int ans1=0;
  int l=0,r=n-1;

  int mi=min(a[l],a[r]);

  while(l<r)
  {
    int temp=min(a[l],a[r]);
    mi=max(mi,temp);

    if(a[l]<a[r])
    {
      ans1+=max(a[l]-mi,0);
      l++;
    }
    else
    {
      ans1+=max(mi-a[r],0);
      r--;
    }
  }

  cout<<ans1<<endl;

return 0;
}
