#include <stdio.h>
#include <stdlib.h>

// Define a structure for a singly linked list node
struct Node
{
    int data;
    struct Node *next;
};

// Declare a global pointer to the first node
struct Node *first = NULL;

// Function to create a linked list from an array
void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    
    // Check if the array is empty
    if (n <= 0)
        return;

    // Create the first node
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    // Create the remaining nodes
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to display the elements of the linked list iteratively
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data); // Added space to separate elements
        p = p->next;
    }
    printf("\n"); // Added a newline character to format output
}

// Function to display the elements of the linked list recursively
void Rdisplay(struct Node *p)
{
    if (p != NULL)
    {
        Rdisplay(p->next);
        printf("%d ", p->data); // Added space to separate elements
    }
}

int main()
{
    struct Node *temp;
    int A[] = {1, 2, 3, 4, 5, 6, 7}; // Use square brackets for array initialization
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array

    create(A, n); // Create the linked list

    printf("Iterative Display: ");
    display(first);

    printf("Recursive Display: ");
    Rdisplay(first);

    return 0;
}


