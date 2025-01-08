#include <iostream>
using namespace std;

void longestInSequence(int a,int arr[])
{
    int dp[a];
    int hashG[a];
    int maxi=0;
    int maxv=0;



    for(int i=0; i<a; i++)
    {
        dp[i]=1;
        hashG[i]=-1;

    }


    for(int i=0; i<a; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[j]<arr[i])
            {
                if(dp[i]<1+dp[j])
                {
                    dp[i]=1+dp[j];
                    hashG[i]=j;

                    if(dp[i]>maxv)
                    {
                        maxi=i;//4
                        maxv=dp[i];//3


                    }
                }

            }
        }
    }

    cout<<maxv<<endl;
    int arr1[maxv];
    int i=0;
    while(maxi>-1)
    {
        arr1[i]=arr[maxi];
        maxi=hashG[maxi];
        i++;
    }

    cout<<endl;

    for(int i=maxv-1;i>=0;i--)
{
    cout<<arr1[i]<< " ";;
}









   // for(int i=0; i<a; i++)
    //{
      //  cout<<dp[i]<<" ";

  //  }

    //cout<<endl;

    //for(int i=0; i<a; i++)
    //{
      //  cout<<hashG[i]<<" ";


    //}




}















int main()
{
    int n=6;
    int arr[n]= {5,4,11,1,16,8};
    longestInSequence(n,arr);
}

