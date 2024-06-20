#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // Biblioteca de aloca��o de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int inserir() //Fun��o responsavel por cadastrar os usu�rios no sistema
{
	setlocale (LC_ALL, "portuguese");
	
	//inicio cria��o de vari�veis/strings		
	char arquivo[40];
	char CPF[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final cria��o de vari�veis/strings
	
	printf("\tDigite o CPF a ser cadastrado: "); //Solicitando informa��o do usu�rio
	scanf("%s", CPF); //%s refere-se a string
	
	strcpy(arquivo, CPF); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,"CPF:"); // Nomear a variavel para que vique mais agrad�vel para o usu�rio
	fprintf(file,CPF); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // "a" de atualizar informa��o
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infoma��o 
	fclose(file); // fechar o arquivo
	
	printf("\tDigite o nome a ser cadastrado: "); //Solicitando infoma��o do usu�rio
	scanf("%s",nome); //Guardando a variavel nome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Nome:"); //Nomear a variavel para que vique mais agrad�vel para o usu�rio
	fprintf(file,nome); //Efetivamento armazendo dado nome
	fclose(file); //fechando o arquivo
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infoma��o 
	fclose(file); //fechando o arquivo
	
	printf("\tDigite o sobrenome a ser cadastrado: "); //Solicitando infoma��o do usu�rio
	scanf("%s",sobrenome); //Guardando a variavel sobrenome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Sobrenome:"); //Nomear a variavel para que vique mais agrad�vel para o usu�rio
	fprintf(file,sobrenome); //Efetivamento armazendo dado sobrenome
	fclose(file); //fechando o arquivo
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infoma��o 
	fclose(file); //fechando o arquivo
	
	printf("\tDigite o cargo a ser cadastrado: "); //Solicitando infoma��o do usu�rio
	scanf("%s",cargo); //Guardando a variavel sobrenome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Cargo:"); //Nomear a variavel para que vique mais agrad�vel para o cargo
	fprintf(file,cargo); //Efetivamento armazendo dado Cargo
	fclose(file); //fechando o arquivo
	
	system("pause"); //pausa no programa para que o usu�rio possa ler as infoma��es
		}
		
int consultar() //variavel de consulta
	{
	setlocale (LC_ALL, "portuguese"); //ativando acentu��o e caracteres da l�ngua portugu�sa
			
	//inicio da cria��o de vari�veis/strings
	char CPF[40]; 
	char consultar[200];
	//final da cria��o de cari�veis/strings
			
	printf("\tDigite o CPF a ser consultado "); //solicitando informa��o do usu�rio de qual arquivo sera confultado
	scanf("%s",CPF); //armazenando a varivel CPF
			
	FILE *file; //ativando o arquivo
	file = fopen(CPF,"r"); //lendo o arquivo
			
	if(file == NULL) //fun��o if para caso o arquivo n�o seja encontrado
	{
	printf("N�o foi possivel localiza-lo\n"); //mensagem que notifica para o usu�rio que o arquivo n�o foi encontrado
	system("pause"); // pausa no sistema para  que o usu�rio possa ler a mensagem
	}
		
	while(fgets(consultar, 200, file) != NULL) 
		{
		printf("\tEssas s�o as infotma��es do usu�rio\n\t"); //mensagem que apresenta as informa��es encontradas
		printf("%s", consultar); //mostra as informa��es para o usu�rio
		printf("\n\n"); //pula  linha para que fique mais agradavel a visualiza��o
				
		system("pause");  //pausa no sistema para  que o usu�rio possa ler a mensagem
		}
		}
		
int excluir() //variavel de exclu��o de usu�rio
		{
		char CPF[40]; 
		
		printf("Digite o CPF do usu�rio a ser deletado: ");  //solicitando informa��o do usu�rio de qual arquivo sera confultado
		scanf("%s",CPF); //armazenando a vari�vel
		remove(CPF);
		printf("Usu�rio deletado foi deletado =O"); //mensagem amigavel para que notifique o usu�rio que arquivo foi deletado
		system("pause"); //pausa no sistema para  que o usu�rio possa ler a mensagem
			
		FILE *file;
		file = fopen(CPF,"r"); 
		
		if(file ==NULL)
		
		{
			 printf("O usu�rio n�o se encontra no sistema"); //mensagem que indiuca que o arquivo n�o se encontra mais no sistema
			 system("pause"); //pausa no sistema para  que o usu�rio possa ler a mensagem
		}
		
}

int main() //fin��o principal do sistema, que exibe o menu principal

		{
		int opcao=0; //Definindo as vari�veis
		int laco=1;
		
		for(laco=1;laco=1;)
		
		{
		system("cls");
	
		setlocale (LC_ALL, "portuguese"); //Definindo linguagem
	
		printf ("\t\tBem vindo ao registro de usu�rios =) \n");        //Inicio do menu
		printf ("\t---------------Como posso judar?---------------\n");
		printf ("\t1 Inserir uru�rio\n\n");
		printf ("\t2 consultar usu�rio\n\n");
		printf ("\t3 excluir usu�rio\n\n");
		printf ("\t4 Sair do sistema\n");
		printf ("\t Op��o:");                                                   //Fim do menu
	
		scanf("%d", &opcao);  //Armazenando a escola do usuario
		
		system("cls"); //responsavel por limpar a tela
		
		switch(opcao) //inicio da sele��o do menu
		{
			
			// casos que chaman a fun��o responsavel por determinada a��o dentro do programa
			case 1:
				inserir();
				break;
				
			case 2:
				consultar();
				break;
				
			case 3:
				excluir();
				break;
				
			case 4:
				printf("\tObrigado, at� mais!\n");
				return 0;
				break;
				
			default: // caso responsavel por op��o n�o apresentada ao usu�rio
				printf("\top��o invalidada. =(\n");
				printf("\t    por favor.\n");
				printf("escolha entre as op��oes apresentadas.\n");
				system("pause");
				break;
					
		}	
		}
		}
		
