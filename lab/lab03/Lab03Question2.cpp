#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  float arr1 [100];
  float arr2 [100];

  int a;
  cout<<"How many trains: "<<endl;
  cin>>a;

  for(int i=0;i<a;i++)
  {
    cout<<"Enter the starting time & ending time respectfully: "<<endl;
     cin>>arr1[i];
     cin>>arr2[i];
  }

   sort(arr1,arr1+a);
   sort(arr2,arr2+a);

  for(int i=0;i<a;i++)
  {
    cout<< "Starting time: "<<arr1[i]<<endl;
    cout<< "Ending time: "<<arr2[i]<<endl;
  }


  int count=0;
  int i=0;
  int j=0;

  while(j<a)
  {
     if(arr1[i]<arr2[j])
     {
        count++;
        i++;
     }
      else if(arr1[i]>arr2[j])
     {
       count--;
        j++;
     }
     else
     {
       i++;
       j++;
     }

  }

   cout<<" "<<endl;
   cout<<count;
}


















