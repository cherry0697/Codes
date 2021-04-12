// Find all distinct combinations of a given length with repetition allowed

#include<bits/stdc++.h>
using namespace std;

int n;

void find(int a[],vector<int> &ans,int k,int idx)
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

  ans.push_back(a[idx]);
  find(a,ans,k-1,idx);
  ans.pop_back();
  while(idx+1<n && a[idx]==a[idx+1])
    idx++;
  find(a,ans,k,idx+1);
}

int main()
{
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  sort(a,a+n);

  int k;
  cin>>k;

  vector <int> ans;

  find(a,ans,k,0);

return 0;
}
