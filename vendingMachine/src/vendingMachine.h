#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//�v���Z�b�g����p�����[�^�i�萔�j
#define numDrink 4

// ���i�̍\����
typedef struct {
	char name[256]; // ���i��
	int price;      // ���i
	int num;        // �݌ɐ�
} DRINK;

// ���ނ�̍\����
typedef struct {
	int num1000;
	int num0500;
	int num0100;
	int num0050;
	int num0010;
} EXCHANGE;
