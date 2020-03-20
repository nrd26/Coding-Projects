#include<iostream>
using namespace std;

int board(int a[3][3],int m,int n)
{
    cout<<"------------------- "<<endl;
    cout<<"| "<<a[0][0]<<"   |  "<<a[0][1]<<"  |  "<< a[0][2]<<"  |"<<endl;

    cout<<"|_____|_____|_____|"<<endl;
    cout<<"|     |     |     |"<<endl;

    cout<<"| "<<a[1][0]<<"   |  "<<a[1][1]<<"  |   "<<a[1][2]<<" |"<<endl;

    cout<<"|_____|_____|_____|"<<endl;
    cout<<"|     |     |     |"<<endl;

    cout<<"| "<<a[2][0]<<"   |  "<<a[2][1]<<"  |   "<<a[2][2]<<" |"<<endl;

   cout<<"------------------- "<<endl;
}

int win(int a[3][3],int m,int n,int k,int i)
{
        if(a[0][0]==k&&a[0][1]==k&&a[0][2]==k)
        return 1;
else        if(a[1][0]==k&&a[1][1]==k&&a[1][2]==k)
        return 1;
else        if(a[2][0]==k&&a[2][1]==k&&a[2][2]==k)
        return 1;
else        if(a[0][0]==k&&a[1][0]==k&&a[2][0]==k)
        return 1;
else        if(a[0][1]==k&&a[1][1]==k&&a[2][1]==k)
        return 1;
else        if(a[0][2]==k&&a[1][2]==k&&a[2][2]==k)
        return 1;
else        if(a[0][0]==k&&a[1][1]==k&&a[2][2]==k)
        return 1;
else        if(a[0][2]==k&&a[1][1]==k&&a[2][0]==k)
        return 1;
        else if(i==8)
 {
cout<<"Draw!!"<<endl;
board(a,m,n);
}
        return 0;

}

int main()
{
    int m=3,n=3,no=1,i=0,p,k,a[3][3]={5,5,5,5,5,5,5,5,5},r,c,j,q;
    while (i<9)
    {
        board(a,m,n);
        no=no%2;
        if(no==1)
            p=1;
            else
                p=2;
            cout<<"Player is "<<p<<".Please enter row and column no"<<endl;
            cin>>r>>c;
            k=(p-1);
            a[r-1][c-1]=k;
    q=win(a,m,n,k,i);
    if(q==1)
    {
    cout<<"Winner is Player "<<p<<endl;
    board(a,m,n);
    exit(1);
    }
    i++;
    no++;
    }

}
