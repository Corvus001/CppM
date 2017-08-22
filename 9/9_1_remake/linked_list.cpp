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

Lined_list::insert(int val, int pos) {

	if (_size < pos) return false;

	Linked_list_node* iterator;
	
