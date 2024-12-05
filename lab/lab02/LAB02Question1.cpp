#include <iostream>
#include<algorithm>
using namespace std;

class object
{
public:
    int p;
    int w;
    float ratio;

    object()
    {

    }


    object(int pr,int wt)
    {
        p=pr;
        w=wt;
        ratio=static_cast<float>(p)/w;

    }

};
bool compare(object a,object b)
{
    return a.ratio>b.ratio;
}

int maxP(int S,object a[],int n)
{
    int sum=0;
    int m=S;
    for(int i=0; i<n; i++)
    {
        if(a[i].w<=m)
        {
            m=m-a[i].w;
            sum=sum+a[i].p;
        }
        else
        {
            sum=sum+(m*a[i].ratio);
            break;
        }
    }
    return sum;
}





int main()
{
    int n;
    cout<<"Enter how many object to create: "<<endl;
    cin>>n;
    object *a=new object[n];

    for(int i=0; i<n; i++)
    {
        int p,w;
        cout<<"Enter profit & weight :"<<endl;
        cin>>p>>w;

        a[i]=object(p,w);
    }
    int S;
    cout<<"Enter the capacity:"<<endl;
    cin>>S;
    sort(a,a+n,compare);
    for(int i=0; i<n; i++)
    {
        cout<<"Profit is:"<<a[i].p<<" "<<"Weight is : "<<a[i].w<< endl;;
    }
    cout<<maxP(S,a,n);
}
