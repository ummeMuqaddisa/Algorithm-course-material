#include <iostream>
using namespace std;

int main()
{
  int arr1 [100];
  int arr2 [100];

  int a;
  cout<<"How many jobs: "<<endl;
  cin>>a;

  for(int i=0;i<a;i++)
  {
    cout<<"Enter the starting time & ending time respectfully: "<<endl;
     cin>>arr1[i];
     cin>>arr2[i];
  }
  for(int i=0;i<a;i++)
  {
    cout<< "Starting time: "<<arr1[i]<<endl;
    cout<< "Ending time: "<<arr2[i]<<endl;
  }


  int count=1;
  int i=1;
  int j=0;

  while(j<a)
  {
     if(arr1[i]>arr2[j])
     {
        count++;
        j=i;
        i++;
     }
     else
     {
       i++;
     }

  }

   cout<<" "<<endl;
   cout<<count;
}


















