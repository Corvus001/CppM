#include <bits/stdc++.h>
#include "linked_list.h"

int main() {

	Linked_list l;
	l.insert(1,0);
	l.insert(2,1);
	l.insert(3,2);
	l.insert(4,3);
	l.insert(5,4);
	l.insert(6,5);
	l.insert(7,6);
	l.print();

	l.remove(1);
	l.print();

	l.remove(4);
	l.print();

	l.remove(7);
	l.print();
}
