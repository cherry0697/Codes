// Add elements of two arrays into a new array

#include<bits/stdc++.h>
using namespace std;

void split(vector <int> &ans, int n)
{
  if(n>0)
  {
    split(ans,n/10);
    ans.push_back(n%10);
  }
}

int main()
{
  int n,m;
  cin>>n>>m;

  int a[n+1],b[m+1];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<m;i++)
    cin>>b[i];

  int l=0,r=0;

  vector <int> ans;

  while(l<n && r<m)
  {
    int sum=a[l]+b[r];
    split(ans,sum);

    l++;
    r++;
  }

  while(l<n)
  {
    split(ans,a[l]);
    l++;
  }

  while(r<m)
  {
    split(ans,b[r]);
    r++;
  }

  for(auto itr: ans)
    cout<<itr<<" ";

  cout<<endl;

return 0;
}
