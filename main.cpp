

#include <iostream>
#include <cstdlib>
#include "node.h"
using namespace std;



void remove_repeats(node*& head_ptr, const node::value_type &target); 

int main()
{
	//node* head_ptr = new node();
	
	node* tail = new node(3.3);	
	node* six = new node(4.3, tail);
	node* five = new node(3.3, six);
	node* four = new node(1.1, five);
	node* three = new node(3.3, four);
	node* two = new node(5.1, three);
	node* one = new node(2.2, two);

   cout << "The Linked List is: " << " ";
   for(node* i = one; i != NULL; i = i->link())
   {
	   cout << i->data() << " " << " ";
   }
    cout << " " << endl;
	
	remove_repeats(one,3.3);
	cout << "The Linked List after removing is: " << " ";

   for(node* i = one; i != NULL; i = i->link())
   {
	   cout << i->data() << " " << " ";
   }	
    cout << " " << endl;
	return 0;
}



void remove_repeats(node*& head_ptr, const node::value_type &target)
	{
		node* cursor = head_ptr;
		node* previous_ptr;
		node* remove_ptr;
		node* next;

        for (cursor = head_ptr; cursor != NULL; cursor = cursor->link())
		{
			
			next = cursor->link();
			if(next->data() == target)
			{
				previous_ptr = cursor; 
				remove_ptr = next;
				previous_ptr->set_link(remove_ptr->link());
			}
		}
	}
