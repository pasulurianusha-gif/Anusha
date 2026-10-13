#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *temp;
    int pos, i;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    printf("Enter the position to delete (1-3): ");
    scanf("%d", &pos);
    if (pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    }
    else if (pos > 1) {
        temp = head;
        for (i = 1; i < pos-1&& temp!= NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == NULL) {
            printf("Invalid position.\n");
            return 0;
        }
        struct Node *del = temp->next;
        temp->next = del->next;
        free(del);
    }
    temp = head;
    while (temp!= NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
}
printf("NULL\n");
    return 0;
}
