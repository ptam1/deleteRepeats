
#include "node.h"
using namespace std;

//Precondition: previous_ptr points to a node in a linked list
/*Postcondition: An ew node containing the given entry has been added after the node that 
previous_ptr points to. */
void node::list_insert(node* previous_ptr, const node::value_type& entry)
{
	node *insert_ptr;
	
	insert_ptr = new node;
	insert_ptr->set_data(entry);
	insert_ptr->set_link(previous_ptr->link());
	previous_ptr->set_link(insert_ptr);
}

void node*::remove(node* head_ptr, const node::value_type& target, node* previous_ptr)
{
	node *remove_ptr;
	node *cursor;
	
	for(cursor = head_ptr; cursor != NULL; cursor= cursor->link())
	{
		if(target == cursor.data())
		{
		remove_ptr = target->link();
	    target->set_link(remove_ptr->link());
	    delete remove_ptr;	
	}
	
}
}