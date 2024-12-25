#include <iostream>
using namespace std;

int sumTable(int n,int arr1[], int s)
{
        int dp[n+1][s+1];

    for(int i=0;i<=n;i++)
    {

        for(int j=0;j<=s;j++)
        {
            if(i==0 || j==0)
            {
                dp[0][j]=0;
                dp[i][0]=1;
            }
            else if(j<arr1[i])
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                 dp[i][j]=dp[i-1][j]  || dp[i-1][j-arr1[i]];
            }
        }
    }
      for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=s; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

      return dp[n][s];

}







int main()
{
   int n=5;
   int a[]={1,3,5,7,9};
   int s=12;
int b =sumTable(n,a,s);

if(b==0)
{
    cout<<"No"<<endl;
}
else if(b==1)
{
    cout<<"Yes"<<endl;
}
}
