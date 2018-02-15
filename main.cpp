

#include <iostream>
#include <cstdlib>
#include "node.h"
using namespace std;

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
