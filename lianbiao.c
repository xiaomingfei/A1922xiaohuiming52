#include <stdio.h>
#include <stdio.h>
#include <malloc.h>
#include "list.h"

void intList(List *list){
	list->head = NULL;
	list->tail = NULL;
}

void isEmpty(List *list){
	if(list->head == NULL){
		return;
	}
}

void addHead(List *list,dataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node->next = NULL;

	if(list->head->head == NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	}
	list->head = node;

	return;
}

Node *getNode(List *list, dataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	while(node !=NULL){
		if(node->data == data){
			return node;
	}else{
		node = node->next;
	}
	}
	return NULL;
}

void delNode(List *list, dataType data){
	if(list->head->data == data){
		list->head = list->head->next;
	}
	Node *prev = list->head;
	Node *node = prev->next;
	while(node != NULL){
		if(node->data == data){
			node = node->next;
			prev->next = node;

			return;
		}else{
			prev = prev->next;
			node = node->next;
		}
	}
	return;
}

int getLength(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		node = node->next;
		i++;
	}
	return i;
}

void diaplayList(List *list){
	Node *node = list->head;
	int i = 0;
	while(node != NULL){
		printf("the %dth node: %d\n",i + 1,node->data);
		node = node->next;
		i++;
	}
	printf("display finished!\n");

	return;
}

Node* find(List *list, dataType x){
	Node *node = list->head->next;
	while(node && node->data != x){
		node = node->next;
	}
	return node;
}

void clearList(list *list){
	if(list->head == NULL){
		return;
	}
	Node *p, *q;
	p = list->head;
	while(p){
		q = p;
		p = q;
	}
	list->hed = NULL;

	return;
}
	
