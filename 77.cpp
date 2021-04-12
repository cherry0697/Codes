// Find a minimum range with at least one element from each of the given arrays

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,s;
  cin>>n>>m>>s;

  int a[n],b[m],c[s];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<m;i++)
    cin>>b[i];

  for(int i=0;i<s;i++)
    cin>>c[i];

  int i=0,j=0,k=0;

  int ans=INT_MAX;
  pair<int,int> rng;

  while(i<n && j<m && k<s)
  {
    int mi=min({a[i],b[j],c[k]});
    int ma=max({a[i],b[j],c[k]});

    if(ma-mi+1<ans)
    {
      ans=ma-mi+1;
      rng={mi,ma};
    }


    if(a[i]==mi)
      i++;
    else if(b[j]==mi)
      j++;
    else
      k++;
  }

  cout<<rng.first<<" "<<rng.second<<endl;

return 0;
}
