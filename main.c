// ==========================================================
//  	CENTRO UNIVERSITARIO INTEGRADO                                             
// ==========================================================
//  ---------------------------------------------------------
// - Sistema para gerenciar uma loja de suplementos.                           -
//  ---------------------------------------------------------
//  - Autores: Vinicius Espindola, Renan Pau Branco                             -
//  - Data: 02/09/2020                                      -
//  ---------------------------------------------------------

/***************************************************
 * Bibliotecas                                     *
 * ************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"
#include "vendas.h"
#include <locale.h>
#include <windows.h>
//INCLUSAO DE PESSOA
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	SetConsoleTitle("Sistema - Loja de Suplementos");
	login();
	return 0;
}
