#define Linha -1
#define Solido -2
#define Pontos -3

#define X 0
#define Y 1
#define Z 2
#define W 3

#define Escalar 4 // Redimensionar

#define RotarX 5
#define RotarY 6
#define RotarZ 7
#define Rotação 71

#define TransladaX 8
#define TransladaY 9
#define TransladaZ 10
#define Translada 101

#define PontosControle 19
#define BEZIER 20
#define BSPLINE 21
#define CATMULLROM 22

#define sair 0
int windW, windH;
int gIndVert = -1;
bool preenchido = 0;  // se o poligono esta preenchido
typedef float f4d[4]; // 4d

typedef struct st_matriz
{
    int n, m;
    f4d **ponto;
} matriz;

int comando;

int tipoVisualisacao = GL_LINE_STRIP;

float local_scale = 0.22f; // Escala local

float VARIA = 0.1f; // Variação de escala

f4d matTransf[4]; // matriz transposta 4 x 4

f4d MatBase[4]; // matriz de base 4x4

f4d pView = {10.0, 10.0, -20.0, 0.0};

// ---------------------------------------------
// OBSERVACAO 0: cores
//       definir mais cores
// ---------------------------------------------

f4d vcolor[1] = {
    {0.0, 1.0, 0.0, 0.0},
};

matriz *pControle = NULL; // matriz de pontos de controle

matriz *pcPatch = NULL; // matriz de pontos para um patch

matriz *ptsPatch = NULL; // matriz de PONTOS na superficie PATCH