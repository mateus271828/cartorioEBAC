#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocação de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int inserir() //Função responsavel por cadastrar os usuários no sistema
{
	setlocale (LC_ALL, "portuguese");
	
	//inicio criação de variáveis/strings		
	char arquivo[40];
	char CPF[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final criação de variáveis/strings
	
	printf("\tDigite o CPF a ser cadastrado: "); //Solicitando informação do usuário
	scanf("%s", CPF); //%s refere-se a string
	
	strcpy(arquivo, CPF); //responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	
	file = fopen(arquivo, "w"); // cria o arquivo
	fprintf(file,"CPF:"); // Nomear a variavel para que vique mais agradável para o usuário
	fprintf(file,CPF); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); // "a" de atualizar informação
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infomação 
	fclose(file); // fechar o arquivo
	
	printf("\tDigite o nome a ser cadastrado: "); //Solicitando infomação do usuário
	scanf("%s",nome); //Guardando a variavel nome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Nome:"); //Nomear a variavel para que vique mais agradável para o usuário
	fprintf(file,nome); //Efetivamento armazendo dado nome
	fclose(file); //fechando o arquivo
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infomação 
	fclose(file); //fechando o arquivo
	
	printf("\tDigite o sobrenome a ser cadastrado: "); //Solicitando infomação do usuário
	scanf("%s",sobrenome); //Guardando a variavel sobrenome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Sobrenome:"); //Nomear a variavel para que vique mais agradável para o usuário
	fprintf(file,sobrenome); //Efetivamento armazendo dado sobrenome
	fclose(file); //fechando o arquivo
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"\n"); //Pular linha para organinar visualmente a infomação 
	fclose(file); //fechando o arquivo
	
	printf("\tDigite o cargo a ser cadastrado: "); //Solicitando infomação do usuário
	scanf("%s",cargo); //Guardando a variavel sobrenome
	
	file = fopen(arquivo, "a"); //Abrir e atualizando o arquivo para colocar novo dado
	fprintf(file,"Cargo:"); //Nomear a variavel para que vique mais agradável para o cargo
	fprintf(file,cargo); //Efetivamento armazendo dado Cargo
	fclose(file); //fechando o arquivo
	
	system("pause"); //pausa no programa para que o usuário possa ler as infomações
		}
		
int consultar() //variavel de consulta
	{
	setlocale (LC_ALL, "portuguese"); //ativando acentução e caracteres da língua portuguêsa
			
	//inicio da criação de variáveis/strings
	char CPF[40]; 
	char consultar[200];
	//final da criação de cariáveis/strings
			
	printf("\tDigite o CPF a ser consultado "); //solicitando informação do usuário de qual arquivo sera confultado
	scanf("%s",CPF); //armazenando a varivel CPF
			
	FILE *file; //ativando o arquivo
	file = fopen(CPF,"r"); //lendo o arquivo
			
	if(file == NULL) //função if para caso o arquivo não seja encontrado
	{
	printf("Não foi possivel localiza-lo\n"); //mensagem que notifica para o usuário que o arquivo não foi encontrado
	system("pause"); // pausa no sistema para  que o usuário possa ler a mensagem
	}
		
	while(fgets(consultar, 200, file) != NULL) 
		{
		printf("\tEssas são as infotmações do usuário\n\t"); //mensagem que apresenta as informações encontradas
		printf("%s", consultar); //mostra as informações para o usuário
		printf("\n\n"); //pula  linha para que fique mais agradavel a visualização
				
		system("pause");  //pausa no sistema para  que o usuário possa ler a mensagem
		}
		}
		
int excluir() //variavel de exclução de usuário
		{
		char CPF[40]; 
		
		printf("Digite o CPF do usuário a ser deletado: ");  //solicitando informação do usuário de qual arquivo sera confultado
		scanf("%s",CPF); //armazenando a variável
		remove(CPF);
		printf("Usuário deletado foi deletado =O"); //mensagem amigavel para que notifique o usuário que arquivo foi deletado
		system("pause"); //pausa no sistema para  que o usuário possa ler a mensagem
			
		FILE *file;
		file = fopen(CPF,"r"); 
		
		if(file ==NULL)
		
		{
			 printf("O usuário não se encontra no sistema"); //mensagem que indiuca que o arquivo não se encontra mais no sistema
			 system("pause"); //pausa no sistema para  que o usuário possa ler a mensagem
		}
		
}

int main() //finção principal do sistema, que exibe o menu principal

		{
		int opcao=0; //Definindo as variáveis
		int laco=1;
		
		for(laco=1;laco=1;)
		
		{
		system("cls");
	
		setlocale (LC_ALL, "portuguese"); //Definindo linguagem
	
		printf ("\t\tBem vindo ao registro de usuários =) \n");        //Inicio do menu
		printf ("\t---------------Como posso judar?---------------\n");
		printf ("\t1 Inserir uruário\n\n");
		printf ("\t2 consultar usuário\n\n");
		printf ("\t3 excluir usuário\n\n");
		printf ("\t4 Sair do sistema\n");
		printf ("\t Opção:");                                                   //Fim do menu
	
		scanf("%d", &opcao);  //Armazenando a escola do usuario
		
		system("cls"); //responsavel por limpar a tela
		
		switch(opcao) //inicio da seleção do menu
		{
			
			// casos que chaman a função responsavel por determinada ação dentro do programa
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
				printf("\tObrigado, até mais!\n");
				return 0;
				break;
				
			default: // caso responsavel por opção não apresentada ao usuário
				printf("\topção invalidada. =(\n");
				printf("\t    por favor.\n");
				printf("escolha entre as opçãoes apresentadas.\n");
				system("pause");
				break;
					
		}	
		}
		}
		
