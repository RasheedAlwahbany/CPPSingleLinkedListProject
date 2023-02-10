#include<iostream>
#include "Lap_SLL_Class.h"
#include "Stack.h"
using namespace std;
int main(){
	int choose,data,item;
	char *st=new char[20];
	SLL<int> get;
	Stack<char> gets;
	while(true){
	cout<<"Please choose the correct:\n1) Add to head. \n2) Add to tail.\n3) First item.\n4) Last item.\n5) Display.\n6) Search."<<endl;
	cout<<"7) Add to middle.\n8) Delete node.\n9) Reflects node.\n10) Delete from head.\n11) Delete from tail."<<endl;
	cout<<"12) 3d end.\n13) Referce string."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
	get.addtohead(data);
	}
	else if(choose==2){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		get.addtotail(data);
	}
	else if(choose==3){
		get.First();
	}
	else if(choose==4){
		get.Last();
		
	}
	
	else if(choose==5){
		get.display();
	}
	
	else if(choose==6){
		cout<<"Please enter the search data in node :"<<endl;
		cin>>data;
		get.search(data);
		if(get.search(data)==0){
			cout<<"The "<<data<<" item is not found maybe the node is empty."<<endl;
		}
		else
		cout<<"The Item which you are searching about it found and is :  "<<data<<endl;	
	}

	else if(choose==7){
	
		cout<<"Please enter the item :"<<endl;
		cin>>data;
		cout<<"Please enter the number you want to add  after it :"<<endl;
		cin>>item;
		get.addtomiddle(item,data);
	}
	else if(choose==8){
	cout<<"Enter The item you want to delete it :"<<endl;
	cin>>item;
	get.deletenode(item);
	}
	else if(choose==9){
		get.reflects();
	}
	else if(choose==10)
	get.deletefromhead();
	else if(choose==11)
	get.deletefromtail();
	else if(choose==12)
	get.therdend();
	else if(choose==13){
		cout<<"Please enter the string :"<<endl;
		for(int i=0;;i++)
		{
			cin>>st[i];
			if(st[i]=='.'||st[i]==';')
			break;
			else
			gets.push(st[i]);
			
		}
		gets.display();
		cout<<endl;
	}
}

	system("pause");
	return 0;
}
