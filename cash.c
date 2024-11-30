#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    int coins = 0;
    float troco;

    do
     {
      troco = get_float("Troco devido: ");

    } while(troco <= 0);

   int centavos =  round(troco * 100);
   int quantidade_troco = 0;

   while(quantidade_troco < centavos)
   {

    int dif =  centavos - quantidade_troco;
      if (25 <= dif)
      {

       quantidade_troco = quantidade_troco + 25;
       coins ++;
      }
      else if (10 <= dif)
      {
       quantidade_troco = quantidade_troco + 10;
       coins ++;
      }
      else if (5 <= dif)
      {
       quantidade_troco = quantidade_troco + 5;
       coins ++;
      }
      else
      {
       quantidade_troco = quantidade_troco + 1;
       coins ++;
      }

   }

   printf("%i \n",coins);

   return coins;


}
