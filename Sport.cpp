#include<bits/stdc++.h>

using namespace std;

void menu(){
	
	cout<<"Welcome to sport center"<<endl;
	cout<<"1. Balls"<<endl;
	cout<<"2. Jerseys"<<endl;
	cout<<"3. Total"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter your choice: ";
}

int main(){
	
	int choice,total=0,ball,jersey;
	int ball1=0, ball2=0, ball3=0, jersey1=0, jersey2=0, jersey3=0;  
	
	do{
		system("cls");
		menu();
		do{	
			cin>>choice;
			
			if(choice==1){
				system("cls");
				cout<<"1. Ball 1  Price : 50000\n";
				cout<<"2. Ball 2  Price : 100000\n";
				cout<<"3. Ball 3  Price : 150000\n";
				cout<<"4. Exit\n\n";
				
				do{
					do{
						cout<<"Enter type of ball: ";
						cin>>ball;
						
						if(ball==1){
							total+=50000;
							ball1++;
						}
						else if(ball==2){
							total+=100000;
							ball2++;
						}
						else if(ball==3){
							total+=150000;
							ball3++;
						}
						
						cout<<"Total: "<<total<<endl;
						cout<<"\n\n";
						
						if(ball==4){
							break;
						}
						
					}while(ball<1 || ball>4);
				}while(ball!=4);
			}
			else if(choice==2){
				system("cls");
				cout<<"1. Jersey 1  Price : 150000\n";
				cout<<"2. Jersey 2  Price : 200000\n";
				cout<<"3. Jersey 3  Price : 300000\n";
				cout<<"4. Exit\n\n";
				
				do{
					do{
						cout<<"Enter type of jersey: ";
						cin>>jersey;
						
						if(jersey==1){
							total+=150000;
							jersey1++;
						}
						else if(jersey==2){
							total+=200000;
							jersey2++;
						}
						else if(jersey==3){
							total+=300000;
							jersey3++;
						}
						
						cout<<"Total: "<<total<<endl;
						cout<<"\n\n";
						
						if(jersey==4){
							break;
						}
						
					}while(jersey<1 || jersey>3);
				}while(jersey!=4);
			}		
			else if(choice==3){
				system("cls");
				cout<<"Ball 1  : "<<ball1<<endl;
				cout<<"Ball 2  : "<<ball2<<endl;
				cout<<"Ball 3  : "<<ball3<<endl;
				cout<<"Jersey1 : "<<jersey1<<endl;
				cout<<"Jersey2 : "<<jersey2<<endl;
				cout<<"Jersey3 : "<<jersey3<<endl;
				cout<<"\n\nTotal: "<<total;
				getchar();
				getchar();
			}
			
		}while(choice<1 || choice>4);
	}while(choice!=4);
	
	return 0;	
}
