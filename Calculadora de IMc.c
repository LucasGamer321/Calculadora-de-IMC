// atividade da faculdade, Calculo de IMC!

#include <stdio.h>

int main(){
	
	printf("Calculo do seu IMC!!\n");
	printf("O programa a seguir deve calcular seu IMC e te repassar a sua situacao corporal!\n");
	printf("---------------------------\n");
	float peso, altura, imc;
	int contador = 0;
	float somaIMC = 0.0;
	char resposta;
	char nome[50];
	// declarei as variaveis necessarias
	while(1){ // fiz um laco infinito para perguntar varias vezes ao usuario
	printf("qual e o seu nome?\n");
	scanf(" %s", nome);
	
	printf("qual e seu peso?\n");
	scanf("%f", &peso);
	
	printf("qual e a sua altura?\n");
	scanf("%f", &altura);
	
	imc = peso/(altura*altura); // calculo do IMC
	contador++; // contador para contar quantas vezes o imc foi calculador
	somaIMC+= imc; // soma dos imcs, para mais tarde calcular a media
	
	printf("O seu IMC e de: %.1f\n", imc);
	
	
	if(imc < 18.5){ // estruturas de condicao para mostrar na tela a situacao do imc da pessoa de acordo com a tabela oficial
		printf("A situacao do seu IMC e: Magreza!!\n");
		}
	else if(imc > 18 && imc <= 24.9){
		printf("A situacao do seu IMC e: Normal\n");
	}
	else if (imc > 24.9 && imc < 29.9){
		printf("A situacao do seu IMC e: Sobrepeso!!\n");
		printf("Tome cuidado com sua saude!!\n");
	}
	else if(imc > 29.9 && imc < 34.9){
		printf("A situacao do seu IMC e: Obesidade grau 1\n");
		printf("Niveis muito alto de IMC podem prejudicar sua saude, procure um medico!\n");
	}
	else if(imc > 34.9 && imc < 39.9){
		printf("A situacao do seu IMC e: Obesidade grau 2 \n");
		printf("Niveis muito alto de IMC podem prejudicar sua saude, procure um medico!\n");
	}
	else if(imc > 40.0){
		printf("A situacao do seu IMC e: Obesidade grau 3\n");
		printf("O nivel do seu IMC esta alarmante, procure orientacao medica o quanto antes!!\n");
	}
	printf("Quer continuar?[s/n]"); // perguntar ao usuario se ele quer continuar
	scanf(" %c",&resposta);
	printf("---------------------------\n");
	
	if(resposta == 'n'){ // se ele nao quiser o programa para
		break;
	}
	}
	if (contador > 0) { //estrutura condicional para calcular a media e printar na tela o total de imcs e a nmedia deles
        float media = somaIMC / contador;
        printf("Total de pessoas cadastradas: %d\n", contador);
        printf("Total de IMCs calculados: %d\n", contador);
        printf("Media dos IMCs calculados: %.2f\n", media);
    } else {
        printf("Nenhum IMC foi calculado.\n"); // caso nao tenha nada nao printa nada
    }
	 
	
	
}