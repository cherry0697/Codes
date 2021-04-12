// Water JUgs Problem

#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r,int pivot)
{
  int i=l-1;

  for(int j=l;j<r;j++)
  {
    if(a[j]<pivot)
    {
      i++;
      swap(a[i],a[j]);
    }
    else if(a[j]==pivot)
    {
      swap(a[j],a[r]);
      j--;
    }
  }

  swap(a[i+1],a[r]);
  return i+1;
}

void quick_sort(int a[],int b[],int l,int r)
{
  if(l>=r)
    return;

  int ra=rand()%(r-l+1)+l;
  int chose=a[ra];

  int pi=partition(a,l,r,chose);
  int waste=partition(b,l,r,chose);

  quick_sort(a,b,l,pi-1);
  quick_sort(a,b,pi+1,r);
}

int main()
{
  srand(time(0));

  int n;
  cin>>n;

  int a[n],b[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  for(int i=0;i<n;i++)
    cin>>b[i];

  quick_sort(a,b,0,n-1);

  for(int i=0;i<n;i++)
    cout<<a[i]<<" "<<b[i]<<endl;

return 0;
}
