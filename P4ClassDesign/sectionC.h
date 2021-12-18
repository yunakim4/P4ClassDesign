#include <string>
#include <vector>
class Item{
public: 
	Item(std::string name, long id, double price, int numInStock);


	std::string _name;
	double _price;
	int _numInStock;

private:
	long _id;

};

class Store {
public: 
	Store(std::vector<Item> storeInventory);

	std::vector<Item> addItem(Item itemName);
	std::vector<Item> getStoreInventory();

private:
	std::vector<Item> _storeInventory;

};

void printStoreInventory(Store store);

class Order {
public: 
	Order(std::vector<Item> orderList);

	std::vector<Item> addOrderItem(Item itemName);
	double getTotalOrderPrice();
	std::vector<Item> _orderList;

private:
	int _totalOrderPrice;
	

};
