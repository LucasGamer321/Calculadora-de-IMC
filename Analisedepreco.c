//Atividade Pratica da Faculdade.
#include <stdio.h>

int main(){
	
	printf("Resumo da variacao de precos:\n\n ");
	
	 char p[3][50] = {"arroz", "feijao", "acucar"};
	 float pa[3] = {20.00, 8.00, 4.00};
	 float pat[3] = {22.50, 8.00, 4.40};
	 float var;
     int i;
	 
	 for(i=0; i<=2; i++){
	 	
	 	var = (pat[i] - pa[i])/pa[i]*100;
	 	printf("Produtos: %s\n\n", p[i]);
	 	printf("Preco Anterior %.2f\n", pa[i]);
	 	printf("Preco Atual %.2f\n", pat[i]);
	 	printf("Variacao: %.1f%%\n", var);
	 	
	 	if(var > 0){
	 		printf("Situacao: Aumento!\n\n");
	 	}
	 	if(var == 0){
	 		printf("Situacao: Estavel!\n\n");
	 	}
	 	if(var < 0){
	 		printf("Situacao: Queda!\n\n");
        }
     }

}