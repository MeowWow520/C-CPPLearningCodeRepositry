//计算带余除法:给定两个整数a和b(0 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入描述:包括两个整数a和b，依次为被除数和除数(不为零)，中间用空格隔开，一行，也
//输出描述:一行，包含两个整数，依次为整数商和余数，中间用一个空格隔开，
//示例：
//输入: 15 2
//输出: 7 1
#include <stdio.h>

int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	int c = a / b;
	int d = a % b;
	printf("%d %d", c, d);
	return 0;
}