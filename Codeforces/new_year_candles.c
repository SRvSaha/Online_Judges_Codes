/*
 *  @author     : SRvSaha
 *  Filename    : new_year_candles.c
 *  Timestamp   : 08:34 PM 04-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/379/A
 *
 */
 //TODO : Fix the function
 #include <stdio.h>
 int main()
 {
    int new_candle;// Ready for burning
    int used_candle; // To Re-make a candle
    int div;
    scanf("%d %d",&new_candle,&used_candle);
    int total = new_candle;
    while(new_candle >= used_candle){
        div = new_candle/used_candle;
        total += div;
        new_candle = div + (new_candle % used_candle); // This is the main point. We have to add the remaining candles as well, that is the mod of the new_candles and the used_candle.
    }
    printf("%d\n",total);
    return 0;
 }
