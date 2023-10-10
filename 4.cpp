#include<iostream>
using namespace std ;
int main()
{
 int i , j ,count =1;
 for(i=1;i<=10;i++)
 {
   for(j=1;j<=10;j++)
   {
     cout << count++<< "\t" ;
   }
   cout<<endl ;
 }
 return 0 ;
}
