#include <iostream>
using namespace std;


void Merge(int A[],int l,int mid,int h)

{
    int s1=mid-l+1;
    int s2=h-mid;
    int A1[s1];
    int A2[s2];

    for(int i=0;i<s1;i++)
    {
        A1[i]=A[l+i];

    }

    for(int i=0;i<s2;i++)
    {
      A2[i]=A[(mid+1)+i];
    }


    int i=0;
    int j=0;
    int s=l;



    while(i<=s1  &&  j<=s2)
    {
        if(A1[i]<A2[j])
        {
           A[s]=A1[i];
           i++;
           s++;
        }
        else
        {
           A[s]=A2[j];
           j++;
           s++;
        }
    }

    while(i<s1)
    {
       A[s]=A1[i];
       i++;
       s++;
    }

    while(j<s2)
    {
       A[s]=A2[j];
       j++;
       s++;
    }




}

void MergeSort(int A[],int l,int h)
{

   if(l<h)
   {
       int mid=(l+h)/2;
       MergeSort(A,l,mid);
       MergeSort(A,mid+1,h);
       Merge(A,l,mid,h);
   }

}



int main()
{
    int a;
    int arr[100];
    cout<<"Enter the array size: "<<endl;
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cout<<"Enter the value of array:"<<endl;
        cin>>arr[i];
    }
    cout<<"Before sorting:" <<endl;
    cout<<"The array is:"<<endl;

    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<" "<<endl;

    MergeSort(arr,0,a-1);
    cout<<"After sorting: "<<endl;
    cout<<"The array is:"<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }

}
