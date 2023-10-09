#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

int menuInicial(){
	setlocale(LC_ALL, "PORTUGUESE");
	int menu = 0;
 printf("_______________________________________________________________\n");
 printf("|                                                              |\n");    
 printf("|      **********      ***       ***    ***   *************    |\n");
 printf("|     ************     ***       ***    ***   *************    |\n");
 printf("|    *****    *****    ***       ***    ***            ****    |\n");
 printf("|    ***        ***    ***       ***    ***           ****     |\n");
 printf("|   ****        ****   ***       ***    ***          ****      |\n");
 printf("|   ***          ***   ***       ***    ***         ****       |\n"); 
 printf("|   ***          ***   ***       ***    ***        ****        |\n");
 printf("|   ***          ***   ***       ***    ***       ****         |\n"); 
 printf("|   ***          ***   ***       ***    ***      ****          |\n");
 printf("|   ***          ***   ***       ***    ***     ****           |\n");
 printf("|   ****        ***    ***       ***    ***    ****            |\n"); 
 printf("|    ***       ****    ***       ***    ***   ****             |\n");
 printf("|    *****   *****     ****     ****    ***  ****              |\n"); 
 printf("|       ******* **      ***********     ***  **************    |\n");
 printf("|         ***    **      *********      ***  **************    |\n");
 printf("|                 **                                           |\n");
 printf("|                                                              |\n");
 printf("|                                                              |\n");
 printf("|                           DIGITE:                            |\n");
 printf("|                                                              |\n");
 printf("|                        1 - JOGAR                             |\n");
 printf("|                        2 - CR�DITOS                          |\n");
 printf(" _____________________________________________________________	\n"); 
 printf("OP��O: ");
 scanf("%d", &menu);
 return menu;
}


void menuRegrasPt1(){
	
	setlocale(LC_ALL, "PORTUGUESE");
    system("cls");
	printf("    ____________________________________________________________\n");
	printf("                                REGRAS                          \n");   
	printf("                                                            \n");
	printf("	BEM VINDO AO QUIZ TECH, AQUI VOC� ENCONTRAR� PERGUNTAS  \n");
	printf("	RELACIONADAS AO MUNDO DA T�CNOLOGIA E QUE DESAFIARAM    \n");
	printf("	SEUS CONHECIMENTOS 										\n");
	printf("	BOA SORTE E QUE SE DIVIRTA :) !!!!!						\n");
	printf("    ----------------------------------------------------------- \n");
	printf("															\n");
	printf("	O QUIZ � DIVIDIDO EM TR�S DIFICULDADE: F�CIL, M�DIO	    \n");
	printf("	DIF�CIL. CADA DIFICULDADE TEM 5 PERGUNTAS.			    \n");
	printf("															\n");
	printf("	TEMOS A OP��O DE TR�S MODOS DE JOGO:					\n");
	printf("	 														\n");
	printf("	-PADR�O: AS PERGUNTAS COME�AM NO MODO F�CIL E V�O     \n");
	printf("	 ESCALANDO O N�VEL DE DIFICULDADE.						\n");
	printf("															\n");
	printf("	-DIFICULDADE: AQUI VOC� PODE ESCOLHER EM QUAL			\n");
	printf("	 DIFICULDADE IR� JOGAR PARA O RESTO DO JOGO			    \n");
	printf("	                             							\n");
	printf("	-ALEAT�RIO: MODO RECOMENDADO PELOS DESENVOLVEDORES,	    \n");
	printf("	 NESSE MODO VIRAM PERGUNTAS ALEAT�RIAS, INCLUSIVES SUAS	\n");
	printf("	 DIFICULDADES.											\n");
	printf("															\n");
	printf("    -----------------------------------------------------------\n");	
}


int menuRegrasPt2(){
	setlocale(LC_ALL, "PORTUGUESE");
	int menu;
	
	printf("                             PONTOS                            \n");
	printf("                                                           \n");
	printf("         OS PONTOS DO QUIZ FUNCIONAM DE FORMA COERENTE COM A    \n");
	printf("	 DIFICULDADE DA QUEST�O, QUEST�ES DO N�VEL F�CIL VALEM	\n");
 	printf("	 MENOS PONTOS QUE UMA QUEST�O DO N�VEL DIF�CIL			\n");
 	printf("															\n");
 	printf("	                 TABELA DE PONTOS  				        \n");		
 	printf("															\n");
 	printf("                       --------------------					    \n");
 	printf("	                 QUEST�O    PONTOS 						\n");
	printf("	               --------------------					    \n");
	printf("                          F�CIL       10	  					    \n");
	printf("		          M�DIA       15	  						\n");
	printf("		          DIF�CIL     20	  						\n");
	printf("	               --------------------			                   					\n");
	printf("															\n");
	printf(" -----------------------------------------------------------\n");            
	printf("                      FORMA DE PONTUA��O                    \n"); 
	printf("                                                            \n"); 
	printf("   A PONTUA��O M�XIMA � 225, POR�M DURANTE O JOGO A FORMA   \n"); 
	printf("   DE PONTUA��O VARIA UM POUCO, SE CASO VOC� ERRE UMA QUEST�O\n"); 
	printf("   DE N�VEL F�CIL NADA DE MAIS IRA ACONTECER, AGORA CASO VOC�\n");
	printf("   ERRE UMA QUEST�O DO N�VEL M�DIA PERDER� 5 PONTOS, E CASO     \n");
	printf("   VOC� ERRE UMA DIF�CIL, PERDER� 10 PONTOS.                 \n"); 
	printf("                                                             \n");
	printf("                                                             \n");  
	printf("   BOM JOGO !!!!!!                                           \n");
	printf("                                                             \n");
	printf("   DIGITE 1 PARA COME�AR O JOGO:                             \n");
	scanf("%d", &menu);
	
	return menu;
}

int menuJogar(){
	system("cls");
    setlocale(LC_ALL, "PORTUGUESE");
    int op;
	printf("_____________________________________________________\n");
	printf("|                                                    |\n");  
	printf("|                                                    |\n"); 
	printf("|                                                    |\n"); 
	printf("|       QUAL SER� SEU MODO DE JOGO:                  |\n"); 
	printf("|                                                    |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n"); 
	printf("|       1 - PADR�O                                   |\n"); 
	printf("|       2 - F�CIL                                    |\n");
	printf("|       3 - M�DIO                                    |\n");
	printf("|       4 - DIF�CIL                                  |\n");
	printf("|       5 - ALEAT�RIO                                |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|	                                             |\n");
	printf("|____________________________________________________|\n");
	printf("OP��O: ");
	scanf("%d", &op);
	return op;
}

int pergunta1(int pontuacao){
	//facil
	char opcao[10];
	int quantAjuda;
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                        PONTUA��O: %d               | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um smartphone e para que ele � usado?                                                          |\n");
	printf("a) Um tipo de geladeira                                                                                | \n");
	printf("b) Um dispositivo m�vel usado para fazer chamadas telef�nicas e enviar mensagens                       | \n");
	printf("c) Uma ferramenta de jardinagem                                                                        | \n");
	printf("d) Uma linguagem de programa��o                                                                        | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	return pontuacao;
}

int pergunta2(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � a diferen�a entre um navegador web e um mecanismo de busca ?                                    | \n");
	printf("a) Ambos s�o a mesma coisa                                                                             | \n");
	printf("b) Um navegador web � usado para procurar informa��es na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web � usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}

	return pontuacao;
}


int pergunta3(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que a sigla 'URL' significa ?                                                                        | \n");
	printf("a) Uniform Resource Locator                                                                            | \n");
	printf("b) Universal Resource Language                                                                         | \n");
	printf("c) Underlying                                                                                          | \n");
	printf("d) Uniform Resource Link                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta4(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que significa a sigla 'HTML' na programa��o web ?                                                    | \n");
	printf("a) HyperText Markup Language                                                                           | \n");
	printf("b) High-Tech Modern Language                                                                           | \n");
	printf("c) Hyperlink Text Management Language                                                                  | \n");
	printf("d) Hyperlink and Text Markup Language                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta5(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes termos est� relacionado � armazenagem de dados em servidores remotos pela internet ?       | \n");
	printf("a) Wi-fi                                                                                               | \n");
	printf("b) Cloud Computing                                                                                     | \n");
	printf("c) Bluetooth                                                                                           | \n");
	printf("d) Firewall                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta6(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � o navegador de internet desenvolvido pela Google ?                                              | \n");
	printf("a) Firefox                                                                                             | \n");
	printf("b) Safari                                                                                              | \n");
	printf("c) Edge                                                                                                | \n");
	printf("d) Chrome                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta7(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � o sistema operacional m�vel desenvolvido pela Apple ?                                           | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) iOS                                                                                                 | \n");
	printf("c) Windows Mobile                                                                                      | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta8(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes dispositivos � usado para imprimir documentos e imagens ?                                  | \n");
	printf("a) Roteador                                                                                            | \n");
	printf("b) Scanner                                                                                             | \n");
	printf("c) Impressora                                                                                          | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta9(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um arquivo de extens�o '.PDF' comumente usado para ?                                           | \n");
	printf("a) �udio                                                                                               | \n");
	printf("b) V�deo                                                                                               | \n");
	printf("c) Texto e gr�ficos                                                                                    | \n");
	printf("d) Aplicativos m�veis                                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta10(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destas empresas � conhecida por produzir o sistema operacional Windows ?                          | \n");
	printf("a) Apple                                                                                               | \n");
	printf("b) Google                                                                                              | \n");
	printf("c) Amazon                                                                                              | \n");
	printf("d) Microsoft                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}  
int pergunta11(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes componentes de hardware � respons�vel pelo armazenamento de dados em um computador?        | \n");
	printf("a) CPU                                                                                                 | \n");
	printf("b) Disco r�gido (HD)                                                                                   | \n");
	printf("c) Mem�ria RAM                                                                                         | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}  

int pergunta12(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual termo descreve um programa de computador projetado para fazer uma tarefa espec�fica,              | \n");
	printf("como processamento de texto?                                                                           | \n");
	printf("a) Software                                                                                            | \n");
	printf("b) Firmware                                                                                            | \n");
	printf("c) Hardware                                                                                            | \n");
	printf("d) Shareware                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta13(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes dispositivos � usado para exibir informa��es visuais em um computador?                     | \n");
	printf("a) CPU                                                                                                 | \n");
	printf("b) Monitor                                                                                             | \n");
	printf("c) Roteador                                                                                            | \n");
	printf("d) Impressora                                                                                          | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta14(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual foi o sistema operacional desenvolvido por Linus Torvalds ?                                       | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) Windows                                                                                             | \n");
	printf("c) iOS                                                                                                 | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta15(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual tipo de dispositivo de entrada permite que voc� mova o cursor na tela de um computador ?          | \n");
	printf("a) Teclado                                                                                             | \n");
	printf("b) Mouse                                                                                             | \n");
	printf("c) Impressora                                                                                                 | \n");
	printf("d) Monitor                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 



int pergunta16(int pontuacao){
	//m�dio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � a fun��o da CPU (Unidade Central de Processamento) em um computador ?                           | \n");
	printf("a) Exibir imagens na tela                                                                              | \n");
	printf("b) Armazena dados permanentemente                                                                      | \n");
	printf("c) Processar dados e executar instru��es                                                               | \n");
	printf("d) Conectar dispositivos externos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta17(int pontuacao){
	//m�dio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um SSD(Solid State Drive) em compara��o com um HDD (Hard Disk Drive) ?                         | \n");
	printf("a) Um tipo de mouse                                                                                    | \n");
	printf("b) Um tipo de monitor                                                                                  | \n");
	printf("c) Uma unidade de armazenamento mais r�pida e sem partes m�veis                                        | \n");
	printf("d) Uma impressora a laser                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta18(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um 'software de c�digo aberto' ?                                                               | \n");
	printf("a) Um software que n�o requer c�digo-fonte                                                             | \n");
	printf("b) Um software que n�o pode ser modificado                                                             | \n");
	printf("c) Um software que s� roda em sistemas Windows                                                         | \n");
	printf("d) Um software cujo c�digo-fonte � p�blico e pode ser modificado por qualquer pessoa                   | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta19(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � o protocolo de rede amplamente usado para enviar e-mails ?                                      | \n");
	printf("a) TCP/IP                                                                                              | \n");
	printf("b) SMTP                                                                                                | \n");
	printf("c) HTTP                                                                                                | \n");
	printf("d) FTP                                                                                                 | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta20(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � 'realidade virtual' (VR) ?                                                                     | \n");
	printf("a) Uma linguagem de programa��o                                                                        | \n");
	printf("b) Uma tecnologia que cria ambientes virtuais imersivos                                                | \n");
	printf("c) Um tipo de monitor de alta resolu��o                                                                | \n");
	printf("d) Um dispositivo de armazenamento externo                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta21(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � a linguagem de programa��o amplamente usada para desenvolver aplicativos para Android ?         | \n");
	printf("a) Java                                                                                                | \n");
	printf("b) Swift                                                                                               | \n");
	printf("c) C++                                                                                                 | \n");
	printf("d) Python                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta22(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � 'cloud computing' ?                                                                            | \n");
	printf("a) Um sistema de armazenamento de dados offline                                                        | \n");
	printf("b) Uma tecnologia de comunica��o por sat�lite                                                          | \n");
	printf("c) Uma abordagem de computa��o que utiliza servidores remotos pela Internet para processar             | \n");
	printf("   e armazenar os dados                                                                                | \n");
	printf("d) Um tipo de impressora a laser                                                                       | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta23(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � o sistema operacional de c�digo aberto baseado em Unix amplamente usado em servidores web ?     | \n");
	printf("a) Linux                                                                                               | \n");
	printf("b) Windows                                                                                             | \n");
	printf("c) macOS                                                                                               | \n");
	printf("d) Android                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta24(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um 'driver de dispositivo' em um computador ?                                                  | \n");
	printf("a) Um software que ajuda a controlar e gerenciar um dispositivo de hardware espec�fico                 | \n");
	printf("b) Um tipo de dispositivo de entrada                                                                   | \n");
	printf("c) Uma fun��o de um sistema operacional                                                                | \n");
	printf("d) Um tipo de rede sem fio                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta25(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � a 'nuvem' em tecnologia da informa��o ?                                                        | \n");
	printf("a) Uma forma de armazenamento f�sico de dados                                                          | \n");
	printf("b) Um tipo de computador muito poderoso                                                                | \n");
	printf("c) Um servi�o de armazenamento online acess�vel pela internet                                          | \n");
	printf("d) Um programa de edi��o de fotos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta30(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIF�CIL                                                     PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � a 'Lei de Moore' no contexto da tecnologia de computadores ?                                   | \n");
	printf("a) Uma lei que restringe o uso de dispositivos de armazenamento externo                                | \n");
	printf("b) Uma lei que estabelece os padr�es de qualidade para monitores de computador                         | \n");
	printf("c) Uma observa��o que sugere que o n�mero de transistores em um chip de computador tende               | \n");
	printf("   a dobrar aproximadamente a cada dois anos                                                           | \n");
	printf("d) Uma lei que regula a velocidade da conex�o � Internet                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta31(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIF�CIL                                                     PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � a 'Lei de Moore' no contexto da tecnologia de computadores ?                                   | \n");
	printf("a) Uma lei que restringe o uso de dispositivos de armazenamento externo                                | \n");
	printf("b) Uma lei que estabelece os padr�es de qualidade para monitores de computador                         | \n");
	printf("c) Uma observa��o que sugere que o n�mero de transistores em um chip de computador tende               | \n");
	printf("   a dobrar aproximadamente a cada dois anos                                                           | \n");
	printf("d) Uma lei que regula a velocidade da conex�o � Internet                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Voc� acertou parab�nss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Voc� errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

void validaPontuacao(int pontuacao){
	setlocale(LC_ALL, "PORTUGUESE");
	if(pontuacao == 225){
		system("cls");
		printf("Meus parab�ns, voc� atingiu 225 pontos :) , a quantidade de m�xima de pontos \n");
		printf("isso significa que voc� zerou o quiz com maestria e mostrou que possui \n");
		printf("um conhecimento s�lido na �rea da t�cnologia !!!! \n");
	}else if(pontuacao == 125){
		system("cls");
		printf("Parab�ns por chegar at� aqui, n�o alcan��u a pontua��o m�xima :/ , por�m mostrou \n");
		printf("que possui um bom conhecimento na �rea, mais sorte da pr�xima vez !! \n");
	}else{
		system("cls");
		printf("N�o foi dessa vez, infelizmente passou longe da pontua��o m�xima :( , por�m \n");
		printf("continue firme no seus estudos e em sempre evoluir que concerteza conseguir� \n");
		printf("supera seus desafios, continue !!");
	}
}

void menuCreditos(){
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	int op;
	printf("------------------------------------------------------------------------------------------------------- \n");
	printf("Esse jogo foi desenvolvido por dois alunos da Unicesumar(Maring�/Paran�) \n");
	printf("do curso de ADS(An�lise e Desenvolvimento de Sistemas), esses s�o: \n");
	printf("\n");
	printf("- Vitor Hugo Vieria de Lima | Linkedin: www.linkedin.com/in/vitor-hugo-vieira-de-lima-a2286a244 \n");
	printf("- Daniel Francis Rinaldi Araujo | Linkedin: \n");
	printf("\n");
	printf("O projeto foi idealizado a partir de um trabalho da faculdade, o link do reposit�rio com os c�digos \n");
	printf("para melhor an�lise: https://github.com/vitorv1/projeto-quiz \n");
	printf("Obrigado por jogar :) \n");
	printf("Digite 1 para voltar para o menu inicial \n");
	printf("-------------------------------------------------------------------------------------------------------");
	scanf("OP��O: %d", &op);
	return op;
}

void pergunta(int jogo){
	switch(jogo){
		int pontuacao = 0;
		case 1:{
			pontuacao = 0;
			pontuacao = pergunta1(pontuacao);
			pontuacao = pergunta2(pontuacao);
			pontuacao = pergunta3(pontuacao);
			pontuacao = pergunta4(pontuacao);
			pontuacao = pergunta5(pontuacao);
			pontuacao = pergunta16(pontuacao);
			pontuacao = pergunta17(pontuacao);
			pontuacao = pergunta18(pontuacao);
			pontuacao = pergunta19(pontuacao);
			pontuacao = pergunta20(pontuacao);
			/*pontuacao = pergunta30(pontuacao);
			pontuacao = pergunta31(pontuacao);
			pontuacao = pergunta32(pontuacao);
			pontuacao = pergunta33(pontuacao);
			pontuacao = pergunta34(pontuacao);*/
			validaPontuacao(pontuacao);
			break;
		}
		case 2 :{
			pontuacao = 0;
			pontuacao = pergunta1(pontuacao);
			pontuacao = pergunta2(pontuacao);
			pontuacao = pergunta3(pontuacao);
			pontuacao = pergunta4(pontuacao);
			pontuacao = pergunta5(pontuacao);
			pontuacao = pergunta6(pontuacao);
			pontuacao = pergunta7(pontuacao);
			pontuacao = pergunta8(pontuacao);
			pontuacao = pergunta9(pontuacao);
			pontuacao = pergunta10(pontuacao);
			pontuacao = pergunta11(pontuacao);
			pontuacao = pergunta12(pontuacao);
			pontuacao = pergunta13(pontuacao);
			pontuacao = pergunta14(pontuacao);
			pontuacao = pergunta15(pontuacao);
			validaPontuacao(pontuacao);
			break;
		} 
		case 3 :{
			pontuacao = 0;
			pontuacao = pergunta16(pontuacao);
			pontuacao = pergunta17(pontuacao);
			pontuacao = pergunta18(pontuacao);
			pontuacao = pergunta19(pontuacao);
			pontuacao = pergunta20(pontuacao);
			pontuacao = pergunta21(pontuacao);
			pontuacao = pergunta22(pontuacao);
			pontuacao = pergunta23(pontuacao);
			pontuacao = pergunta24(pontuacao);
			pontuacao = pergunta25(pontuacao);
		/*	pontuacao = pergunta26(pontuacao);
			pontuacao = pergunta27(pontuacao);
			pontuacao = pergunta28(pontuacao);
			pontuacao = pergunta29(pontuacao);
			pontuacao = pergunta30(pontuacao);*/
			validaPontuacao(pontuacao);
			break;
		}
		/*case 4 :{
			pontuacao = 0;
			pontuacao = pergunta31(pontuacao);
			pontuacao = pergunta32(pontuacao);
			pontuacao = pergunta33(pontuacao);
			pontuacao = pergunta34(pontuacao);
			pontuacao = pergunta35(pontuacao);
			pontuacao = pergunta36(pontuacao);
			pontuacao = pergunta37(pontuacao);
			pontuacao = pergunta38(pontuacao);
			pontuacao = pergunta39(pontuacao);
			pontuacao = pergunta40(pontuacao);
			pontuacao = pergunta41(pontuacao);
			pontuacao = pergunta42(pontuacao);
			pontuacao = pergunta43(pontuacao);
			pontuacao = pergunta44(pontuacao);
			pontuacao = pergunta45(pontuacao);
			validaPontuacao(pontuacao);
			break;
		}*/
		case 5 :{
			pontuacao = 0;
			int i, num;
			for(i = 0; i < 15; i ++){
				srand(time(NULL));
				num = rand() % 51;
			
				switch(num){
					case 1: pontuacao = pergunta1(pontuacao); break;
					case 2: pontuacao = pergunta2(pontuacao); break;
					case 3: pontuacao = pergunta3(pontuacao); break;
					case 4: pontuacao = pergunta4(pontuacao); break;
					case 5: pontuacao = pergunta5(pontuacao); break;
					case 6: pontuacao = pergunta6(pontuacao); break;
					case 7: pontuacao = pergunta7(pontuacao); break;
					case 8: pontuacao = pergunta8(pontuacao); break;
					case 9: pontuacao = pergunta9(pontuacao); break;
					case 10: pontuacao = pergunta10(pontuacao); break;
					case 11: pontuacao = pergunta11(pontuacao); break;
					case 12: pontuacao = pergunta12(pontuacao); break;
					case 13: pontuacao = pergunta13(pontuacao); break;
					case 14: pontuacao = pergunta14(pontuacao); break;
					case 15: pontuacao = pergunta15(pontuacao); break;
					case 16: pontuacao = pergunta16(pontuacao); break;
					case 17: pontuacao = pergunta17(pontuacao); break;
					case 18: pontuacao = pergunta18(pontuacao); break;
					case 19: pontuacao = pergunta19(pontuacao); break;
					case 20: pontuacao = pergunta20(pontuacao); break;
					case 21: pontuacao = pergunta21(pontuacao); break;
					case 22: pontuacao = pergunta22(pontuacao); break;
					case 23: pontuacao = pergunta23(pontuacao); break;
					case 24: pontuacao = pergunta24(pontuacao); break;
					case 25: pontuacao = pergunta25(pontuacao); break;
					/*case 26: pontuacao = pergunta26(pontuacao); break;
					case 27: pontuacao = pergunta27(pontuacao); break;
					case 28: pontuacao = pergunta28(pontuacao); break;
					case 29: pontuacao = pergunta29(pontuacao); break;
					case 30: pontuacao = pergunta30(pontuacao); break;
					case 31: pontuacao = pergunta31(pontuacao); break;
					case 32: pontuacao = pergunta32(pontuacao); break;
					case 33: pontuacao = pergunta33(pontuacao); break;
					case 34: pontuacao = pergunta34(pontuacao); break;
					case 35: pontuacao = pergunta35(pontuacao); break;
					case 36: pontuacao = pergunta36(pontuacao); break;
					case 37: pontuacao = pergunta37(pontuacao); break;
					case 38: pontuacao = pergunta38(pontuacao); break;
					case 39: pontuacao = pergunta39(pontuacao); break;	
			    	case 40: pontuacao = pergunta40(pontuacao); break;
					case 41: pontuacao = pergunta41(pontuacao); break;
					case 42: pontuacao = pergunta42(pontuacao); break;
			  		case 43: pontuacao = pergunta43(pontuacao); break;
			  		case 44: pontuacao = pergunta44(pontuacao); break;
			  		case 45: pontuacao = pergunta45(pontuacao); break;*/
				}
		    }
		    validaPontuacao(pontuacao);
		}	
	}
}

void menuPrincipal(int op){
	switch(op){
   		case 1:{
  			menuRegrasPt1();
	       	menuRegrasPt2();
    		pergunta(menuJogar());
	   		break;
		}	
		case 2: menuCreditos(); 
    }
}

bool validaContinuar(){
	int op;
	printf("Para continuar a jogar, basta digitar 1 \n");
	printf("Para sair do jogo e ir para os cr�ditos digite 2 \n");
	scanf("%d", &op);
	if(op == 1)
		return true;
	else
		return false;
	
}

void main(){
	int op;
	while(op != 1){
		op = menuInicial();
		if(op == 2)
			op = menuCreditos();
	}
}

