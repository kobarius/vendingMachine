#include "vendingMachine.h"

int main(void) {
    DRINK       varDrink[numDrink];
    EXCHANGE    varExchange;

    bool errflgDrink;   // 商品在庫切れフラグ
    bool errflgCoin;    // 釣銭切れフラグ

    // ----- Function
    void vm_reset();
    void vm_inventory();

    // ----- Process


    // 商品とお釣りの初期値をセット
    vm_reset(&varDrink, &varExchange);

//    printf("%s\n", varDrink[0].name);

    while (1) {
        // 商品とお釣りの在庫を確認
        vm_inventory(&varDrink, &varExchange, &errflgDrink, &errflgCoin);

        // Debug start
        varDrink[0].num = 0;
        varDrink[1].num = 0;
        varDrink[2].num = 0;
        varDrink[3].num = 0;
     
        printf("%d %d\n", errflgCoin, errflgDrink);
        // Debug end

        if (errflgCoin || errflgDrink) {
            break;
        }
    }

    int i;
    scanf_s("%d", &i);

    return 0;
}
