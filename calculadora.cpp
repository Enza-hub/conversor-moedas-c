#include <locale.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string>
#include<iostream>
#include<math.h>

char sim_nao;

void Real_para_todos()
{
	float BRL, USD=0.19, CNY=1.22, BTC=0.0000044;
	printf("Informe o valor em Reais (BRL):");
	scanf("%f", &BRL);
	
	USD=USD*BRL;
	CNY=CNY*BRL;
	BTC=BTC*BRL;
	
	printf("\n%.2f = O valor em Reais (BRL).", BRL);
	printf("\n%.2f = O valor em Dolar (USD).", USD);
	printf("\n%.2f = O valor em Renminbi (CNY).", CNY);
	printf("\n%.2f = O valor em Bitcoin (BTC).", BTC);
	
 }

void Dolar_para_todos()
{
	float BRL= 5.26, USD, CNY=6.44, BTC=0.000024;
	printf("Informe o valor em Dolares (USD):");
	scanf("%f", &USD);
	
	BRL=BRL*USD;
	CNY=CNY*USD;
	BTC=BTC*USD;
	
	printf("\n%.2f = O valor em Reais (BRL).", BRL);
	printf("\n%.2f = O valor em Dolar (USD).", USD);
	printf("\n%.2f = O valor em Renminbi (CNY).", CNY);
	printf("\n%.2f = O valor em Bitcoin (BTC).", BTC);
	
 }

void Renminbi_para_todos()
{
	float BRL= 0.82, USD=0.16, CNY, BTC=0.0000035;
	printf("Informe o valor em Renminbi (CNY):");
	scanf("%f", &CNY);
	
	BRL=BRL*CNY;
	USD=USD*CNY;
	BTC=BTC*CNY;
	
	printf("\n%.2f = O valor em Reais (BRL).", BRL);
	printf("\n%.2f = O valor em Dolar (USD).", USD);
	printf("\n%.2f = O valor em Renminbi (CNY).", CNY);
	printf("\n%.2f = O valor em Bitcoin (BTC).", BTC);
	
 }
 
 void Bitcoin_para_todos()
{
	float BRL= 232055.74, USD= 44082.70, CNY=283857.32, BTC;
	printf("Informe o valor em Bitcoin (BTC):");
	scanf("%f", &BTC);
	
	BRL=BRL*BTC;
	USD= USD*BTC;
	CNY=CNY*BTC;
	
	printf("\n%.2f = O valor em Reais (BRL).", BRL);
	printf("\n%.2f = O valor em Dolar (USD).", USD);
	printf("\n%.2f = O valor em Renminbi (CNY).", CNY);
	printf("\n%.2f = O valor em Bitcoin (BTC).", BTC);
	
 }
void Menu () 
{
	setlocale(LC_ALL,"portuguese");
	int opcao = 0;
	printf("Conversor de Moedas, escolha a moeda de origem para realizar a conversão: \n\n"); 
	printf(" 1 - Real (BRL)\n");
	printf(" 2 - Dolar (USD)\n");
	printf(" 3 - Renminbi (CNY)\n");
	printf(" 4 - Bitcoin (BTC)\n");
	scanf("%d", &opcao); 
	
		if (opcao==1)
		{
			Real_para_todos(); 
		}
		
		if (opcao==2)
		{
			Dolar_para_todos(); 
		}	
		
		if (opcao==3)
		{
			Renminbi_para_todos(); 
		}
				
		if (opcao==4)
		{
			Bitcoin_para_todos(); 		
		
		} else if (opcao !=1 &&opcao!=2 &&opcao!=3 &&opcao!=4) 
				{
				printf("Escolha inválida. Tente outra opção do menu."); 
				Menu();
				}
		
 }
int main()
{
	Menu();
	
	printf("\n\nVocê deseja realizar outra conversão?\n");
	printf("\n (s) - Sim\n (n) - Não\n\n");
	scanf(" %s", &sim_nao);
	
		switch (sim_nao)
		{
			
			case 's':
			printf("\n Tecle <Enter> para reiniciar o conversor.\n"); 
			system("pause"); 
			system("cls"); 
			main(); // 
			break;
			
			case 'n': 
			system("cls"); 
			exit (0);
			break;
			
			default:
				printf("\nOpção inválida. Escolha Sim (s) ou Não (n). O conversor será encerrado! \n\n ");
		}
	return 0;
		

}

