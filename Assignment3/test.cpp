
#include "ListNode.cpp"
#include "ListP.cpp"
#include <iostream>
using namespace std;

int main(){
//testing listNode.h
	ItemType i[] = {3, 5, 9, 43, 8, 54, 32};
	ListNode n(i[0], NULL);
	ListNode *nPtr = &n;
	/*cout << n.getItem();
	cout << n.getNext() << endl;
	ListNode n2(i2, nPtr);
	cout << n2.getItem();
	cout << n2.getNext() << endl;
	cout << &n << endl;*/
	n.setNext(new ListNode(i[3], NULL));
//testing ListP.h
	ListP l;
//testing insert and display
	l.insert(1, i[0]);
	l.display();
	l.insert(1, i[1]);
	l.display();
	l.insert(3, i[2]);
	l.display();
	l.insert(3, i[3]);
	l.display();
	l.insert(3, i[4]);
	l.display();
	l.insert(3, i[5]);
	l.display();
//testing copy constructor
	l.remove(2);
	l.display();
	ListNode *left, *right;
	l.partition(left, right, l.head);
	
	
	return 0;
}
