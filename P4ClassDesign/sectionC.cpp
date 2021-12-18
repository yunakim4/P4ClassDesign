
#include "sectionC.h"
#include <vector>
#include <string>
#include <iostream>

Item::Item(std::string name, long id, double price, int numInStock)
    : _name{ name }, _id{ id }, _price{ price }, _numInStock{ numInStock } {}

Store::Store(std::vector<Item> storeInventory)
    : _storeInventory{ storeInventory } {}

Order::Order(std::vector<Item> orderList) 
    : _orderList{ orderList }, _totalOrderPrice{ 0 } {}




// Add an item to store inventory
std::vector<Item> Store::addItem(Item itemName) {
    if (_storeInventory.size() < 101) {
        _storeInventory.push_back(itemName);
        return _storeInventory;
    }
    else {
        std::cout << "Store Inventory is Full, cannot add more items \n";
    }
}

std::vector<Item> Store::getStoreInventory() {
    return _storeInventory;
}

// prints out the full contents of the store with each item and the number of that item in stock
void printStoreInventory(Store store) {
    std::vector<Item> storeInventory = store.getStoreInventory();
    std::cout << "Store: \n";
    for (int i = 0; i < storeInventory.size(); i++) {
        std::cout << storeInventory.at(i)._name << " x " << storeInventory.at(i)._numInStock << "\n";
    }
}


// adds item to order
std::vector<Item> Order::addOrderItem(Item itemName) {
    if (_orderList.size() < 11) {
        _orderList.push_back(itemName);
        return _orderList;
    }
    else {
        std::cout << "Order list is a maximum of 10 items, cannot add more items \n";
    }
}
// gets the total order price of the items
double Order::getTotalOrderPrice() {
    double total = 0;
    for (int i = 0; i < _orderList.size(); i++) {
        total += _orderList.at(i)._price;
    }
    std::cout << "(Test) The total price of your order is: " << total << "\n";
    return total;
}


