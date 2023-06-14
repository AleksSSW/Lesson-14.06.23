//Кольцевой двусвязный список
#include "LinkedList.h"

int main() {
	LinkedList list;
	list.AddHead(10);
	//list.AddTail(20);
	//list.AddTail(30);
	//list.AddTail(6);
	//list.AddTail(7);
	//list.AddTail(25);
	//list.ShowList();
	std::cout << "\n\n";
	list.DeleteElement(1);
	list.ShowList();



	return 0;
}