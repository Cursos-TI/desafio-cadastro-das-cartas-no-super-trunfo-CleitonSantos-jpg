#include <stdio.h>
#include <string.h>

int main () {
char y = 'A';
int z;
char x[4];
char z_str[4];

x[0] = y;
x[1] = '\0';

printf("Digite o número do código da carta (1-99): ");
scanf("%d", &z);

sprintf(z_str, "%02d", z); //coverte nmr inteiro para string

strcat(x, z_str); // concatena a string do número ao código da carta
printf("Codigo da carta: %s\n", x); // imprime concatenado

return 0;


}