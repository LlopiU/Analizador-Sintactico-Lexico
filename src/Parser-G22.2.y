%{
	#include <stdio.h>
	#include <stdlib.h>
  	extern int yylex(void);
  	extern char *yytext;
 	extern FILE *yyin;
	extern int yylineno;
	int linea;	
%}

%union 
{
}

%start inicio

%token DOCTYPE
%token AHTML CHTML
%token AHEAD CHEAD
%token METACHARSET
%token META NAME CONTENT
%token ATITLE CTITLE
%token ABODY CBODY 

%token ASECTION CSECTION 
%token ADIV CDIV
%token APARRAFO CPARRAFO
%token AHEADER CHEADER
%token BR HR
%token ASTRONG CSTRONG
%token AEM CEM
%token AMARK CMARK
%token AOL COL AUL CUL ALI CLI
%token ATABLE CTABLE
%token ATHEAD CTHEAD
%token ATBODY CTBODY
%token AFOOT CFOOT
%token ATR CTR
%token ATD CTD
%token ATH CTH
%token AA CA
%token IMG
%token CBRACKET

%token CLASS ID
%token TYPE VALUE
%token HREF TARGET
%token ALT WIDTH HEIGHT SRC 
%token BORDER ACAPTION CCAPTION

%token CCOM
%token URL
%token TEXTO
%token NUM
%token ESP



%%

inicio: DOCTYPE html5

html5: AHTML enc cuerpo CHTML 


enc: AHEAD METACHARSET meta ATITLE text CTITLE CHEAD
	|AHEAD meta METACHARSET ATITLE text CTITLE CHEAD     
	|AHEAD meta METACHARSET ATITLE CTITLE CHEAD  
    |AHEAD METACHARSET ATITLE text CTITLE CHEAD     
	|AHEAD METACHARSET ATITLE CTITLE CHEAD 
	|AHEAD METACHARSET meta CHEAD
	|AHEAD meta METACHARSET CHEAD  
    |AHEAD METACHARSET CHEAD     
;

meta: META NAME text CCOM CONTENT text CCOM CBRACKET meta
		|META NAME text CCOM CBRACKET meta
		|META CONTENT text CCOM CBRACKET meta	
		|META NAME text CCOM CONTENT text CCOM CBRACKET 
		|META NAME text CCOM CBRACKET 
		|META CONTENT text CCOM CBRACKET

text: TEXTO text | TEXTO
;

tyn: TEXTO tyn | NUM tyn | TEXTO | NUM 
;

cuerpo: ABODY etiqueta CBODY
;

atrglobal: CLASS ID 
		   |CLASS 
		   |ID 
		   |ID CLASS 
;

etiqueta: sec | div | par | h | salto | strong | mark | em | ol | ul |  tabla | eta | imagen | TEXTO | NUM | URL | CCOM | sec etiqueta | div etiqueta | par etiqueta | h etiqueta | salto etiqueta | strong etiqueta | mark etiqueta | em etiqueta | ol etiqueta | ul etiqueta | tabla etiqueta | eta etiqueta | imagen etiqueta | TEXTO etiqueta | NUM etiqueta | URL etiqueta | CCOM etiqueta
;

sec: ASECTION atrglobal CBRACKET etiqueta CSECTION | ASECTION CBRACKET etiqueta CSECTION
;

div: ADIV atrglobal CBRACKET etiqueta CDIV | ADIV CBRACKET etiqueta CDIV
;

par:  APARRAFO atrglobal CBRACKET etiqueta CPARRAFO | APARRAFO CBRACKET etiqueta CPARRAFO
;

h: AHEADER atrglobal CBRACKET tyn CHEADER | AHEADER CBRACKET tyn CHEADER
;

salto: BR atrglobal CBRACKET | BR CBRACKET | HR atrglobal CBRACKET | HR CBRACKET 
;

strong: ASTRONG atrglobal CBRACKET etiqueta CSTRONG | ASTRONG CBRACKET etiqueta CSTRONG
;

mark : AMARK atrglobal CBRACKET etiqueta CMARK |  AMARK CBRACKET etiqueta CMARK 
;

em : AEM atrglobal CBRACKET etiqueta CEM | AEM CBRACKET etiqueta CEM
;

ol: AOL TYPE CBRACKET li COL | AOL CBRACKET li COL 
;

ul: AUL TYPE CBRACKET li CUL | AUL CBRACKET li CUL 
;

li : ALI VALUE CBRACKET etiqueta CLI li
| ALI VALUE CBRACKET etiqueta li CLI li
| ALI VALUE CBRACKET li CLI li
| ALI VALUE CBRACKET etiqueta CLI
| ALI VALUE CBRACKET li CLI 
| ALI CBRACKET etiqueta CLI li  
| ALI CBRACKET etiqueta li CLI li  
| ALI CBRACKET li CLI li 
| ALI CBRACKET etiqueta CLI 
| ALI CBRACKET li CLI
;

cuerpotabla: th tb tf 
| th tf tb 
| tb th tf 
| tb tf th 
| tf tb th 
| tf th tb
| th tb 
| th tf 
| tb th 
| tb tf 
| tf tb 
| tf th 
| th 
| tb 
| tf 
| th tb tf filas 
| th tf tb filas 
| tb th tf filas
| tb tf th filas 
| tf tb th filas 
| tf th tb filas
| th tb filas 
| th tf filas 
| tb th filas 
| tb tf filas 
| tf tb filas 
| tf th filas
| th filas 
| tb filas
| tf filas  
;

th: ATHEAD CBRACKET filas CTHEAD
;

tb: ATBODY CBRACKET filas CTBODY
;

tf: AFOOT CBRACKET filas CFOOT
;

filas: ATR CBRACKET td CTR | ATR CBRACKET td CTR filas | ATR CBRACKET celdas CTR | ATR CBRACKET celdas CTR filas |ATR CBRACKET CTR filas |ATR CBRACKET CTR
;

td: ATD CBRACKET etiqueta CTD td | ATD CBRACKET etiqueta CTD celdas|ATD CBRACKET etiqueta CTD |ATD CBRACKET CTD td | ATD CBRACKET CTD celdas | ATD CBRACKET CTD 
;

celdas:ATH CBRACKET etiqueta CTH td | ATH CBRACKET etiqueta CTH celdas | ATH CBRACKET etiqueta CTH |ATH CBRACKET CTH celdas | ATH CBRACKET CTH  
;

caption: ACAPTION text CCAPTION
;

tabla: ATABLE atrglobal BORDER CBRACKET caption filas cuerpotabla CTABLE 
	  |ATABLE atrglobal BORDER CBRACKET filas cuerpotabla CTABLE
	  |ATABLE atrglobal BORDER CBRACKET caption cuerpotabla CTABLE
	  |ATABLE atrglobal BORDER CBRACKET caption filas CTABLE
	  |ATABLE atrglobal BORDER CBRACKET filas CTABLE 
	  |ATABLE atrglobal BORDER CBRACKET  cuerpotabla  CTABLE
	  |ATABLE BORDER atrglobal CBRACKET caption filas cuerpotabla CTABLE
	  |ATABLE BORDER atrglobal CBRACKET filas cuerpotabla CTABLE
	  |ATABLE BORDER atrglobal CBRACKET caption cuerpotabla CTABLE
	  |ATABLE BORDER atrglobal CBRACKET caption filas CTABLE
	  |ATABLE BORDER atrglobal CBRACKET filas CTABLE 
	  |ATABLE BORDER atrglobal CBRACKET  cuerpotabla  CTABLE
	  |ATABLE atrglobal CBRACKET caption filas cuerpotabla CTABLE
	  |ATABLE atrglobal CBRACKET filas cuerpotabla CTABLE
	  |ATABLE atrglobal CBRACKET caption cuerpotabla CTABLE
	  |ATABLE atrglobal CBRACKET caption filas CTABLE
	  |ATABLE atrglobal CBRACKET cuerpotabla CTABLE
	  |ATABLE atrglobal CBRACKET filas CTABLE
	  |ATABLE BORDER CBRACKET caption filas cuerpotabla CTABLE
	  |ATABLE BORDER CBRACKET filas cuerpotabla CTABLE
	  |ATABLE BORDER CBRACKET caption cuerpotabla CTABLE
	  |ATABLE BORDER CBRACKET caption filas CTABLE
	  |ATABLE BORDER CBRACKET filas CTABLE 
	  |ATABLE BORDER CBRACKET cuerpotabla  CTABLE
	  |ATABLE CBRACKET caption filas cuerpotabla CTABLE
	  |ATABLE CBRACKET caption cuerpotabla CTABLE
	  |ATABLE CBRACKET caption filas CTABLE
	  |ATABLE CBRACKET cuerpotabla CTABLE
	  |ATABLE CBRACKET filas cuerpotabla CTABLE
	  |ATABLE CBRACKET filas CTABLE
;

eta: AA atrglobal HREF TARGET CBRACKET etiqueta CA 
	|AA HREF atrglobal TARGET CBRACKET etiqueta CA 
	|AA HREF TARGET atrglobal CBRACKET etiqueta CA 
	|AA atrglobal HREF CBRACKET etiqueta CA 
	|AA HREF atrglobal CBRACKET etiqueta CA 
	|AA HREF TARGET CBRACKET etiqueta CA 
	|AA TARGET HREF CBRACKET etiqueta CA 
	|AA HREF CBRACKET etiqueta CA 
;

atrwh: WIDTH NUM CCOM HEIGHT NUM CCOM
		|WIDTH NUM CCOM
		|HEIGHT NUM CCOM
		|HEIGHT NUM CCOM WIDTH NUM CCOM 
;

imagen: IMG SRC atrglobal ALT atrwh CBRACKET 
		|IMG atrglobal SRC ALT atrwh CBRACKET
		|IMG atrglobal ALT SRC atrwh CBRACKET
		|IMG atrglobal ALT atrwh SRC  CBRACKET
		|IMG SRC atrwh atrglobal ALT CBRACKET 
		|IMG atrwh SRC atrglobal ALT CBRACKET
		|IMG atrwh atrglobal SRC ALT CBRACKET
		|IMG atrwh atrglobal ALT SRC CBRACKET
		|IMG SRC atrwh ALT atrglobal CBRACKET		
		|IMG atrwh SRC ALT atrglobal CBRACKET		
		|IMG atrwh ALT SRC atrglobal CBRACKET		
		|IMG atrwh ALT atrglobal SRC CBRACKET 
		|IMG SRC ALT atrwh CBRACKET 
		|IMG ALT SRC atrwh CBRACKET 
		|IMG ALT atrwh SRC CBRACKET
		|IMG SRC atrwh ALT CBRACKET		
		|IMG atrwh SRC ALT CBRACKET		
		|IMG atrwh ALT SRC CBRACKET
		|IMG SRC ALT CBRACKET
		|IMG ALT SRC CBRACKET
		|IMG SRC atrwh CBRACKET
		|IMG atrwh SRC CBRACKET
		|IMG SRC atrglobal CBRACKET
		|IMG atrglobal SRC CBRACKET
		|IMG SRC CBRACKET
;



%%

yyerror(char * msg)
{
	printf("%s\n",msg);
}
int main(int argc, char *argv[])
{
	printf("ANALISIS SINTACTICO\n");
	if (argc==2)
	{
		yyin=fopen(argv[1],"rt");
		if(yyin==NULL)
			printf("\nNo se puede leer el archivo");
			if( yyparse() == 0)
	{
		printf("\nCodigo CORRECTO\n");
		printf("ingrese CTRL+ C para finalizar\n");
	} else
		{
			printf("Error en la linea: %d\n",linea); 
			fclose(yyin); 
			return 0; 
		}
		fclose(yyin);
		getchar();
	} else 
		{	
			printf("Bienvenido al MODO INTERACTIVO\n");
			printf("Ingrese su codigo html\n");
			printf("Si ha finalizado su codigo y no se detecto error,\n");
			printf("ingrese ENTER y CTRL+ C para finalizar\n");
			printf("En caso de detectarse error,\n");
			printf("ingrese CTRL+ C para finalizar\n");
			yyin = stdin;
			yyparse ();
		}
	if( yyparse() == 0)
	{
		printf("\nCodigo CORRECTO\n");
	} else
		{
			printf("Error en la linea: %d\n",linea); 
		}
}


