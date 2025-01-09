#include <iostream>
using namespace std;


void  palindrome(string a)
{
    int x=a.length();
    int dp[x+1][x+1];

    int max=0;
    int start=0;


    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            if(i==j)
            {
                dp[i][j]=1;
            }
            else
            {
                dp[i][j]=0;
            }
        }
    }

    for(int i=x-2; i>=0; i--)
    {
        for(int j=i+1; j<x; j++)
        {
            if(a[i]==a[j])
            {
                if(j-i==1 || dp[i+1][j-1]==1)
                {
                    dp[i][j]=1;

                    if(j-i+1>max)
                    {
                        max=j-i+1;
                        start=i;
                    }
                }
            }

        }
    }

    for(int i=0; i<x; i++)
    {
        for(int j=0; j<x; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<max<<endl;

     for(int i=0; i< max; i++)
   {
       cout<<a[start+i];

   }

}











int main()
{
    string s="AAAABBAA";
    palindrome(s);

}
