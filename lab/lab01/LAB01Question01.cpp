#include <iostream>
using namespace std;

int BinarySearch(int A[], int l,int h,int x)
{
    int mid=(l+h)/2;

    if (A[mid]==x)
    {
      return mid;
    }
    else
    {
        if(A[mid]<x)
        {
            return BinarySearch(A,mid+1,h,x);
        }
        else
        {
            return BinarySearch(A,l,mid-1,x);
        }


    }
}




int main()
{
  int a;
  int arr[100];
  cout<<"Enter the array size"<<endl;
  cin>>a;
  for(int i=0;i<a;i++)
  {
      cout<<"enter the value: ";
      cin>>arr[i];

  }
  cout<<"Value of array: "<<endl;


  int b;
  int c;
  cout<<"Enter the value to search: ";
  cin>>b;
  c=BinarySearch(arr,0,a-1,b);
 cout<<"The searched index is:"<< c;
}
