#include<iostream>
using namespace std;
int main()
{
    int a[3][3],i,j;
    cout<<"Enter elements of Array - \n";
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    for (i=0;i<=2;i++)
    {
        for (j=0;j<=2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}