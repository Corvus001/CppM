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
		Linked_list_node* tmp = iter1.get_next();
		delete iter1;
		iter1 = tmp;
	}
}

//------------------------------------------------------------
//---------------------METHODS--------------------------------
//------------------------------------------------------------

Linked_list::print() {						// PRINT: Print Linked_List val's, starting from head

	Linked_list_node* iter = _head;
	while (iter != NULL) {
		cout << iter->get_value() << ' ';
		iter = iter.get_next();
	}
	cout << endl;
	return;
}	


// INSERT-----------------------------------------------------
bool Lined_list::insert(int val, int pos) {

	if (_size < pos) return false;

	if (pos == 0) {
		Linked_list_node* new_node = new Linked_list_node(val, _head->get_next());
		_head = new_node;
		_size++;

		return true;
	}	

	Linked_list_node* iterator = _head;
	int i = 0;
	while (i<_size) {
		if (i == pos) {
			Linked_list_node* new_node = new Linked_list_node(val, iterator->get_next());
			iterator->link(new_node);
		}
		iterator = iterator->get_next();
		size++;
		return true;
	}
	return false;
}

// REMOVE------------------------------------------------------
