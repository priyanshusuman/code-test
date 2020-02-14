#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[200];
    cin>>a;
    int x=0,y=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='L')
        {
            x--;
        }
        else if(a[i]=='R')
        {
            x++;
        }
        else if(a[i]=='D')
        {
            y--;
        }
        else if(a[i]=='U')
        {
            y++;
        }
    }
    cout<<x<<" "<<y;
}