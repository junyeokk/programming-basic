#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;          // 데이터 필드
    struct Node *next; // 다음 노드를 가리키는 포인터
};

struct Node *createNode(int data);
void appendNode(struct Node **head_ref, int new_data);
void printList(struct Node *node);

int main() {
    struct Node *head = NULL; // 연결 리스트의 head 포인터
    int data;

    // 표준 입력으로 데이터 입력
    printf("Enter numbers (a negative number to stop):\n");
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &data);
        if (data < 0)
            break;
        appendNode(&head, data);
    }
    printList(head);

    return 0;
}

// 새로운 노드를 생성
struct Node *createNode(int data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    if (new_node == NULL) {
        perror("Failed to allocate memory");
        exit(EXIT_FAILURE);
    }
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// 새로운 노드를 연결리스트의 끝에 추가
void appendNode(struct Node **head_ref, int new_data) {
    struct Node *new_node = createNode(new_data);
    struct Node *last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}

// 연결 리스트를 출력
void printList(struct Node *node) {
    printf("Linked list: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}