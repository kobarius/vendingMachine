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
    // ���낽��ف[������
    strcpy(varDrink[2].name, "���낽��ف[������");
    varDrink[2].price = 130;
    varDrink[2].num = 10;
    // ���낽�񐅁i���o���n�j
    strcpy(varDrink[3].name, "���낽�񐅁i���o���n�j");
    varDrink[3].price = 60;
    varDrink[3].num = 5;

    //���ނ�̐�
    varExchange->num0010 = 20;
    varExchange->num0050 = 10;
    varExchange->num0100 = 20;
    varExchange->num0500 = 5;
    varExchange->num1000 = 0;

}