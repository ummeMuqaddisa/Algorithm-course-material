#include <iostream>
using namespace std;

void comSubSequence(string a,string b)
{

    int dp[a.length()+1][b.length()+1];

    for(int i=0;i<=a.length();i++)
    {
        for(int j=0;j<=b.length();j++)
        {
            if(i==0 || j==0)
            {
                dp[i][j]=0;

            }
            else if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
     for(int i=0; i<=a.length(); i++)
    {
        for(int j=0; j<=b.length(); j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    int x=dp[a.length()][b.length()];
  cout<<x;
  cout<<endl;

char arr[x];
int i=a.length();
int j=b.length();
int y=0;
while(i>0)
{
    if(dp[i][j]!=dp[i-1][j])
    {
       arr[y]= a[i-1];
       y++;
        i--;
    }
    else
    {
        i--;
    }
}
for(int i=x;i>=0;i--)
{
    cout<<arr[i];
}





}










int main()
{
    string m;
    cin>>m;
    string n;
    cin>>n;

    comSubSequence(m,n);
}
