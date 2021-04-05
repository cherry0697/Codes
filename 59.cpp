// Find an index of the maximum occurring element with equal probability

#include<bits/stdc++.h>
using namespace std;

int main()
{
  srand(time(0));

  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  map<int,vector<int>> m1;

  int val=-1;
  int occ=0;

  for(int i=0;i<n;i++)
  {
    m1[a[i]].push_back(i);

    if(m1[a[i]].size()>occ)
    {
      occ=m1[a[i]].size();
      val=a[i];
    }
  }

  int len=m1[val].size();

  int ind=rand()%len;

  cout<<m1[val][ind]<<endl;

return 0;
}
