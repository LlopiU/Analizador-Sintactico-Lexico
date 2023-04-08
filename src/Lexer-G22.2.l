%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
int linea=1;
%}
%option noyywrap
%option caseless
%option yylineno

html					(<html[\ ]lang=(\"([a-z]{2})\")[\ ]?>)
metanc 					(<meta)
name					(name=[\ ]?\")
content					(content=[\ ]?\")
atgc 					(class=[\ ]?\"[\ ]?[a-z\ A-Z0-9]*[\ ]?\")
atgid					(id=[\ ]?\"[\ ]?[a-z\ A-Z0-9]*[\ ]?\")
atype 					(type=[\ ]?\"[a-zA-Z0-9]*\")
atvalue 		 		(value=([\ ]?\"[0-9]*\"))
athref 	 				(href=([\ ]?\"(((http(s)?|ftp(s)?):\/\/)?(w{3}.)?)?(([0-9]*[a-zA-Z]*[0-9]*.)*[a-zA-Z]{2,3})?(\:[0-9]+)?((\/[a-zA-Z0-9]*)?(.[a-zA-Z]+)?)?(\#[a-zA-Z0-9]+)?[\ ]?\"))
atarget					(target=[\ ]?\"\_blank\"|\"\_parent\"|\"\_self\"|\"\_top\")
atalt					(alt=[\ ]?\"[\ ]?[a-z\ A-Z0-9]*[\ ]?\")
atw 					(width=[\ ]?\")
ath 					(height=[\ ]?\")
atb						(border=[\ ]?\"[0-9]+[\ ]?\")
atc						(<caption>)
cierreatc				(<\/caption>)
atsrc 					(src=([\ ]?\"(((http(s)?|ftp(s)?):\/\/)?(w{3}.)?)?(([0-9]*[a-zA-Z]*[0-9]*.)*[a-zA-Z]{2,3})?(\:[0-9]+)?((\/[a-zA-Z0-9]*)?(.[a-zA-Z]+)?)?(\#[a-zA-Z0-9]+)?[\ ]?\"))



metacharset				(<meta[\ ]charset=(\"(UTF-8)\")[\ ]?>)
header					(<h[1-6]{1})
cheader					(<\/h[1-6]{1}>)

cierrecom				[\"]
an						[a-zA-Z]+|\=|\"|[\?]|\¿|\!|\¡|\.|\,|\:|\;|[\*]|\/|\(|\)|\[|\]|\{|\}|\+|\_|\-|\^|\#|\%|\&|\-|[Á-ÿ\u00f1]
num 					[0-9]+(\.[0-9]+)?
url						((http(s)?|ftp(s)?):\/\/(w{3}.)?(([0-9]*[a-zA-Z]*[0-9]*.)*[a-zA-Z]{2,3})?(\:[0-9]+)?(\/[a-zA-Z0-9]*(.[a-zA-Z]+)?)*(\#[a-zA-Z0-9]+)?)
spc						[\ ]*
tab 					[\t]*
ESP						[\n]


%%
"<!doctype html>"				{if (yyin != stdin)
								{printf("%s",yytext);
								}return(DOCTYPE);}
"</html>"						{if (yyin != stdin)
								{printf("%s",yytext);
								}return(CHTML);}
"<head>"						{if (yyin != stdin)
								{printf("%s",yytext);
								}return(AHEAD);}
"</head>"						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CHEAD);}			
"<body>"						{if (yyin != stdin){
								printf("%s",yytext);
								}return(ABODY);}
"</body>"						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CBODY);}
"<title>"						{if (yyin != stdin){
								printf("%s",yytext);
								}return(ATITLE);}
"</title>"						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CTITLE);}
"<section"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(ASECTION);}
"</section>"					{if (yyin != stdin){
								printf("%s",yytext);
							}return(CSECTION);}
"<div"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ADIV);}
"</div>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CDIV);}
"<p"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(APARRAFO);}
"</p>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CPARRAFO);}
"<br"	 						{if (yyin != stdin){
								printf("%s",yytext);
							}return(BR);}
"<hr"				 			{if (yyin != stdin){
								printf("%s",yytext);
							}return(HR);}
"<strong" 					 	{if (yyin != stdin){
								printf("%s",yytext);
							}return(ASTRONG);}
"</strong>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CSTRONG);}
"<em"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(AEM);}
"</em>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CEM);}
"<mark" 						{if (yyin != stdin){
								printf("%s",yytext);
							}return(AMARK);}
"</mark>" 						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CMARK);}
"<ol"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(AOL);}
"</ol>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(COL);}
"<ul"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(AUL);}
"</ul>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CUL);}
"<li" 							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ALI);}
"</li>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CLI);}
"<table"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATABLE);}
"</table>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTABLE);}
"<thead" 						{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATHEAD);}
"</thead>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTHEAD);}
"<tbody"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATBODY);}
"</tbody>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTBODY);}
"<tfoot"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(AFOOT);}
"</tfoot>"						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CFOOT);}
"<tr"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATR);}
"</tr>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTR);}
"<td"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATD);}
"</td>" 						{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTD);}
"<th"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ATH);}
"</th>"		 					{if (yyin != stdin){
								printf("%s",yytext);
							}return(CTH);}
"<a"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(AA);}	
"</a>"							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CA);}
"<img" 							{if (yyin != stdin){
								printf("%s",yytext);
							}return(IMG);}
">" 							{if (yyin != stdin){
								printf("%s",yytext);
							}return(CBRACKET);}
{html}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(AHTML);}
{metacharset}					{if (yyin != stdin){
								printf("%s",yytext);
							}return(METACHARSET);}
{metanc}						{if (yyin != stdin){
								printf("%s",yytext);
							}return(META);}
{name}							{if (yyin != stdin){
								printf("%s",yytext);
								}return(NAME);}
{content}						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CONTENT);}
{header}						{if (yyin != stdin){
								printf("%s",yytext);
								}return(AHEADER);}
{cheader}						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CHEADER);}
{atgc} 							{if (yyin != stdin){
								printf("%s",yytext);
								}return(CLASS);}
{atgid} 						{
								if (yyin != stdin){
								printf("%s",yytext);
								}
								return(ID);
								}							
{atype}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(TYPE);}
{atvalue}						{if (yyin != stdin){
								printf("%s",yytext);
							}return(VALUE );}
{athref}					    {if (yyin != stdin){
								printf("%s",yytext);
							}return(HREF);}
{atarget}						{if (yyin != stdin){
								printf("%s",yytext);
							}return(TARGET);}
{atalt}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ALT);}
{atw}							{if (yyin != stdin){
								printf("%s",yytext);
								}return(WIDTH);}
{ath}							{if (yyin != stdin){
								printf("%s",yytext);
								}return(HEIGHT);}
{atb} 							{if (yyin != stdin){
								printf("%s",yytext);
							}return(BORDER);}
{atc}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(ACAPTION);}
{cierreatc}						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CCAPTION);}
{atsrc}							{if (yyin != stdin){
								printf("%s",yytext);
								}return(SRC);}
{cierrecom}						{if (yyin != stdin){
								printf("%s",yytext);
								}return(CCOM);}
{url}							{
								if (yyin != stdin){
								printf("%s",yytext);
								}
								return(URL);
								}

{an}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(TEXTO);}
{num}							{if (yyin != stdin){
								printf("%s",yytext);
							}return(NUM);}
{spc}						{printf ("\ ");}	
{tab}                      	{printf ("\t");}
{ESP}						{
								linea++;
								printf ("\n");
							}
. 							{printf("Error en la linea: %d\n",linea);}

%%