#include "vending_machine.h"

using namespace std;

int main(int argc, char* argv[])
{
    ProductCard productcard;
    productcard.welcome();
    productcard.listOfItems();

    VendingMachine vm;
    vm.multipleOfCurrency();
    vm.totalAcceptedCoins();
    vm.selectItem();
    vm.compareAmountWithItemValue();
    vm.balanceAmount();
    vm.exactChange();
    vm.isSoldOut();

    return 0;
}