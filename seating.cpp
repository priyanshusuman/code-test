#include<iostream>
using namespace std;
int main()
{
    int t,n,a;
    cin>>t;
    
   while(t!=0){
       cin>>n;
        a=n%12;
        switch(a)
        {
            case 0:
            cout<<(n-11)<<" ";
            cout<<"WS"<<endl;
            break;
             case 1:
            cout<<(n+11)<<" ";
            cout<<"WS"<<endl;
            break;
             case 2:
            cout<<(n+9)<<" ";
            cout<<"MS"<<endl;
            break;
             case 3:
            cout<<(n+7)<<" ";
            cout<<"AS"<<endl;
            break;
             case 4:
            cout<<(n+5)<<" ";
            cout<<"AS"<<endl;
            break;
             case 5:
            cout<<(n+3)<<" ";
            cout<<"MS"<<endl;
            break;
             case 6:
            cout<<(n+1)<<" ";
            cout<<"WS"<<endl;
            break; 
            case 7:
            cout<<(n-1)<<" ";
            cout<<"WS"<<endl;
            break;
             case 8:
            cout<<(n-3)<<" ";
            cout<<"MS"<<endl;
            break;
             case 9:
            cout<<(n-5)<<" ";
            cout<<"AS"<<endl;
            break;
             case 10:
            cout<<(n-7)<<" ";
            cout<<"AS"<<endl;
            break;
             case 11:
            cout<<(n-9)<<(" ");
            cout<<"MS"<<endl;
            break;
            
        }
        t--;
    }
}