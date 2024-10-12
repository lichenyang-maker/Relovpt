#ifndef __cplusplus

#ifndef CList_h
#define CList_h

#include <stdio.h>
#include <stdlib.h>
typedef unsigned long long CList_Length;
typedef _Bool              CList_Bool;

struct CList_node {
    void              *data;
    struct CList_node *next; 
    struct CList_node *prev; 
} ;

typedef \
struct CList {
    struct CList_node *head;
    struct CList_node *tail;
    CList_Bool        (*clear)      (struct CList *list);
    CList_Bool        (*destroy)    (struct CList *list);
    CList_Bool        (*push_Back)  (struct CList *list, void *data);
    CList_Bool        (*pop_Back)   (struct CList *list);
    CList_Bool        (*insert)     (struct CList *list, void *data);
    CList_Bool        (*ToLog)      (struct CList *list);
}CList;
CList              *new_CList(void);
#endif
#else
#endif