#include <iostream>
using namespace std;

int minCoinChange(int c[],int TA,int a)
{
    int RA;
    RA=TA;
    int count=0;
    for(int i=0;i<a;i++)
    {
        while(RA>=c[i])
        {

            //cout<<(c[i]);
            RA=RA-c[i];
            count++;
        }
    }
    return count;

}



int main()
{
int coins[]={9,6,5,1};
int sum=19;
cout<<"Minimum number of coin: "<<endl;
cout<<minCoinChange(coins,sum,4);

}
