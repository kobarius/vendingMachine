#include "vendingMachine.h"

void vm_inventory(DRINK *varDrink, EXCHANGE *varExchange, bool *errflgDrink, bool *errflgCoin ) {
    int i;
    int sumNumDrink;
    int sumCoin;

    // ������
    sumNumDrink = 0;
    *errflgDrink = false;
    *errflgCoin = false;
    sumCoin = 0;

    // ���i�����ׂč݌ɐ؂ꂵ�Ă��Ȃ����m�F
    for(i = 0; i < numDrink; i++) {
        sumNumDrink += varDrink[i].num;
    }
    if(sumNumDrink == 0) {
        *errflgDrink = true;
    }

    // �ޑK�؂�̊m�F�F�S�Ă̏ꍇ�i10�`900�~�j�ɑΉ��ł��Ȃ��ꍇ�͒ޑK�؂�Ƃ���
    // case1:900�~�����Ȃ��ꍇ
    if (~(((varExchange->num0500 >= 1) && (varExchange->num0100 >= 4) || (varExchange->num0100 >= 9))) {
        *errflgCoin = true;
    }
    // case2:90�~�����Ȃ��ꍇ
    if (~(((varExchange->num0050 >= 1) && (varExchange->num0010 >= 4) || (varExchange->num0010 >= 9))) {
        *errflgCoin = true;
    }

}