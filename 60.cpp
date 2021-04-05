// Check if an array is formed by consecutive integers

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  set <int> s1;

  for(int i=0;i<n;i++)
  {
    cout<<a[i]<<endl;
    s1.insert(a[i]);
  }

  if(s1.size()==n)
  {
    int mi=*s1.begin();
    int ma=*--s1.end();

    if(ma-mi+1==n)
      cout<<"Yes"<<endl;
  }
}
