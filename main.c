#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 5
typedef struct ListNode{
	int data;
	struct ListNode *link;
}ListNode;

int search(ListNode *list, int value){
//fill out the code below
	int count = 0;
	
	return count;
}

ListNode* insert_last(ListNode* head, int data){
	ListNode *node = (ListNode *)malloc(sizeof(ListNode));
	node->data = data;
	if (head == NULL) {
		head = node;
		node->link = head;
	}
	else {
		node->link = head->link;	
		head->link = node;		
		head = node;		
	}
	return head;
}
int main(void)
{
	ListNode *head = NULL;
	int tmp1, tmp2=0;
	printf("원형 연결리스트에 5개의 정수를 삽입하시오.\n");
	for(int i=0; i<MAX_QUEUE_SIZE; i++){
		scanf("%d",&tmp);
		head = insert_last(head, tmp1);
	}
	
	printf("삽입한 원소중 찾고자 하는 값을 입력하시오.");
	scanf("%d",&tmp1);
	tmp2 = search(head, tmp1);
	
	printf("%d은 %d번째 노드에 저장되어 있음\n", tmp1, tmp2);
	
	return 0;
}
