/*
 *  @author     : SRvSaha
 *  Filename    : cheap_travel.c
 *  Timestamp   : 10:25 AM 07-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/466/A
 *
 */
 #include <stdio.h>
 int main()
 {
    int total_rides;
    int special_rides;
    int special_price;
    int price_per_ride;
    int total = 0;
    scanf("%d%d%d%d",&total_rides,&special_rides,&price_per_ride,&special_price);
    while(total_rides > 0){
        if(total_rides >= special_rides){
            if(special_price <= price_per_ride * special_rides){
                total += special_price;
            }
            else{
                total += price_per_ride * special_rides;
            }
            total_rides -= special_rides;
        }
        else{
            if(special_price <= price_per_ride *(total_rides % special_rides))
                total += special_price;
            else
                total += price_per_ride * (total_rides % special_rides);
            total_rides -= total_rides % special_rides;
        }
    }
    printf("%d\n",total);
    return 0;
 }
