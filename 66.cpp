// Find all distinct combinations of a given length – II

#include<bits/stdc++.h>
using namespace std;

int n;
int a[100];

void find(int idx,vector <int> &ans,int k)
{
  if(k==0)
  {
    for(auto itr: ans)
      cout<<itr<<" ";

    cout<<endl;
    return;
  }

  if(idx==n)
    return;

  for(int i=idx;i<n;i++)
  {
    ans.push_back(a[i]);
    find(i+1,ans,k-1);
    ans.pop_back();

    while(i+1<n && a[i]==a[i+1])
      i++;
  }
}

int main()
{
  cin>>n;

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  int k;
  cin>>k;

  vector <int> ans;

  find(0,ans,k);

return 0;
}
