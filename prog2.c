#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node*next;
};
int main(){
	struct Node*head;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	struct Node*newnode;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	fourth=(struct Node*)malloc(sizeof(struct Node));
	newnode=(struct Node*)malloc(sizeof(struct Node));
	head->data=10;
	head->next=second;
	second->data=20;
	second->next=third;
	third->data=30;
	third->next=fourth;
	fourth->data=40;
	fourth->next=NULL;
	newnode->data=25;
	newnode->next=second->next;
	second->next=newnode;
	struct Node*temp=head;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
	return 0;
}
