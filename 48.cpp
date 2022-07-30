#include<iostream>
using namespace std;

struct node
{
int data;
struct node *next;
};
struct node *ptr,*head;
void add_at_begin()
{
struct node *temp;
int item;
cout<<"\nEnter item to add at begining: ";
cin>>item;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=item;
temp->next=head;
head=temp;
}
void add_at_pos()
{
struct node *temp,*ptr,*old;
int item,pos,i;
cout<<"\nEnter item to add at begining: ";
cin>>item;
cout<<"\nEnter Position: ";
cin>>pos;
temp=(struct node*)malloc(sizeof (struct node));
temp->data=item;
ptr=head;
i=1;
while(i<pos&&ptr!=NULL)
{
old=ptr;
ptr=ptr->next;
i++;
}
if(i>pos)
cout<<"Position is greater than element: ";
if(ptr==NULL)
cout<<"\nPosition is not valid";
if(i==pos && ptr!=NULL)
{
temp->next=ptr;
old->next=temp;
}
}

void add_at_end()
{
struct node *ptr,*temp;
int item;
temp=(struct node *)malloc(sizeof(struct node));
cout<<"\nEnter data to insert: ";
cin>>item;
temp->data=item;
temp->next=NULL;
if(head==NULL)
{
head=temp;
}
else
{
ptr=head;
while(ptr->next!=NULL)
ptr=ptr->next;
ptr->next=temp;
}
cout<<"\n Data is inserted";
}
void show_all()
{
struct node *ptr;
ptr=head;
while(ptr!=NULL)
{
cout<<ptr->data<<"->";
ptr=ptr->next;
}
}
void add_atbeg()
{
struct node *temp;
int item;
cout<<"\nEnter item to add at beg: ";
cin>>item;
temp=(struct node*)malloc(sizeof( struct node));
temp->data=item;
temp->next=head;
head=temp;
}
void add_atpos()
{
struct node *temp,*ptr,*old;
int item,pos,i;
cout<<"\nEnter item to add at pos: ";
cin>>item;
cout<<"\nEnter pos";
cin>>pos;
temp=(struct node*)malloc(sizeof (struct node));
temp->data=item;
ptr=head;
i=1;
while(i<pos && ptr!=NULL)
{
old=ptr;
ptr=ptr->next;
i++;
}
if(i>pos)
cout<<"\nPosition is greater than elements: ";
if(ptr==NULL)
cout<<"\nPosition is not valid";
if(i==pos && ptr!=NULL)
{
temp->next=ptr;
old->next=temp;
}
}
void find()
{
struct node *ptr;
int item,i;
cout<<"\nEnter no to find :";
cin>>item;
ptr=head;
while(ptr->data!=item)
{
if(ptr==NULL)
{
cout<<"\nData not found";
return;}
ptr=ptr->next;
}
if(ptr->data==item)
cout<<"\nData found";
}

/*void find() //this is for freqency check
{
struct node *ptr;
int item,i;
cout<<"\nEnter no to find";
cin>>item;
ptr=head;
i=0;
while(ptr!=NULL)
{
if(ptr->data==item)
i++;
ptr=ptr->next;
}
if(i==0)
cout<<"\nData not found";
else
cout<<"Data found"<<i<<"times";
*/

void count()
{
struct node *ptr;
ptr=head;
int i=0;
while(ptr!=NULL)
{
i++;
ptr=ptr->next;}
 cout<<"\nNumber of nodes="<<i;
 }

 void delete_at_begin()
 {
 struct node *temp;
 temp=head;
 if(temp==NULL)
 {
 cout<<"\nLink list is empty";
 return;
 }
 head=head->next;
 cout<<"\nFirst node is detected";
 free(temp);
 }
 void delete_at_end()
 {
 struct node *ptr, *old;
 ptr=head;
 if(ptr==NULL)
{
cout<<"\nList is emty";
return;
}
while(ptr->next!=NULL)
{

 old=ptr;
 ptr=ptr->next;
 }
 old->next=NULL;
 cout<<"\nDeleted Data="<<ptr->data;
 free(ptr);
 }
 void delete_at_pos()
 {
 struct node *ptr, *old;
 int pos,i;
 //if(temp==NULL)
 cout<<"Enter position: ";
 cin>>pos;
 ptr=head;
 if(ptr==NULL)
 {
 cout<<"\nList is Empty";
 return;
}
i=1;
while(i<pos)
{
if(ptr==NULL)
{
cout<<"\nLess elements than position";
return;
}
old=ptr;
ptr=ptr->next;
i++;
}
old->next=ptr->next;
cout<<"\nDeleted data:"<<ptr->data;
free(ptr);
}

int main()
{
int choice;
head=NULL;
do
{
cout<<"\n Main Menu for Link list";
cout<<"\n1. Add new element at end";
cout<<"\n2. Add new element at beginning";
cout<<"\n3. Add new element at given position";
cout<<"\n4. Show all data";
cout<<"\n5. Delete data from beginning";
cout<<"\n6. Delete data from end";
cout<<"\n7. Delete data from given position";
cout<<"\n8. Count the data";
cout<<"\n9. Find the data";
cout<<"\n10. Exit";
cout<<"\n Enter Your choice :";
cin>>choice;
switch(choice)
{
case 1:
add_at_end();
break;
case 2:
add_at_begin();
break;
case 3:
add_at_pos();
break;
case 4:
show_all();
break;
case 5:
delete_at_begin();
break;
case 6:
delete_at_end();
break;
case 7:
delete_at_pos();
break;
case 8:
count();
case 9:
find();
break;
case 10:
cout<<"\n Thank you";
break;
default:
cout<<"\n Wrong choice!!! \n Try Again";
}
}
while(choice!=10);
}