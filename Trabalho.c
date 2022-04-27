#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Constantes */
#define T_NOME_PRATO 20
#define T_NOME_CLIENTE 10

/* Tipos */
typedef struct 
{
	char nome_prato[T_NOME_PRATO];
	float preco;
}TPrato;

typedef struct
{
	int identificacao;
	char nome_cliente[T_NOME_CLIENTE];
	Prato prato_pedido;
}TCliente;


int main()
{
	TCliente cliente;
  /* Pega o pedido e os dados do cliente */
	printf("\nDigite o nome do cliente:\t");
	fgets(&cliente.nome_cliente,T_NOME_CLIENTE,stdin);
	printf("\nDigite o nome do prato:\t");
	fgets(&cliente.prato_pedido.nome_prato,T_NOME_PRATO,stdin);
	printf("\nDigite o preço do prato:\t");
	scanf("%f",&cliente.prato_pedido.preco);
	getchar();
  /* Gera a identificacao do cliente */
	srand(time(NULL));
	cliente.identificacao=rand()%1000;
  /* Mostra o pedido */
	printf("\nIdentifição do pedido:\t%i",cliente.identificacao);
	printf("\nNome do cliente:\t%s",cliente.nome_cliente);
	printf("\nNome do prato pedido:\t%s",cliente.prato_pedido.nome_prato);
	printf("\nPeço do prato pedido:\t%.2f R$",cliente.prato_pedido.preco);
	getchar();
	return(0);
}
