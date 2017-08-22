#ifndef LINKED_LIST_H
#define LINKED_LIST_H

class Linked_list_node {

	public:

		// Constructor
		Linked_list_node() {
			_val = 0;
			_next = NULL;
		}
		Linked_list_node(int val, Linked_list_node* next) {
			_val = val;
			_next = next;
		}

		//~Linked_list_node() { delete _next; }
		void set_value(int v) { _val = v; }
		void link(Linked_list_node* next) { _next = next; }
		Linked_list_node* get_next() { return _next; }
		int get_value() { return _val; }

	private:

		int _val;
		Linked_list_node* _next;
};



class Linked_list {

	public:

		Linked_list();
		~Linked_list();
		void print();
		bool insert(int val, int pos);
		bool remove(int val);
		size_t size();

	private:
		
		size_t _size;
		Linked_list_node* _head;


	};

#endif
