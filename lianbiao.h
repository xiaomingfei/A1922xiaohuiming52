#ifndef lianbiao_h
#define lianbiao_h

#include <stdio.h>

typedef int dataType;
typedef struct _node
{
	dataType data;
	struct _node *next;
}
Node;
typedef struct _list
{
	Node *head;
	Node *tail;
}
List;

void initList(List *);
void addHead(List *,dataType);
Node *getNode(List *,dataType);
void delete Node(List *,dataType);
int getLength(List *);
void diaplayList(List *);
void clearList(List *);
void isEmpty(List *);

#endif
