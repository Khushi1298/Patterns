#include<stdio.h>
#include<iostream>
using namespace std ;
int main()
{
  int i , j ,count=0;
  for(i=0;i<=5;i++)
  {
     for(j=0;j<=i;j++)
     {
       cout<<count <<"\t";
       count++ ;
     }
     cout<<endl ;
  }
  return 0 ;
}
