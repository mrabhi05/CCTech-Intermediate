// #pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cerrno>
#include <cstdlib>

#define MAX_COLA_COUNT  1
#define MAX_CHIPS_COUNT 1
#define MAX_CANDY_COUNT 1

#define MAX_NICKEL_COUNT_IN_VM 100
#define MAX_DIME_COUNT_IN_VM 100
#define MAX_QUARTER_COUNT_IN_VM 100

using namespace std;

class ProductCard
{
    protected:
    unsigned char chooseItem;
    unsigned int itemsCount;
    int itemsPrice;
    unsigned int itemsPrice_cola;
    unsigned int itemsPrice_chips;
    unsigned int itemsPrice_candy;
    map<string, unsigned int>itemsList;

    public:
    int itemCount_cola;
    int itemCount_chips;
    int itemCount_candy;
    int itemsLeft_cola;
    int itemsLeft_chips;
    int itemsLeft_candy;
    void welcome() const;
    void listOfItems();
};

class VendingMachine: public ProductCard
{
    private:
    unsigned int insertedCoins;
    unsigned char currencyMode;
    unsigned int no_Of_Nickel;
    unsigned int no_Of_Dime;
    unsigned int no_Of_Quarter;
    int totalAmount; 
    unsigned int total_nickel; 
    unsigned int total_dimes; 
    unsigned int total_quarter; 
    unsigned int totalCurrencyInVendingMachine;
    map<string, unsigned int> currencyCountInVendingMachine;

    public:
    void multipleOfCurrency();
    unsigned int totalAcceptedCoins();
    void selectItem();
    bool isSoldOut();
    void compareAmountWithItemValue();
    void balanceAmount();
    void exactChange();
};