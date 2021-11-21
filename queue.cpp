#include<iostream>
using namespace std;
#define N 8
int queue[N];
int front=-1, rare=-1;
void insert(int x){
	if(rare==N-1){
		cout<<"the queue is full";
	}else if(front==-1&&rare==-1){
		front=0;
		rare=0;
		queue[rare]=x;
	}else{
		rare++;
		queue[rare]=x;
	}
}
void Delete() {
   if (front == - 1 || front > rare) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void peek(){
	if(front==-1&&rare==-1){
		cout<<"The queue is empty";
	}else{
		cout<<"The rare element: "<<queue[rare];
	}
}
void display(){
	if(front==-1&&rare==-1){
		cout<<"the queue is empty";
	}else{
		for (int i=0; i<=rare;i++){
			cout<<queue[i]<<" ";
		}
	}
} 
int main(){

int choice, flag=1, value;
 while( flag == 1)
 {
 cout<<"\n1. insert 2. Delete 3. peek 4.display 5.EXIT\n";
 cin>>choice; switch (choice)
 {
 case 1: cout<<"Enter Value:\n";
         cin>>value;
         insert(value);
         break;
 case 2: Delete();
         break;
 case 3: peek();
         break;
 case 4: display();
         break;
 case 5: flag = 0;
         break;
 }
 }
  return 0;
}
