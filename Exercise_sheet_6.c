/*
 ============================================================================
 Name        : Exercise_sheet_6.c
 Author      : eseuteo
 Version     :
 Copyright   : 
 Description : 	Read a text file and insert into a linked list of strings
 	 	 	 	(char*) the words contained in such a file. Prevent
 	 	 	 	duplicates and, finally, provide the resulting list in
 	 	 	 	alphabetical order. The concept of word is: any sequence of
 	 	 	 	letters (upper or lowercase). Spaces, commas, dashes, etc.
 	 	 	 	are not considered words, either alone or as part of any
 	 	 	 	other word.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void clean(char * str);

int main(void) {
	TList prueba = create();
	FILE * fin = fopen("put here the text file path", "rt");
	char str[256];
	while(!feof(fin)){
		fscanf(fin, "%s", str);
		clean(str);
		insert(&prueba, str);
	}
	fclose(fin);
	show(prueba);
	return EXIT_SUCCESS;
}

void clean(char * str){
	int i, j;
	char * punct = ".,;:-_´¨{}[]`^+*¡¿?'\"=)(/&¬%€~$·#@!|ªº\\";
	j = strlen(punct);
	for (i = 0; i<j; i++){
		strtok(str, &punct[i]);
	}
}
