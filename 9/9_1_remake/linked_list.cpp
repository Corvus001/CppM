#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

//------------------------------------------------------------
//---------------------LINKED LIST----------------------------
//------------------------------------------------------------

// CONSTRUCTOR 

Linked_list::Linked_list() {

	_head = NULL;
	_size = 0;
}

// DESTRUCTOR

Linked_list::~Linked_list() {

	Linked_list_node* iter1 = _head;
	while (iter1 != NULL) {
		Linked_list_node* tmp = iter1->get_next();
		delete iter1;
		iter1 = tmp;
	}
}

//------------------------------------------------------------
//---------------------METHODS--------------------------------
//------------------------------------------------------------

void Linked_list::print() {						// PRINT: Print Linked_List val's, starting from head

	Linked_list_node* iter = _head;
	while (iter != NULL) {
		cout << iter->get_value() << ' ';
		iter = iter->get_next();
	}
	cout << endl;
	return;
}	


// INSERT-----------------------------------------------------
bool Linked_list::insert(int val, int pos) {

	if (_size < pos) return false;

	// Insert at Beginning
	if (pos == 0) {

		Linked_list_node* new_node;
		new_node = new Linked_list_node(val, NULL);
		_head = new_node;
		_size++;	

		return true;
	}

	Linked_list_node* _prev_node = _head;

	while (--pos) _prev_node = _prev_node->get_next();

	Linked_list_node* new_node = new Linked_list_node(val, _prev_node->get_next() );
	_prev_node->link(new_node);
	_size++;

	return true;



}

// REMOVE------------------------------------------------------























