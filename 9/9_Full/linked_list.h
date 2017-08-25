#ifndef LINKED_LIST_h
#define LINKED_LIST_h

class Linked_list_node {

	public:

		// Constructor del objeto nodo
		//
		
		Linked_list_node() {
			_val = 0;
			_next = NULL;
		}

		// Constructor con valores iniciales

		Linked_list_node(int val, Linked_list_node* next) {
			
			_val = val;
			_next = next;
		}

		
		// NODES ARE CLEANED BY LINKED_LIST DESTRUCTOR... SO, THERE'S NO NEED FOR A NODE DESTRUCTOR.

		//--------------------NODE METHODS--------------------
		//----------------------------------------------------	
	
		void set_value(int value) { _val = value; }  			// SET VALUE

		void link(Linked_list_node* next) { _next = next; } 		// LINK

		Linked_list_node* get_next() { return _next; } 			// GET NEXT

		int get_value() { return _val; } 				// GET VALUE

	private:

		int _val;
		Linked_list_node* _next;

};

class Linked_list {

	public:

		Linked_list();			// Code for this function is in Linked_list.cpp
		~Linked_list();

		void print();							// PRINT
		bool insert(int val, int pos);					// INSERT
		bool remove(int val);						// REMOVE
		size_t size();							// SIZE

	private:

		size_t _size;
		Linked_list_node* _head;

};

#endif
	
			
