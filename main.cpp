#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <GL/glut.h>
#include <string.h>

#include "./include/global.h"
#include "./include/matriz.h"
#include "./include/carregaPontos.h"
#include "./include/menu.h"
#include "./include/teclado.h"
#include "./include/operacoes.h"
#include "./include/mostra.h"

// ---------------------------------------------
// OBSERVACAO 0: cores
//       definir mais cores
// ---------------------------------------------

// ----------------------------------------------------------------------------
// OBSERVACAO 1:
//     Definir as matrizes BASE
// ----------------------------------------------------------------------------

// -----------------------------------------------------
// OBSERVACAO 2: modificar
//  Ver a melhor forma de criar triangulos 1ro e 2do
// -----------------------------------------------------

//-------------------------------------------------------
// OBSERVACAO 3:
// Considerar Rotacao no eixo Y  e  Z
// -----------------------------------------------------

//-------------------------------------------------------
// OBSERVACAO 4:
// Considerar Tranlacao no eixo X  y  Z
// -----------------------------------------------------

// -----------------------------------------------------
// OBSERVACAO 5:
// colocar opcao para CatmullRom
// -----------------------------------------------------

// ----------------------------------------------------
// OBSERVACAO 6:
// Considerar opcao de Rotacao em Y e Z
// ------------------------------------------------------

// ----------------------------------------------------
// OBSERVACAO 7:
// Considerar opcao de Translacao em Y e Z
// ------------------------------------------------------

static void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);		 // cor de fundo
	glEnable(GL_DEPTH_TEST);				 // habilita teste de profundidade
	glEnable(GL_MAP2_VERTEX_3);				 // habilita mapa de função de vértices
	glEnable(GL_AUTO_NORMAL);				 // habilita normal automática
	glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0); // define grade de mapa
}

int main(int argc, char **argv)
{
	glutInit(&argc, argv); // inicializa o glut

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH); // define modo de visualização
	glutInitWindowSize(700, 700);							  // define tamanho da janela
	glutCreateWindow("Superficies ");						  // define título da janela

	init(); // inicializa a cena

	glutReshapeFunc(reshape);  // define função de redimensionamento
	glutSpecialFunc(keyboard); // define função de teclado
	glutDisplayFunc(display);  // define função de desenho
	createGLUTMenus();		   // cria menus

	glutMainLoop(); // inicia o loop de eventos
	return 0;
}