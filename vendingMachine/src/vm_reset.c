#include <stdio.h>
#include "vendingMachine.h"

void vm_reset(DRINK *varDrink, EXCHANGE *varExchange) {
    // しろたんこーら
    strcpy(varDrink[0].name, "しろたんこーら");
    varDrink[0].price = 130;
    varDrink[0].num = 10;
    // しろたんおれんぢじゅーす
    strcpy(varDrink[1].name, "しろたんおれんぢじゅーす");
    varDrink[1].price = 130;
    varDrink[1].num = 10;
    // しろたん水（ヤバい系）
    strcpy(varDrink[2].name, "しろたん水（ヤバい系）");
    varDrink[2].price = 130;
    varDrink[2].num = 10;

}