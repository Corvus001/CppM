#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

int main() {

	Linked_list l;
	cout << "Size of list is: " << l.size() << endl;;
	l.insert(1,0);
	cout << "Inserting 1... New size of list is: " << l.size() << endl;
	l.print();
	l.insert(2,1);
	l.print();
	l.insert(3,2);
	l.print();
	l.insert(5,3);
	l.print();
	cout << endl << "Attemping insertion in the middle: 4 in position 3" << endl;
	l.insert(4,3);
	l.print();
	cout << endl << "Insertion at the end: " << endl;
	l.insert(6,5);
	l.print();
	cout << endl << "Attemping insertion in the beginning: 0 in position 0" << endl;
	l.insert(0,0);
	l.print();
	cout << endl << "Current size of list is: " << l.size() << endl << endl;
	cout << "Inserting 123 at: " << l.size() << endl;
	l.insert(123,l.size());
	l.print();
	cout << endl << "Attemping removal of 4" << endl;
	cout << "Current size of list is: " << l.size() << endl;
	l.remove(4);
	l.print();
	cout << endl <<  "Attemping removal of 0" << endl;
	cout << "Current size of list is: " << l.size() << endl;
	l.remove(0);
	l.print();
	cout << endl << "Attemping removal of 123" << endl;
	cout << "Current size of list is: " << l.size() << endl;
	l.remove(123);
	l.print();
	cout << "Current size of list is: " << l.size() << endl;
	cout << endl << "Attemping removal of 8 (not present in list)" << endl;
	cout << l.remove(8) << " ---> function should return 0, i.e. false: " << endl;
	l.print();

}
