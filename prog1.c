#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main(){
struct node *head;
struct node *second;
struct node *third;
struct node *fourth;
head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
head->data=100;
head->next=second;
second->data=200;
second->next=third;
third->data=300;
third->next=fourth;
fourth->data=400;
fourth->next=NULL;
struct node *temp=head;
while(temp!=NULL){
printf("%d -> ", temp->data);
temp=temp->next;
}
printf("NULL\n");
return 0;
}
