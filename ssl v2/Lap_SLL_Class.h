#include <iostream>
using namespace std;
template <class T>
class node{
	public:
		T info;
		node* next;
		node(){
			next=0;
		}
		node(T data,node* n){
			info=data;
			next=n;
		}		
};
template <class T>
class SLL{
	
	private:
		node<T>* head;
		node<T>* tail;
		public:
		SLL(){
			head=tail=0;
		}
		bool isempty(){
			return head==0;
		}
			void clear(){
			node<T>* tmp;
			
			while(!isempty()){
			tmp=head;
			head=head->next;
			delete tmp;
			if(head==0)
			tail=0;	
			}
			cout<<"The node clreared seccessfully."<<endl;
			//tail=0;
			
			
		}
		~SLL(){
			clear();
			
		}
	
		node<T>* First(){
			node<T>* first;
			if(!isempty()){
				first=head;
				cout<<"The first data is :  "<<first->info<<endl;
				return first;
			}
			else{
				cout<<"The first number is not found."<<endl;
			return first;
		}
		}
		node<T>* Last()
		{
				node<T>* last;
			if(!isempty()){
				last=tail;
				cout<<"The last data is :  "<<last->info<<endl;
				return last;
			}
			return last;
		}
		void addtohead(T data){
			if(!isempty()){
			node<T>* tmp=head;
			head=new node<T>(data,head);
			head->next=tmp;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
			head=tail=new node<T>(data,0);
			cout<<"The item add seccessfully."<<endl;
		}
	}
		void addtotail(T data){
			if(!isempty()){
			tail->next=new node<T>(data,0);
			tail=tail->next;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
		head=tail=new node<T>(data,0);
		cout<<"The item add seccessfully."<<endl;
		}
		}
		void deletefromhead(){
			
			if(!isempty()){
			node<T>* tmp=head;
			head=head->next;
			delete tmp;
			cout<<"The item deleted seccessfully."<<endl;
			if(head==0){
				tail=0;
			}	
			}
			else 
			cout<<"The item didn't deleted seccessfully.\n\t\t\t\tBecause the node its empty."<<endl;
		}
		void deletefromtail(){
			
			if(!isempty()){
			node<T>* tmp2=head;
			node<T>* tmp;
			while(tmp2!=0){
				if(tmp2==tail)
				{
					tmp=tail;
					delete tmp;
					tail=head=0;
				}
				else if(tmp2->next==tail){
					tmp=tail;
					tail=tmp2;
					delete tmp;
					tmp2->next=0;
					if(tail==0)
					head=0;
				}
				tmp2=tmp2->next;
			}
			cout<<"The item deleted seccessfully."<<endl;
			if(tail==0){
				head=0;
			}
	
			}
			else 
			cout<<"The item didn't deleted seccessfully.\n\t\t\tBecause the node its empty."<<endl;
		}
	node<T>* search(T item){
		node<T>* tmp=head;
		T ans;
		if(!isempty()){
		while(tmp->next!=0){
			if(tmp->info==item){
				return tmp;
			} 
			tmp=tmp->next;
		
		}
	}
		return 0;
	}
	void addtomiddle(int item,int data){
		node<T>* found=search(item);
		if(isempty())
		addtohead(data);
		else if(tail->info==item||found==0){
			addtotail(data);
		}
		else{
		node<T>* tmp2=new node<T>(data,found->next);
		found->next=tmp2;
			}
		
	}

		void deletenode(T item){
		if(!isempty()){
		
		if(head->info==item){
			deletefromhead();
		}
		else if(tail->info==item){
			deletefromtail();
		}
		else if(head!=tail){
		node<T>* tmp=search(item);
		node<T>* tmp1=head;
		node<T>* tmp2;
		node<T>* tmp3;
		if(tmp!=0){
			while(tmp1!=0){
				if(tmp1->info==item){
					tmp3=tmp1;
					tmp2->next=tmp1->next;
					delete tmp3;
					break;
					
				}
				tmp2=tmp1;
				tmp1=tmp1->next;
			}
			cout<<"The item deleted seccessfully."<<endl;
		}	
		}
		
	}
		else 
		cout<<"The item didn't deleted seccessfully.\n\t\t\t\tBecause the node its empty."<<endl;

	}
	void display(){
		if(!isempty())
	{
		node<T>* tmp=head;
		cout<<"The item in the list is :  "<<endl;
		while(tmp!=0){
			cout<<tmp->info<<endl;
			tmp=tmp->next;
		}
	}
		else{
			
			char choose;
			T data;
			cout<<"The double linked list is empty.\n Did you want to add to it (Y/N) :"<<endl;
			cin>>choose;
			if(choose=='y' || choose =='Y'){
				cout<<"Please enter the data :"<<endl;
				cin>>data;
			addtohead(data);
			}
	}

	}
	void reflects(){
		if(!isempty()){
			node<T>* tmp=head;
			T data;
			while(tmp!=0){
				data=tmp->info;
				tmp=tmp->next;
				deletenode(data);
				addtohead(data);
			}	
		}
	}
	/*void reflects(){
		if(!isempty()){
			node<T>* tmp=head;
			node<T>* tmp3;
			node<T>* tmp2=tail;
			T data;
			while(tmp!=0)
			{
				data=tmp->info;
					tmp=tmp->next;				
			addtohead(data);
			}
			node<T>* tmp4=head;
			while(tmp4!=tmp){
				deletefromtail();
				tmp4=tmp4->next;
			}

		}
	}*/
	void therdend(){
		if(!isempty()){
		node<T>* tmp=head;
		while(tmp->next->next!=tail){
			tmp=tmp->next;
		}	
		cout<<"The third element from the end is : "<<tmp->info<<endl;
		}
		else
		cout<<"The node is empty."<<endl;
		
	}
	
};
