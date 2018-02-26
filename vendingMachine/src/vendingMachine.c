#include <stdio.h>
#include "vendingMachine.h"

int main(void) {
	DRINK       varDrink[3];
	EXCHANGE    varExchange;

	// ----- Function
	void vm_reset();


    // ----- Process

    // 商品とお釣りの初期値をセット
	vm_reset(&varDrink, &varExchange);



	printf("%s\n", varDrink[0].name);

    return 0;
}
