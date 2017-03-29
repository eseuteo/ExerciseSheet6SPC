/*
 * LinkedList.c
 *
 *	Implementation. See header for more info
 *
 *  Created on: 29 mar. 2017
 *      Author: eseuteo
 */
#include "LinkedList.h"

TList create() {
	return NULL;
}

void insert(TList * plist, char * nWord) {
	TList aux = *plist;
	TList newNode, prev = NULL;
	int flag = 1;

	while (aux != NULL && flag == 1) {
		flag = strcasecmp(nWord, aux->word);
		if (flag == 1) {
			prev = aux;
			aux = aux->next;
		}
	}

	if (flag == 0)
		return;

	newNode = (TList) malloc(sizeof(TNode));
	newNode->word = (char*) malloc(strlen(nWord) + 1);
	strcpy(newNode->word, nWord);

	if (flag == 1 && prev == NULL && aux == NULL) {
		newNode->next = NULL;
		*plist = newNode;
	} else if (prev == NULL) {
		newNode->next = aux;
		*plist = newNode;
	} else {
		newNode->next = aux;
		prev->next = newNode;
	}
}

void show(TList list) {
	while (list != NULL) {
		printf("%s", list->word);
		if (!(list->next == NULL)){
			printf(", ");
		}
		list = list->next;
	}
	printf("\n");
}
