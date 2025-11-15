#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include "listaC.h"

struct no
{
	int idItem;
	char nome[30];
	char categoria[15];
	int quantidade;
	float preco;
};
struct lista
{
	No *inicio;
};
