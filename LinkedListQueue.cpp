#include<bits/stdc++.h>

using namespace std;

struct data{
	int num;
	data *next;
};

struct data *head=NULL, *node, *temp, *tail;

int add(int num){
	
	node = (struct data*) malloc(sizeof (struct data));
	node->num = num;
	
	if(head==NULL){
		head = node;
		tail = node;
		tail->next = NULL;
	}
	else{
		tail->next = node;
		tail = node;
		tail->next = NULL;
	}
	
}

int remove(int num){
	int flag=0;
	temp = head;
	while(temp!=NULL){
		if(temp->num==num){
			if(temp==head){
				head = head->next;
				free(temp);
				temp = head;
			}
			else if(temp==tail){
				node = head;
				while(node->next!=tail){
					node = node->next;
				}
				tail = node;
				free(temp);
				temp = NULL;
				tail->next = NULL;
			}
			else{
				node = head;
				while(node->next!=temp){
					node = node->next;
				}
				node->next = temp->next;
				free(temp);
			}
			flag = 1;
		}
		
		if(flag==0){
			cout<<"Customer number not found\n\n";
			break;
		}
	}
}

int display(int num){
	int i=0;
	temp = head;
	while(temp!=NULL){
		printf("%3d - %d\n",i++,temp->num);
	}
	return 0;
}

void clear(){
	for(int i=0;i<25;i++)
		printf("\n");
}

void menu(){
	printf("Customer Service Center\n");
	printf("======================\n");
	
	printf("1. Add Customer to Queue\n");
	printf("2. Serve Customer\n");
	printf("3. View queue\n");
	printf("4. Exit\n");
}

int main(){
	
	int choice,num=0;
	
	do{
		clear();
		menu();
		
		do{
			cin>>choice;
			
			if(choice==1){
				system("cls");
				num++;
				cout<<"Your customer number is "<<num;
				add(num);
				getchar();
			}
			else if(choice==2){
				system("cls");
				cout<<"Enter the customer's number you want to serve: ";
				cin>>num;
				remove(num);
			}
			else if(choice==3){
				system("cls");
				display(num);
			}
			else{
				break;
			}
		}while(choice<1 || choice>4);
	}while(choice!=4);
		
	return 0;
}
