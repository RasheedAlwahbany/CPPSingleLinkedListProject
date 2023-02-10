#include <iostream>
using namespace std;

class node{
	public:
		int info;
		node* next;
		node(){
			next=0;
		}
		node(int data,node* n){
			info=data;
			next=n;
		}		
};
class SLL{
	private:
		node* head;
		node* tail;
		public:
		SLL(){
			head=tail=0;
		}
		bool isempty(){
			return head==0;
		}
			void clear(){
			node* tmp;
			
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
	
		node* First(){
			node* first;
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
		node* Last()
		{
				node* last;
			if(!isempty()){
				last=tail;
				cout<<"The last data is :  "<<last->info<<endl;
				return last;
			}
			return last;
		}
		void addtohead(int data){
			if(!isempty()){
			node* tmp=head;
			head=new node(data,head);
			head->next=tmp;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
			head=tail=new node(data,0);
			cout<<"The item add seccessfully."<<endl;
		}
	}
		void addtotail(int data){
			if(!isempty()){
			tail->next=new node(data,0);
			tail=tail->next;
			cout<<"The item add seccessfully."<<endl;
		}
		else {
		head=tail=new node(data,0);
		cout<<"The item add seccessfully."<<endl;
		}
		}
		
		void deletefromhead(){
			if(!isempty()){
			node* tmp=head;
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
	node* search(int item){
		node* tmp=head;
		if(!isempty()){
		while(tmp->next!=0){
			if(tmp->info==item){
				return tmp;
			} 
			tmp=tmp->next;
		}
	}
	else
		return 0;
	return 0;
	}
	void addtomiddle(int item,int data){
		node* found=search(item);
		if(isempty())
		addtohead(data);
		else if(tail->info==item||found==0){
			addtotail(data);
		}
		else{
		node* tmp2=new node(data,found->next);
		found->next=tmp2;
			}
		
	}
	void deletenode(int item){
		if(!isempty()){
		
		if(head->info==item){
			deletefromhead();
		}
		else if(tail->info==item){
			deletefromtail();
		}
		else if(head!=tail){
		node* tmp=search(item);
		node* tmp1=head;
		node* tmp2;
		node* tmp3;
		if(tmp!=0){
			while(tmp1!=0){
				if(tmp1->info==item){
					tmp3=tmp1;
					tmp2->next=tmp1->next;
					delete tmp3;
					tmp3=0;
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
		node* tmp=head;
		cout<<"The item in the list is :  "<<endl;
		while(tmp!=0){
			cout<<tmp->info<<endl;
			tmp=tmp->next;
		}
	}
		else{
			
			char name;
			int data;
			cout<<"The double linked list is empty.\n Did you want to add to it (Y/N) :"<<endl;
			cin>>name;
			if(name=='y' || name =='Y'){
				cout<<"Please enter the data :"<<endl;
				cin>>data;
			addtohead(data);
			}
	}

	}	
	float sum(){
		int tmp=0;
		node* num=head;
		if(!isempty())
	{
		if(head==tail){
			tmp=head->info;
			return tmp;
		}
		else{
		while(num!=0){
			tmp+=num->info;
			num=num->next;
		//	cout<<"The sum of items is :  "<<tmp<<endl;
		}
		return tmp;
	}
		return tmp;

	}
}
	float counter(){
		int count=0;
		node* num=head;
		if(!isempty()){
			while(num!=0){
			++count;
			num=num->next;	
			}
			
			return count; 
		}
		return count;
	}	
	void average(){
		float res=sum();
		float avrg;
		float count=counter();
		if(res==0){
			cout<<"The node is empty."<<endl;
		}
		else{
		avrg=res/count;
		cout<<"The average of element is :  "<<avrg<<endl;	
		}
	}
	void maxnumber(){
	if(!isempty()){
		node* tmp=head;
		node* tmp2=head->next;
		node* max;
		while(tmp!=0){	
			if(tmp->info>tmp2->info){
				max=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The maximum number in this node is :  "<<max->info<<endl;
	}
		else
		cout<<"The node is empty."<<endl;
	}
	void minnumber(){
	if(!isempty()){
		node* tmp=head;
		node* tmp2=head->next;
		node* min;
		while(tmp!=0){	
			if(tmp->info<tmp2->info){
				min=tmp;
			}
			tmp=tmp->next;			
		}
		cout<<"The minimum number in this node is :  "<<min->info<<endl;
	}
		else
		cout<<"The node is empty."<<endl;
	}	
	void converttoarray(){
		int size=counter();
		int num=0;
		int *arry=new int[size];
		if(!isempty()){
			node* tmp=head;
			while(tmp!=0){
				arry[num]=tmp->info;
				tmp=tmp->next;
				num++;
			}
		}	
			cout<<"The items in array is :  "<<endl;
			for(int i=0;i<size;i++){
				cout<<arry[i]<<endl;
			}
		}
	void searchtodelete(int item,int data){
		node* tmp=head;
		node* tmp2;
		node* tmp1;
		node* tmp3;	
		while(tmp!=0){
			if(tmp->info==item){
				tmp1=tmp;
				tmp=new node(data,tmp1->next);
				tmp->next=tmp1->next;
				cout<<"The item is add seccessfully."<<endl;
				if(tmp1->info%2==0){
				tmp2=tmp1;
				tmp1=tmp;
				tmp3->next=tmp1;
				delete tmp2;		
				}
				else{
					tmp1->next=tmp;
				}
				break;
			}
			tmp3=tmp;
			tmp=tmp->next;
		}
		
	
}
	void deletevennumber(){
			if(!isempty()){
				
				node* tmp=head;
				node* tmp2=head;
				node* tmp3;
				while(tmp!=0){
					if(head->info%2==0)
					{
					head=head->next;
					delete tmp;
					tmp=head;
					}
					if(tmp->info%2==0){
						tmp3=tmp;
						tmp=tmp->next;
						tmp2->next=tmp;
						delete tmp3;
						
					}
					
					else{
					tmp2=tmp;
					tmp=tmp->next;	
					}
					
				cout<<"Delete seccesfully."<<endl;	
				}
				
			}
		
			else 
			cout<<"The node is empty."<<endl;
		}
		void doubleodd(){
			if(!isempty()){
				node* tmp=head;
				int data;
				while(tmp!=0){
					if(tmp->info%2!=0){
						data=(tmp->info)*2;
						node* tmp2=new node(data,tmp->next);
						tmp->next=tmp2;
					}
					tmp=tmp->next;
				}
				cout<<"Add seccesfully."<<endl;
			}
			else 
			cout<<"The node is empty."<<endl;
		}

};
