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
    // しろたんほーじちゃ
    strcpy(varDrink[2].name, "しろたんほーじちゃ");
    varDrink[2].price = 130;
    varDrink[2].num = 10;
    // しろたん水（ヤバい系）
    strcpy(varDrink[3].name, "しろたん水（ヤバい系）");
    varDrink[3].price = 60;
    varDrink[3].num = 5;

    //お釣りの数
    varExchange->num0010 = 20;
    varExchange->num0050 = 10;
    varExchange->num0100 = 20;
    varExchange->num0500 = 5;
    varExchange->num1000 = 0;

}