#include<iostream>
#include "SLL_Class.h"
using namespace std;
int main(){
	SLL get;
	int choose,data;
	while(true){
	cout<<"Please choose the correct:\n1) Add to head. \n2) Add to tail.\n3) Add to middle.\n4) Display.\n5) Search.\n6) First item.\n7) Last item."<<endl;
	cout<<"8) Sum of item.\n9) Number of items.\n10) Average of items.\n11) The maxemum number.\n12) the minimum number.\n13) Convert to array.\n14) Delete from head.\n15) Delete from tail.\n16) Delete node.\n17) Clear node.\n18) Add to middle with delete."<<endl;
	cout<<"19) Delete even number.\n20) Add double odd number."<<endl;
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
			int item;
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		cout<<"Please enter the item you want to add after it :"<<endl;
		cin>>item;
		get.addtomiddle(item,data);
	}
	else if(choose==4){
		get.display();
	}
	
		else if(choose==5){
		cout<<"Please enter the search data in node :"<<endl;
		cin>>data;
		get.search(data);
		if(get.search(data)==0){
			cout<<"The "<<data<<" item is not found maybe the node is empty."<<endl;
		}
		else
		cout<<"The Item which you are searching about it found and is :  "<<data<<endl;	
	}
	
	else if(choose==6){
		get.First();
	}
	else if(choose==7){
		get.Last();
		
	}
	else if(choose==8){
		data=get.sum();
		if(data==0)
		{
		cout<<"The node is empty."<<endl;
		cout<<"The sum of items is :  "<<data<<endl;
		}
		else
		cout<<"The sum of items is :  "<<data<<endl;
		
	}
		else if(choose==9){
		cout<<"The number of item in node is :  "<<get.counter()<<endl;
	}
	else if(choose==10){
		get.average();
	}
	else if(choose==11){
		get.maxnumber();
	}
	else if(choose==12){
		get.minnumber();
	}
	else if(choose==13){
		get.converttoarray();
	}
	else if(choose==14){
		get.deletefromhead();
	}
	else if(choose==15){
		get.deletefromtail();
	}
	
	else if(choose==16){
		cout<<"Please enter the node to delete it :"<<endl;
		cin>>data;
		get.deletenode(data);
	}
	else if(choose==17){
		get.clear();
	}
	else if(choose==18){
			int item;
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		cout<<"Please enter the item you want to add after it :"<<endl;
		cin>>item;
		get.searchtodelete(item,data);	
	}
	else if(choose==19){
		get.deletevennumber();
	}
	else if(choose==20){
		get.doubleodd();
	}
}
	system("pause");
	return 0;
}
