#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int a[],int n)
{
  for(int i=1;i<n;i++)
  {
    int val=a[i];
    int j=i-1;

    while(j>=0 && a[j]>val)
    {
      a[j+1]=a[j];
      j--;
    }

    a[j+1]=val;
  }
}

int main()
{
  int n;
  cin>>n;

  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  insertion_sort(a,n);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

  cout<<endl;

return 0;
}
