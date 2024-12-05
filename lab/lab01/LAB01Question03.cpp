#include <iostream>
using namespace std;

int partition(int A[],int l, int h)
{
    int p=A[h];
    int i=l-1;
    int j;
    for(j=l;j<=h-1;j++)
    {
        if(A[j]<=p)
        {

            i++;
            swap(A[i],A[j]);
        }
        else if(A[j]==p)
        {
            swap(A[i],p);
        }
    }

    swap(A[i+1],A[j]);
    return (i+1);
}
void QuickSort(int A[],int l,int h)
{
  if(l<h)
  {
      int p=partition(A,l,h);
      QuickSort(A,l,p-1);
      QuickSort(A,p+1,h);
  }

}




int main()
{
    int a;
    int arr[100];
    cout<<"Enter the array size: "<<endl;
    cin>>a;

    for(int i=0; i<a; i++)
    {
        cout<<"Enter the value of array:"<<endl;
        cin>>arr[i];
    }
    cout<<"Before sorting:" <<endl;
    cout<<"The array is:"<<endl;

    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<" "<<endl;
    QuickSort(arr,0,a-1);
    cout<<"The sorted array is: "<<endl;
    for(int i=0; i<a; i++)
    {
        cout<<arr[i]<<" ";
    }


}
