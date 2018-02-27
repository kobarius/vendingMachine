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
    sumCoin = varExchange->num0500 * 500 + varExchange->num0100 * 100;
    if (sumCoin < 900) {
        *errflgCoin = true;
    }
    // case2:90�~�����Ȃ��ꍇ
    sumCoin = varExchange->num0050 * 50 + varExchange->num0010 * 10;
    if (sumCoin < 90) {
        *errflgCoin = true;
    }

}