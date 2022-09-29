#include<stdio.h>
 int main(){
 	int cont;
 	char cod;
 	float nota, media, total;
 	total = 0;
 	cod ='C';
 	
    	do{
 	for(cont =1; cont <= 4; cont++){
 	printf("Digite sua nota: ");
 	 scanf("%f",&nota);

 	 total = total + nota;
}
 	media = total / 4;
 
	 
 	if(media >= 7){
 	printf("%.2f Aprovado:\n:\n",media);
 	printf("Deseja calcular a nota de outro aluno? Clique as nota do proximo aluno. Se nao aperte F para finalizar:\n");
 	total = 0;
 	nota = 0; }
 	if (media < 7){
 	printf("%.2f Reprovado::\n\n",media);
 	
    printf("Deseja calcular a nota de outro aluno? Clique as nota do proximo aluno. Se nao aperte F para finalizar:\n");}
		total = 0;
 	   nota = 0 ;   
	  }	while(cod !='F');}
