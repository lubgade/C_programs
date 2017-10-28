#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    struct Node *last = *head_ref;
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }
    while(last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void print_list(struct Node *node){
    while(node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
}

int get_middle(struct Node *head){
    struct Node* fastptr = head;
    struct Node* slowptr = head;
    int count = 0;
    while(fastptr != NULL){
        if(count % 2)
            slowptr = slowptr->next;
        fastptr = fastptr->next;
        count++;
    }
    return slowptr->data;
}



int main() {
	struct Node* head = NULL;
	append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	print_list(head);
	printf("\nMiddle element of list is %d", get_middle(head));
	return 0;
}