#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

int main()
{

  float total, moeda1 = 0.25, moeda2 = 0.5, moeda3 = 1.0;
  float final , total2 , total3 , total4 , M50 ,M1;

  printf("moeda 0.25: ");
  scanf("%f", &final);
  printf("moeda 0.50: ");
  scanf("%f", &total2);
  printf("moeda 1.0: ");
  scanf("%f", &total3);

  total += moeda1 * final;
  M50 += moeda2 * total2 ;
  M1 += moeda3 *total3 ;
  total4 = total + M50 + M1 ;
  float ValorTotal = total4*365;
  
  
  printf("valor final de moeda de 25 centavos: %.2f \n", total);
  printf("valor final de moeda de 50 centavos : %.2f \n" , M50);
  printf("valor final de moeda de 1 real: %.2f \n", M1);
  printf("valor total e : %.2f \n", total4);
  printf("valor total no ano : %.2f \n", ValorTotal);
  
}
