#include <bits/stdc++.h>
#include <linked_list.h>

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
		new_node = new Linked_list_node(val, _head);
		_head = new_node;
		_size++;	

		return true;
	}
	// Insert at middle or end.

	Linked_list_node* _prev_node = _head;

	while (--pos) _prev_node = _prev_node->get_next();

	Linked_list_node* new_node = new Linked_list_node(val, _prev_node->get_next() );
	_prev_node->link(new_node);
	_size++;

	return true;



}

// REMOVE------------------------------------------------------


bool Linked_list::remove(int val) {
	
	if (_size == 0) {
		return false;
	}

	Linked_list_node* iterator = _head;
	Linked_list_node* prev_node = _head;

	while (true) {

		if (iterator == NULL) {				// If we got to the end of the list, return false.
			return false;
		}

		// First element removal
		if (iterator == _head && iterator->get_value() == val) {
			
			_head = iterator->get_next();
			delete iterator;
			_size--;
			return true;
		}

		// Removal in the middle or end
		if (iterator->get_value() == val) {
			prev_node->link(iterator->get_next());
			delete iterator;
			_size--;
			return true;
		}

		prev_node = iterator;
		iterator = iterator->get_next();
	}
}


// SIZE--------------------------------------------------------

size_t Linked_list::size() {

	return _size;
}


