#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL;

    for (int i = 0; i < 5; i++) {
        struct node *new_node = malloc(sizeof(struct node)); // 새 노드 생성
        new_node->data = i;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            struct node *curr = head;
            while (curr->next != NULL) {
                curr = curr->next;
            }
            curr->next = new_node;
        }
    }

    struct node *curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    curr = head;
    while (curr != NULL) {
        struct node *temp = curr;
        curr = curr->next;
        free(temp);
    }
}
