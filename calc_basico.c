#include <stdio.h>

int main (){
	float num1, num2;
	int opcao;
	
	printf("Digite o primeiro valor: ");
	scanf("%f",&num1);
	printf("Digite o segundo valor: ");
	scanf("%f",&num2);
	
	printf("Qual opera��o deseja fazer:\n");
	printf("Digite 1: soma\n");
	printf("Digite 2: subtra��o\n");
	printf("Digite 3: divis�o\n");
	printf("Digite 4: multiplica��o\n");
	scanf("%d",&opcao);
		
	switch(opcao){
		case 1:
		printf(" %.1f + %.1f = %.1f ", num1, num2,(num1 + num2));
		break;
		case 2:
		printf(" %.1f - %.1f = %.1f ", num1, num2,(num1 - num2));
		break;
		case 3:
		printf("%.1f : %.1f = %.1f", num1, num2,(num1 / num2));
		break;
		case 4:
		printf("%.1f * %.1f = %.1f", num1, num2,(num1 * num2));
		break;
		default:
		printf("Op��o invalida");
	}
	
return 0;
}
