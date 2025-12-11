// #include <stdio.h>
// #include <stdlib.h>
// #include <stdint.h>

// typedef struct db {
//     uint32_t num;
//     struct db *ptr;
// } db_t;

// int main() {
//     db_t *p = malloc(sizeof(db_t));  

//     printf("%p\n", p);

//     p->num = 100;

//     printf("p->num = %u\n", p->num);

//     free(p);
//     return 0;
// }
#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

typedef struct node{
    uint32_t data;
    struct node *next;
}node_t;

// node_t *head = NULL;
// node_t *tmp  = NULL;

// node_t* create(){
//     if (head == NULL)
//     {
//         head = (node_t*)calloc(1,sizeof(node_t));
//         head = tmp;
//     }
//     else{

//     }
// }
int main(){
    node_t *head = NULL;
    node_t *tmp1  = NULL;

    if (head==NULL)
    {
        head=(node_t*)malloc(sizeof(node_t));
        head->data = 0;
        head->next = NULL;
        tmp1 = head;
    }
    for (int i = 1; i < 11; i++)
    {

    node_t *node2 = malloc(sizeof(node_t));
    node2->data = i;
    node2->next = NULL;

    tmp1->next = node2;

    tmp1 = node2;

    }
    
    tmp1=head;
    while (tmp1->next!=NULL)
    {
        printf("-> %2u",tmp1->data);
        tmp1=tmp1->next;
    }
    
}