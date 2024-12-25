#include<iostream>
using namespace std;

int maxCap(int n,int m,int arr1[],int arr2[])
{
    int dp[n+1][m+1];


    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;
            }
            else if(arr1[i]>j)
            {
                dp[i][j]=dp[i-1][j];

            }
            else
            {
                dp[i][j]=max(dp[i-1][j],(dp[i-1][j-arr1[i]]+arr2[i]));
            }
        }

    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    return dp[n][m];
}








int main()
{
    int n=4;
    int m=8;

    int w[]= {2,3,4,5};
    int v[]= {3,4,5,6};

    cout<<maxCap(n,m,w,v)<<endl;


}
