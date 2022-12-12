#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node * next;
    
}
node;
int main(void){
    //list of size
    node * list = NULL;
    // Add a number to list
    node * n = malloc(sizeof(node));
    if(n==NULL){
        return 1;
    }
    n-> number =1;//(*n).number = 1;
    n-> next = NULL;//(*n).next = NULL;
    //update list to point to new node 
    list = n;
    // Add number to list
    // Add new number to the list 
    if (n == NULL){
        free(list);
        return 1;
    }
    n-> number =2;
    n-> next = NULL;
    list ->next =n;
    // Add a number to list
    n = malloc(sizeof(node));
    if (n==NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }
    n-> number =3;
    n-> next = NULL;
    list -> next -> next = n;
    // print list
    for (node *tmp = list; tmp != NULL ; tmp->next)
    {
        printf("%i\n" , tmp->number);
    }
    //Free list
    while (list != NULL)
    {
        node * tmp = list -> next;
        free(list);
        list = tmp;  
    }
    
}