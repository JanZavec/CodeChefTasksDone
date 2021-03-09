//
// Created by Janzavec on 28/02/2021.
//
#include <stdlib.h>
struct Node{
    int Data;
    struct Node *nexT;


};
static void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->Data = new_data;
    new_node->nexT = *head_ref;
    (*head_ref) = new_node;
}
static void print(struct Node *head, uint8_t i, uint8_t i1) {

    while(head != NULL){
        printf("test");
        printf("%d, ", head->Data);
        head ->Data = 7;
        head = head->nexT;
    }


}
 static void changeValueOfPointer(uint8_t *a, uint8_t *b){
 uint8_t temp = *a;

    *a = *b;
    *b = temp;
    printf(" \n Values of a,b in func: %d, %d \n", *a, *b);
}
static void swapStrings(char** a, char** b){
    char *temp = *a;
    *a = *b;
    *b = temp;


}

void nekaj(){

    char *first = "test";
    char *second = "nekaj";
    printf("Before swap: %s, %s \n", first, second);
    swapStrings(&first,&second);
    printf("after swap:%s, %s \n", first, second);

    uint8_t o = 4;
    uint8_t p = 5;
    uint8_t* h = &o;
    uint8_t* l = &p;
    printf(" \n Values of a,b in main before swap: %d, %d \n", *h, *l);
    changeValueOfPointer(h,l);
    printf(" \n Values of a,b in main after swap: %d, %d \n", *h, *l);

    struct Node *head = NULL;
    struct Node *next = NULL;
    struct Node *tail = NULL;

    head = (struct Node*) malloc(sizeof(struct Node));
    next = (struct Node*) malloc(sizeof(struct Node));
    tail = (struct Node*) malloc(sizeof(struct Node));

    head -> Data = 3;
    head -> nexT = next;

    next -> Data = 5;
    next -> nexT = tail;
    tail->Data = 7;
    tail->nexT = NULL;

    printf("Data in head: %d \n", head->Data);
    printf("Address head ios showing to: %p \n", head->nexT);
    printf("Address in next: %p \n", next);
    printf("Data in next: %d \n", next->Data);
    printf("Address next is showing to:%p \n", next->nexT);
    printf("Address in tail: %p, \n ", tail);
    push(&head, 3);
    push(&head, 6);
    printf("Node elements:");
    print(head, 0, 0);
    for(struct Node *node = head; node != NULL; node = node->nexT){
    printf("%d,", node->Data);
    }


    printf("\n");

    int a = 4;
    int *b;
    b = &a;
    int **c;
    c = &b;
    printf("a has value of: %d \n", a);
    *b = 5;
    printf("b has value of: %d \n", *b);
    **c =  6;
    printf("c has value of: %d \n", **c);
    printf("Address of a is %p \n",(char*) &a);
    printf("Address b is showing to: %p \n",b);
    printf("Address b has: %p \n",&b);
    printf("Address c is showing to: %p \n",c);

    printf("Address c* is showing to: %p \n",*c);



}