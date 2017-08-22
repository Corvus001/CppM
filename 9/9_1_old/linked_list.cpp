#include <bits/stdc++.h>
#include "linked_list.h"
using namespace std;

//-------------- -----------------------
//--------------LINKED LISTS------------
//--------------------------------------



// CONSTRUCTOR
Linked_list::Linked_list() {

	_head = NULL;
	_size = 0;
}



// DESTRUCTOR
Linked_list::~Linked_list() {

	// Cleans all the linked nodes starting from head.

	Linked_list_node* iter = _head;
	while (iter != NULL) {
		Linked_list_node* tmp = iter->get_next();
		delete iter;
		iter = tmp;
	}
}	

//--------------METHODS----------------
//-------------------------------------


// PRINT-----------------------------------------------------
void Linked_list::print(){
	
	Linked_list_node* head = _head;
	while (head != NULL){
		cout << head->get_value() << ' ';
		head = head->get_next(); 
	}
	cout << endl;
	return;
}

// INSERT----------------------------------------------------
bool Linked_list::insert(int val, int pos){
	
	if (_size < pos) return false;
	
	if (pos == 0) {
		Linked_list_node* head;
		head = new Linked_list_node(val, NULL);
		_head = head;
		_size++;
		
		return true;
	}


	Linked_list_node* _prev_node = _head;
	while (--pos) _prev_node = _prev_node->get_next();
	Linked_list_node* inserted_node = new Linked_list_node(val, _prev_node->get_next());
	_prev_node->link(inserted_node);
	_size++;

	return true;
}



// REMOVE----------------------------------------------------
bool Linked_list::remove(int val) {

	if (_size==0) {
		return false;
	}

	Linked_list_node* iterator = _head;
	Linked_list_node* prev_node = _head;

	for (int i=0; i<_size; i++) {
		
		if (iterator == NULL) {
			return false;
		}
		
		// Remocion del primer elemento
		if (iterator == _head && iterator->get_value() == val) {

			_head = iterator->get_next();
			delete iterator;
			return true;
		}
		
		// Remocion de elementos intermedios 

		if (iterator->get_value() == val) {
			// Remover, re-linkear y retornar
			prev_node->link(iterator->get_next());
			delete iterator;
			return true;
			
		}

		// Remocion del ultimo elemento

		if (iterator->get_next() == NULL && iterator->get_value()==val) {

			prev_node->link(NULL);
			delete iterator;
			return true;
		}			

		prev_node = iterator;
		iterator = iterator->get_next();
	}
}

// SIZE---------------------------------------------------------

size_t Linked_list::size() {

	return _size;

}
