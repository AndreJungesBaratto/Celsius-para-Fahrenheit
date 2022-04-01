#include <stdio.h>
int main(){
float C;
printf("Informe  temperatura em graus Celsius:\n");
scanf("%f", &C);
float F;
F=(C*9/5)+32;
printf("A temperatura em Fahrenheit e: %f\n", F);
return 0;
}
