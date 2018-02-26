

// 商品の構造体
typedef struct {
	char name[256];  // 商品名
	int price;  // 価格
	int num;    // 在庫数
} DRINK;

// お釣りの構造体
typedef struct {
	int num1000;
	int num0500;
	int num0100;
	int num0050;
	int num0010;
} EXCHANGE;
