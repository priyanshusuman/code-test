#include<iostream>
using namespace std;
int main(){
   int i,j,n;
   cin>>n;
   for(i=2;i<n;i++)
   {
   	int temp=0;
       for(j=2;j<i;j++){
           if(i%j==0)
           {
           	temp=1;
           	break;
           }
           
       }
       if(temp!=1)
       {
       	cout<<i;
       }
       
   }
   return 0;
}