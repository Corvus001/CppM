#ifndef LINKED_LIST_H
#define LINKED_LIST_H


using namespace std;

class Linked_list_node {

	public:
		
		Linked_list_node() {
			_val = "";
			_next = NULL;
		}

		Linked_list_node(string val, Linked_list_node* next) {
			
			_val = val;
			_next = next;
		}

		void set_value(string value) { _val = value; }
		void link(Linked_list_node* next) { _next = next; }
		Linked_list_node* get_next(void) const {return _next; }
		string get_value(void) const { return _val; }
	
	private:

		string _val;
		Linked_list_node* _next;

};

class Str_linked_list {

	public:

		Str_linked_list();
		~Str_linked_list();

		void print() const;				// PRINT
		bool insert(string val, int pos);		// INSERT
		bool remove(string val);			// REMOVE
		size_t size(void) const;			// SIZE

	private:

		size_t _size;
		Linked_list_node* _head;
};

#endif
