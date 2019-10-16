#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"Enter the amount of rows&columns u want for ur square matrix"<<endl;
    cin>>x;

    int a[x][x];
{
 for(int i =0;i<x;i++)
 {
     if(i%2!=0)
     {
         a[i][i]=0;
     }
     else if(i%2==0)
     {
         a[i][i]=1;
     }
 }
}
    for(int j=0;j<x;j++){
    a[0][j]=1;
    a[x-1][j]=1;
    }
    for(int i=0;i<x;i++)
    {
    a[i][0]=1;
    a[i][x-1]=1;
    }
    for(int i=0;i<x;i++)
    {
        for(int j =0;j<x;j++)
        {
            if(a[i][j]!=1)
            {
                a[i][j]=0;
            }
        }
    }
 for(int i=1 ;i<x;i++)
 {
     for(int j=i;j<x-i;j++)
     {


        if (a[i][i]==0)
        {
            a[j][x-i-1]=0;
            a[x-i-1][j]=0;
            a[j][i]=0;
            a[i][j]=0;

        }
        else if(a[i][i]==1)
        {
            a[j][x-i-1]=1;
            a[x-i-1][j]=1;
            a[j][i]=1;
            a[i][j]=1;
        }
    }
 }

 for(int i =0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n\n";
    }

}
