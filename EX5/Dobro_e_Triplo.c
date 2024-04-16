#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	
	float n1,n2;
		
	printf("Digite o número que deseja dobrar: ");
		scanf("%f", &n1);
		
        printf("Digite o número que deseja triplicar: ");
		scanf("%f", &n2);
		
	printf("O dobro do seu número é: %.1f\n", n1 * 2);
	printf("O triplo do seu número é: %.1f\n", n2 * 3);

	return(0);
}
