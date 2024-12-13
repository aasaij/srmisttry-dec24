//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node {
	int val;
	struct node *nxt;
}Node;
//Function to create a new node
Node *createNode(int data){
	//Allocating memory for new node
	Node *temp = (Node*)calloc(1,sizeof(Node));
	//Assigning value for new node
	temp->val = data;
	return temp;
}
//function to print the linked list using iteration
void printList(Node *list){
	//checking whether list is empty or not
	if (list){ //if not empty
		printf("\n[");
		//Traversing the entire list.
		//stops if it reaches the null pointer		
		for(Node *temp = list; temp;temp = temp->nxt)
			printf("%d,", temp->val);
		printf("\b]\n");
	}
	else
		printf("\n[]\n");
}
//function to add node in the beginning of the list
Node* addFirst(Node* list, int data){
	Node* newNode = createNode(data);
	newNode->nxt = list;
	list = newNode;
	return list;
}
//function to add node in the end of the list
Node* addLast(Node* list, int data){
	Node* newNode = createNode(data);
	if(list){
		Node* temp;
		for (temp = list; temp->nxt!=NULL; temp = temp->nxt );
		temp->nxt = newNode;
		return list;
	}
	else
		return newNode;
}
//function to add node in specific position of the list
Node* addAtPosition(Node* list, int data, int position){
	if (position == 0 || position == 1)
		return addFirst(list, data);
	else if(position > 1 && list && list->nxt != NULL) {
		Node* newNode = createNode(data), *temp=list;
		for (int i =2;i<position && temp ; temp= temp->nxt, i++);
		if (temp){
			newNode->nxt = temp->nxt;
			temp->nxt = newNode;
		}
	}
	return list;
}
//function to delete node in the beginning
Node* deleteFirst(Node *list){
	if (list){
		Node *temp = list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
//function to delete node in the end
Node* deleteLast(Node *list){
	if (list){ // if list is not empty
		//checking whether list is having only one node
		if (list->nxt==NULL){
			free(list);
			return NULL;
		}
		Node *t;
		//moving the t pointer to the last but second node
		for (t = list; t->nxt->nxt; t=t->nxt);
		free(t->nxt);
		t->nxt = NULL;		
	}
	return list;
}
//function to delete node in specific position of the list
Node* deleteAtPosition(Node *list, int position){
	if (position == 0 || position == 1)	
		return deleteFirst(list);
	//checking the position is greater 1 
	//list should not be empty 
	//list should not have only one node
	else if (position > 1 && list && list->nxt){
		Node* temp = list;
		for (int i = 2; i<position && temp; temp = temp->nxt,i++);
		if (temp->nxt){
			Node *t = temp->nxt;
			temp->nxt = t->nxt;
			free(t);
		}
	}
	return list;
}
//function to find number of elements in the list
int length(Node *list){
	int i=0;
	//traversing the entire list
	for (Node* temp = list; temp; temp=temp->nxt,i++);
	return i;
}
void printMenu(){
	printf("\nLinked List Demo Application\n");
	printf("****************************\n");
	printf("1. Add First\n");
	printf("2. Add Last\n");
	printf("3. Add at Position\n");
	printf("4. Delete First\n");
	printf("5. Delete Last\n");
	printf("6. Delete at Position\n");
	printf("7. Print List\n");
	printf("8. Print Length\n");
	printf("9. Print list in reverse\n");
	printf("10. Exit\n");
	printf("Entere your choice : ");
}

int getData(){
	int element;
	printf("Enter an Element : ");
	scanf("%d", &element);
	return element;
}
int getPosition(){
	int position;
	printf("Enter position : ");
	scanf("%d", &position);
	return position;
}
//Print the list in reverse order using recursion
void printListReverse(Node* list){
	if (list){
		printListReverse(list->nxt);
		printf("%d  ", list->val);
	}
}

int main(){
	Node *root = NULL;
	int choice;
	while(1){ //infinite loop
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you so much for being very interactive today!");
				return 0;
			case 1:
				root = addFirst(root, getData()); break;
			case 2:
				root = addLast(root, getData()); break;
			case 3:
				root = addAtPosition(root, getData(), getPosition());break;
			case 4:
				root = deleteFirst(root);break;
			case 5:
				root = deleteLast(root);break;
			case 6:
				root = deleteAtPosition(root,getPosition());break;
			case 7:
				printList(root);break;
			case 8:
				printf("Length : %d\n", length(root));break;
			case 9:
				printListReverse(root);break;			
		}
	}
	return 0;
}

//Complete the Afternoon Assessment
//	student.ccc.training --> Assessment
//	
//	Attendance Link : https://bit.ly/SA-131224
//	Trainer : Tambi
//	Session : AN
//	
//	
//	Practice Link : student.ccc.training --> My Goals


	
	
	
	
	
	
	
	
	
	
	
	



