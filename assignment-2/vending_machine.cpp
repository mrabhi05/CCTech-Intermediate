#include "vending_machine.h"

using namespace std;

void ProductCard::welcome() const
{
    cout << "Welcome!" << endl;
}

void ProductCard::listOfItems()
{
    itemsList["Cola"]  = 100;
    itemsList["Chips"] = 50;
    itemsList["Candy"] = 65;

    map<string, unsigned int>::iterator itr = itemsList.begin();
    cout << "The products and their rates are :" << endl;
    while (itr != itemsList.end())
    {
        cout << itr->first << " : " << itr->second << " cents"<<endl;
        ++itr;
    }
    cout<<"____________________________________"<<endl;

}

void VendingMachine::multipleOfCurrency()
{
    cout<<"P.S. Coins are only accepted in multiples of Nickels, Dime, and Quarter."
    "\nSingle pennies are not allowed. "<<endl;
    cout<<"____________________________________"<<endl;

    cout<<"Enter the multiple of Nickels (5 Cents): ";
    cin>>no_Of_Nickel;
    cout<<"Enter the multiple of Dime (10 Cents): ";
    cin>>no_Of_Dime;
    cout<<"Enter the multiple of Quarter (25 cents): ";
    cin>>no_Of_Quarter;

    total_nickel=no_Of_Nickel*5;
    total_dimes=no_Of_Dime*10;
    total_quarter=no_Of_Quarter*25; 

    cout<<"____________________________________"<<endl;
}

unsigned int VendingMachine::totalAcceptedCoins()
{
    cout << "Insert your coins:" << endl;
    totalAmount=total_nickel+total_dimes+total_quarter;
    cout<<"You have inserted: "<<total_nickel<<" + "<<total_dimes<<" + "<<total_quarter<<" = "<<totalAmount<<" cents"<<endl;
    cout<<"____________________________________"<<endl;
    
    return totalAmount;
}

void VendingMachine::selectItem()
{
    cout<<"Select among the following inventory: \n 1. COLA \n 2. CHIPS \n 3. CANDY"<<endl;
    cout<<"Enter the quantity of COLA: ";
    cin>>itemCount_cola;
    itemsLeft_cola=MAX_COLA_COUNT-itemCount_cola;

    cout<<"Enter the quantity of CHIPS: ";
    cin>>itemCount_chips;
    itemsLeft_chips=MAX_CHIPS_COUNT-itemCount_chips;

    cout<<"Enter the quantity of CANDY: ";
    cin>>itemCount_candy;
    itemsLeft_candy=MAX_CANDY_COUNT-itemCount_candy;

    cout<<"____________________________________"<<endl;
}

bool VendingMachine::isSoldOut()
{
    if (itemCount_cola>itemsLeft_cola)
        cerr << "Only " << MAX_COLA_COUNT << " Colas are available " << endl;
        if (itemCount_chips>itemsLeft_chips)
            cerr << "Only " << MAX_CHIPS_COUNT << " Chips are available " << endl;
            if (itemCount_candy>itemsLeft_candy)
                cerr << "Only " << MAX_CANDY_COUNT << " Candy are available " << endl;

    exit(0);
}

void VendingMachine::compareAmountWithItemValue()
{
    itemsPrice_cola=itemCount_cola*100;
    itemsPrice_chips=itemCount_chips*50;
    itemsPrice_candy=itemCount_candy*65;

    cout << "Calculating your items amount: "<<endl;
    cout<<"For Cola: "<<itemsPrice_cola<<endl;
    cout<<"For Chips: "<<itemsPrice_chips<<endl;
    cout<<"For Candy: "<< itemsPrice_candy<<endl;

    itemsPrice= itemsPrice_cola+itemsPrice_chips+itemsPrice_candy;
    cout<<"The cost of your items is: "<<itemsPrice<<endl;
    cout<<"You had inserted : "<<totalAmount<<" cents"<<endl;

    cout<<"____________________________________"<<endl;
}

void VendingMachine::balanceAmount()
{
    if(itemsPrice>totalAmount)
    {
        cout<<"You need to insert ("<<itemsPrice<<" - "<<totalAmount<<") = "<< itemsPrice-totalAmount<<" more cents"<<endl;
    }
    else if(itemsPrice<totalAmount)
    {
        cout<<"Returning your balance amount: ("<<totalAmount<<" - "<<itemsPrice<<") = "<<totalAmount-itemsPrice<<" cents"<<endl;
    }

    cout<<"____________________________________"<<endl;
}

void VendingMachine::exactChange()
{
    totalCurrencyInVendingMachine=(MAX_NICKEL_COUNT_IN_VM * 5)+ (MAX_DIME_COUNT_IN_VM * 10) + (MAX_QUARTER_COUNT_IN_VM * 25);

    if((totalAmount-itemsPrice)>totalCurrencyInVendingMachine)
    {
        cerr<<"Warning: No exact change of "<< abs(itemsPrice-totalAmount)<<" cents"<<endl;
        cerr<<"Please insert exact change of: "<<itemsPrice<< " cents"<<endl;
    }
    else if((totalAmount-itemsPrice)<totalCurrencyInVendingMachine)
    {
        totalCurrencyInVendingMachine-(totalAmount-itemsPrice);
    }
}