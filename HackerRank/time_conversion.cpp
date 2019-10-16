/*
* @author: srvsaha
* Link: https://www.hackerrank.com/challenges/time-conversion
*/

#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main( ) 
{
	int hh,mm,ss;
	char a,b;
	char str[ 3 ];
	scanf( "%d%c%d%c%d",&hh,&a,&mm,&b,&ss );
	scanf( "%c",&str[0] );
	if(str[0]=='A')
		{
			hh=hh;
			mm=mm;
			ss=ss;
			if(hh ==12)
			{
				hh = 00;
				mm=mm;
				ss=ss;				
			}
		}	
	else
		{ 
            if(hh<12)
            {
            hh=hh + 12;
            mm=mm;
            ss=ss;
            }
            else
            {
            hh= hh;
            mm=mm;
            ss=ss;
            }
		}
	cout<<setfill( '0' );    	
	cout<<setw(2)<<hh<<":"<<setw(2)<<mm<<":"<<setw(2)<<ss;	
return 0;
}
