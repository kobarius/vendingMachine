#include "vendingMachine.h"

void vm_inventory(DRINK *varDrink, EXCHANGE *varExchange, bool *errflgDrink, bool *errflgCoin ) {
    int i;
    int sumNumDrink;
    int sumCoin;

    // 初期化
    sumNumDrink = 0;
    *errflgDrink = false;
    *errflgCoin = false;
    sumCoin = 0;

    // 商品がすべて在庫切れしていないか確認
    for(i = 0; i < numDrink; i++) {
        sumNumDrink += varDrink[i].num;
    }
    if(sumNumDrink == 0) {
        *errflgDrink = true;
    }

    // 釣銭切れの確認：全ての場合（10～900円）に対応できない場合は釣銭切れとする
    // case1:900円を作れない場合
    if (~(((varExchange->num0500 >= 1) && (varExchange->num0100 >= 4) || (varExchange->num0100 >= 9))) {
        *errflgCoin = true;
    }
    // case2:90円を作れない場合
    if (~(((varExchange->num0050 >= 1) && (varExchange->num0010 >= 4) || (varExchange->num0010 >= 9))) {
        *errflgCoin = true;
    }

}