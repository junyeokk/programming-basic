#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    // 3개의 노드에 예시 데이터 생성
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;
    second->data = 99;
    second->next = third;
    third->data = 37;
    third->next = NULL;

    // 각 노드에 데이터 출력
    struct node *current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    return 0;
}