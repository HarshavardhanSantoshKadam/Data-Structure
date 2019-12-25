#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

struct node
{
	char data[20];
	struct node *next;
};
typedef struct node node;

class llist
{
	private :
			int totalnode;
			node*first;
			char ch[20];
	public :
		  llist()
		  {
		  	totalnode=0;
		  	first=NULL;
		  	
		  }
		node* getf()
		{
			return first;
		}
		  
		  node* createnode()
		  {
		  	cout<<"Enter the string ";
		 
		  	cin>>ch;
		  	
		  	node* newnode= new node();
		  	strcpy( newnode->data,ch   );
		  	newnode->next=NULL;
		  	return newnode;
		  	
		  }
		  
		  bool isempty()
		  {
		  	if( first==NULL  )
		   	{
		  	 return true;
			  }
			  return false;
           
		  }
		  
		void  addnode()
		  {
		  	node* newnode= createnode();
		  
		  	if(   isempty())
              {
              	first=newnode;
			  }
			  else{
			  	     node* temp=first;
			  	     
			  	     for( int i=1;i<totalnode;i++)
			  	     {
			  	     	temp=temp->next;
					}
					temp->next=newnode;   
					newnode->next=first;
			  }	
			  totalnode++;	  	
		  }
		  
		  //ADD BY POS
		  void insert_pos()
		  {
		  	
		  	int pos;
		  	cout<<"Enter the position";
		  	cin>>pos;
		  		node* newnode= createnode();
		  	
		  	node*temp=first;
		  	int i;
		  	for( i=1;i<pos-1;i++ )
		   	{
		  		temp=temp->next;
		  	}
                 newnode->next=temp->next;
                 temp->next=newnode;
                 totalnode++;	  	
		 }
		 
		 //REVERSE LIST
		  void show(node*temp)
		  {
		  	if(first==temp->next)
		  	{cout<<temp->data;
			  return ;
			  }
			  show(temp->next);
			  cout<<temp->data;
		  }
		  
		  
		  //DISPLAY LIST
		  void display()
		  {
		  	//cout<<"totalcount is"<<totalnode;
		  	node*temp=first;
		  	for(int i=1;i<=totalnode;i++)
		  	{
		  		cout<<temp->data<<"  ";
		  		temp=temp->next;
			  }
		  }
		  
		  
		  void deletenode()
		  {
		  	node* temp=first;
		  		int pos;
		  	cout<<"Enter the position";
		  	cin>>pos;
		  	int i;
		  	for(i=1;i<pos-1;i++)
		  	{
		  		temp=temp->next;
		  		
			  }
			  
			  cout<<i;
		  	node*ptr=temp->next;
		  	temp->next=ptr->next;
		  	delete ptr;
		  	totalnode--;
		  	//cout<<"ptr is deleted";
		  	
		  }
		  
		  
		  // DISPLAY BY POSITION
		  void display_pos()
		  {
		  	node*temp=first;
		  		int pos;
		  	cout<<"Enter the position";
		  	cin>>pos;
		  	
		  	for(int i=1;i<pos;i++)
		  	{
		  		temp=temp->next;
			  }
			  
			 	for(int i=1;i<=totalnode;i++)
		  	{
		  		cout<<temp->data<<"  ";
		  		temp=temp->next;
			  }
			  
		  }
};

int menu();
int menu()
{
	int choice;
	cout<<endl;
	cout<<"0. EXIT"<<endl;
	cout<<"1 . ADD NODE"<<endl;
	cout<<"2. INSERT NODE BY POSITION "<<endl;
	cout<<"3. DISPLAY LIST"<<endl;
	cout<<"4. DISPLAY LIST BY POSITION"<<endl;
	cout<<"5. DELETE NODE"<<endl;
	cout<<"6. REVERSE NODE"<<endl;
	cout<<endl;
	
	cout<<"Enter choice";
	cin>>choice;
	return choice;
}

int main()
{
	llist l;

	 while(1)
	 {
	 	int a=menu();
	 	switch(a)
	 	{
	 		case 0: exit(0);
	 		case 1: l.addnode();
	 		         break;
	 		
	 		case 2: l.insert_pos();
	 		        break;
	 		        
	 		case 3: 	 l.display();	
	 		         break;
	 		         
	 		case 4: 	 l.display_pos();
	 		            break;
	 		case 5:   l.deletenode();
	 		          break;
	 		          
	 		case 6:     l.show(l.getf()) ;        
	 		            break;
	 		default: cout<<"Invalid choice";
	 		
		 }
	 	
	 }
	 
	return 0;
}





 














