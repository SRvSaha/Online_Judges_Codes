/*
*   @author      : SRvSaha
*   Filename     : chef_and_three_dogs.cpp
*   Timestamp    : 14:24 17-October-2016 (Monday)
*   Description  : If you consider the individual relative components of velocity then,
                There are two components.
                1. V
                2. V*cos60 (Equilateral triangle)
                So V + Vcos60 gives resultant relative velocity as 3v/2.
                Also time = distance/velocity = s/(3v/2) = 2s/3v.
*   Link         : https://www.codechef.com/OCT16/problems/CHDOGS
*
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    int T;
    double s,v;
    double t; // time
    CIN(T);
    while(T--){
        // CIN(s) // distance
        // CIN(v) // speed
        std::cin>>s;
        std::cin>>v;
        t = (2*s)/(3*v); // Formula obtained using Relative Velocity Concept
        printf("%lf\n",t);
        // std::cout<<t<<"\n";
    }
    return 0;
}
