#include <stdio.h>
#include "vendingMachine.h"

void vm_reset(DRINK *varDrink, EXCHANGE *varExchange) {
    // ���낽�񂱁[��
    strcpy(varDrink[0].name, "���낽�񂱁[��");
    varDrink[0].price = 130;
    varDrink[0].num = 10;
    // ���낽�񂨂�������[��
    strcpy(varDrink[1].name, "���낽�񂨂�������[��");
    varDrink[1].price = 130;
    varDrink[1].num = 10;
    // ���낽�񐅁i���o���n�j
    strcpy(varDrink[2].name, "���낽�񐅁i���o���n�j");
    varDrink[2].price = 130;
    varDrink[2].num = 10;

}