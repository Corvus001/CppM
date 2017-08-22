#ifndef BINARY_TREE_H
#define BINARY_TREE_H

class Binary_tree_node {

	public:
	
		// DEFAULT CONSTRUCTOR 
		Binary_tree_node() {
			_val = 0;
			_left = NULL;
			_right = NULL;
		}


		// INIT CONSTRUCTOR
		Binary_tree_node(int _val, Binary_tree_node* left, Binary_tree_node* right) {
			_val = val;
			_left = left;
			_right = right;
		}


		void set_value(int v) { _val = v; }
		void link_left(Binary_tree_node* left) { _left = left; }
		void link_right(Binary_tree_node* right) { _right = right; }
		Binary_tree_node* get_left() { return _left; }
		Binary_tree_node* get_right() { return _right; }
		int get_value() { return _val; }

		//

	private:

		int _val;
		Binary_tree_node* _left;
		Binary_tree_node* _right;
};

class Binary_tree {

	public:

		Binary_tree();
		~Binary_tree();
		void insert(int val);
		bool find(int val);
		

	private:
		
		Binary_tree_node* _head;
