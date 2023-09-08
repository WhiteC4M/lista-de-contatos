#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char nome[50];
	char numero_de_celular[21];
	char email[50];
}contatos;


int main(void)
{
	contatos contato[100];
	int opcao, numero_do_contato = 0, finalizar = 1;
	
	do
	{	
		system("cls");
		printf("Digite o numero da opcao desejada\n");
		printf("0 - Finalizar\t1 - Adicionar\t2 - Ver contatos\t3 - Editar\t4- Remover\n");
		printf("Resposta: ");
		scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 0:
				{
					system("cls");
					finalizar = 0;
					printf("Tarefa finalizada com sucesso\n\n");
					system("pause");
					return 0;
				}
			break;
			
			case 1:
				{
					system("cls");
					printf("Digite o nome do contato: ");
					scanf("%c");
					fgets(contato[numero_do_contato].nome,50,stdin);
					
					system("cls");
					printf("Padrao: +XX DDD 9 XXXX-XXXX\n");
					printf("Digite o numero de celular do contato: ");
					fgets(contato[numero_do_contato].numero_de_celular,21,stdin);
					
					system("cls");
					printf("Digite o email do contato: ");
					fgets(contato[numero_do_contato].email,50,stdin);
					printf("Contato adicionado\n\n");
					
					numero_do_contato++;
					system("Pause");
				}
			break;
			
			case 2:
				{
					int i = 0;
					system("cls");
					printf("Lista de contatos\n------------------------------------\n");
					
					for(i = 0; i < numero_do_contato; i++)
					{
						printf("Nome: %s", contato[i].nome);
						printf("Numero: %s", contato[i].numero_de_celular);
						printf("Email: %s", contato[i].email);
						printf("\n\n");
					}
				}
				system("pause");
			break;
			
			case 3:
				{
					char nome[50];
					int i;
					
					system("cls");
					printf("Digite o nome do contato que deseja editar: ");
					scanf("%c");	
					fgets(nome,50,stdin);
					
					for(i = 0; i < numero_do_contato;i++)
					{
						if((strcmp(contato[i].nome,nome)) == 0)
						{
							printf("ENCONTRADO! \n\n");
							printf("Digite o novo nome: ");
							fgets(contato[i].nome,50,stdin);
							
							printf("Digite o novo numero: ");
							fgets(contato[i].numero_de_celular,50,stdin);
							
							printf("Digite o novo email: ");
							fgets(contato[i].email,50,stdin);
						}
					}
					
					printf("\n");
					system("pause");
				}
			break;
			
			case 4:
				{
					char nome[50];
					int i, sub;
					
					system("cls");
					printf("Digite o nome do contato que deseja deletar: ");
					scanf("%c");
					fgets(nome,50,stdin);
					
					for(i = 0; i < numero_do_contato; i++)
					{
						if((strcmp(contato[i].nome,nome)) == 0)
						{
							for(sub = i; sub < numero_do_contato; sub++)
							{
								contato[sub] = contato[sub+1];
							}
							numero_do_contato--;
							break;
						}
					}
				}
				printf("\n");
				system("cls");
				printf("usuario deletado com sucesso\n");
				system("pause");
			break;
			
			default:
				finalizar = 0;
			break;
		}
		
		system("cls");

	}while(finalizar != 0);
	return 0;
}
