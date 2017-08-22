#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Linked_list_node {

	public:

		// 	Constructor
		//

		Linked_list_node() {
			_val = 0;
			_next = NULL;
		}

		Linked_list_node(int val, Linked_list_node* next) {
			_val = val;
			_next = next;
		}



		// NODES ARE CLEANED BY LINKED_LIST DESTRUCTOR. SO THERE'S NO NODE DESTRUCTOR.

		//----------------NODE METHODS---------------------------
		// ------------------------------------------------------

		void set_value(int v) { _val = v; }			// SET VALUE
		void link(Linked_list_node* next) { _next = next; }	// LINK
		Linked_list_node* get_next() { return _next; }		// GET NEXT
		int get_value() { return _val; }			// GET VALUE

		// 

	private:

		int _val;
		Linked_list_node* _next;
};



class Linked_list {

	public:

		Linked_list();
		~Linked_list();
		void print();						// PRINT
		bool insert(int val, int pos);				// INSERT
		bool remove(int val);					// REMOVE
		size_t size();						// SIZE

	private:
		
		size_t _size;
		Linked_list_node* _head;


	};

#endif
