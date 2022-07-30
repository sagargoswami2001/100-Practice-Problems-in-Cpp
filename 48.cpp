//Write a Menu deriver Linked List Program.
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *ptr,*head;

void add_at_end()
{
    struct node *ptr,*temp;
    int item;
    temp=(struct node *)malloc(sizeof(struct node));
    cout<< "\nEnter Data to Insert: ";
    cin>> item;
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
    cout<< "\n Data is Inserted";
}

void show_all()
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<< ptr->data<< "->";
        ptr=ptr->next;
    }
}

int main()
{
    int choice;
    head=NULL;
    do
    {
        cout<< "\n\nMain Menu for Link List:-";
        cout<< "\n1. Add New Element at End";
        cout<< "\n2. Add New Element at Beginning";
        cout<< "\n3. Add New Element at Given Position";
        cout<< "\n4. Show all Data";
        cout<< "\n5. Delete Data from Beginning";
        cout<< "\n6. Delete Data from End";
        cout<< "\n7. Delete Data from Position";
        cout<< "\n8. Count the Data";
        cout<< "\n9. Find the Data";
        cout<< "\n10. Exit";

        cout<< "\n\nEnter Your Choice: ";
        cin>> choice;

        switch(choice)
        {
        case 1:
            add_at_end();
            break;
        /*case 2:
            add_at_begin();
            break;
        case 3:
            add_at_pos();
            break;*/
        case 4:
            show_all();
            break;
        /*case 5:
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
            break;
        case 9:
            find();
            break;*/
        case 10:
            cout<< "\n Thank You";
            break;
        default:
            cout<< "\n Wrong Choice!!! \n Try Again";
        }
    }
    while(choice!=10);
}
