/*
 * LinkedList.h
 *
 * Header of just a basic case-sensitive sorted linked list of strings that avoids repetitions.
 * Ad-hoc data structure for the C language exercise 6 from SPC course, Universidad de Málaga.
 *
 *  Created on: 29 mar. 2017
 *      Author: eseuteo
 */
#ifndef __LinkedList__
#define __LinkedList__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node * TList;
typedef struct node{
	char * word;
	TList next;
} TNode;
typedef char bool;

TList create();

void insert(TList * plist, char * nWord);

void show(TList list);

#endif
