#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

// Insert Node at first position
Node* insertNodeAtFirst(Node* head, int data)
{
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = head;
    return new_node;
}

int getRandomInteger(int rmin, int rmax)
{
    int n = rmin + rand() % (rmax - rmin + 1);
    printf("Nombre aléatoire entre %d et %d : %d\n", rmin, rmax, n);
    return n;
}

int listLength(Node* head)
{
    int i = 0;
    Node *current = head;
    while(current != NULL)
    {
        i = i+1;
        current = current->next;
    }
    printf("Taille de la liste : %d\n", i);
    return i;
}

void printList(Node* head)
{
    Node *current = head;

    while (current != NULL)
    {
        printf("(%d, %p, %p)\n", current->data, current->next, current);
        current = current->next;
    }
}

int isEmpty(Node* head)
{
    if (head == NULL ){
        printf("Liste vide \n");
        return 1;
    
    }
    printf("Liste non vide \n");
    return 0;
}

Node* insertNodeAtEnd(Node* head, int data)
{ 
    Node* new_node = malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = head;
    printf("Dernier élément ajouté ! \n");
    return new_node;
}

    // main()
    int main()
    {

        Node* head;

        int data;
        int nnodes;

        // Build list with insertNodeAtEnd()

        nnodes = 10;
        head = NULL;
        printf("STARTING with an empty list\n");
        for (int n = 0; n < nnodes; n++)
        {
            data = getRandomInteger(1, 50);
            printf("... inserting %3d at end\n", data);
            head = insertNodeAtEnd(head, data);
        }
        printf("DONE\n");
        printList(head);
        printf("length = %d\n", listLength(head));
        fprintf(stderr, "***\n");

        return 0;
    }