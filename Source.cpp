//Кольцевой двусвязный список
#include "LinkedList.h"

int main() {
	LinkedList list;
	list.AddHead(10);
	list.AddTail(20);
	list.AddTail(17);
	list.AddTail(13);
	list.AddTail(74);
	list.AddTail(45);
	list.AddTail(45);
	list.AddTail(90);
	list.AddTail(100);
	list.ShowList();
	std::cout << "\n\n";
	//list.DeleteElement(1);
	list.BubleSort();
	list.ShowList();



	return 0;
}