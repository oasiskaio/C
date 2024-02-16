// Na linguagem C os registros são chamados de Struc, que é uma coleção de
// variaveis relacionadas, usando um nome comum.

/* Declaração da Struc em C

struct nome_da_estrutura { 
	tipo_campo1  nome_campo1;
	tipo_campo2  nome_campo2; 
	... 
} variáveis_que_armazenam_a_estrutura;
*/

// Exemplo 1
struct mystruct {
   char a;
   int b;
   float c;
};

// Exemplo 2
struct endereco { 
	char rua[50];
	char numero[5];
	char CEP[8];
	char bairro[30];
};

// struct endereco x = {"Av. das Américas", "4200", "22640-102 ", "Barra da Tijuca"};
// endereco.rua = "Av. das Américas";


// Exemplo 3
struct livro {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro1, livro2, livro3;

// Exemplo 4
struct {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro;