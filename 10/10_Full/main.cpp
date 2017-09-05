#include <bits/stdc++.h>
#include <str_linked_list.h>
#include <string>

using namespace std;

int main() {
	Str_linked_list l;
	cout << "Size of list is: " << l.size() << endl;
	l.insert("1984", 0);
	l.insert("A Brave New World", 1);
	l.print();

	return 0;
}
