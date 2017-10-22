#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item aBook;//创建Sales_item类型的变量
	std::cout << "输入一本书的销售信息（ISBN、售出册数以及售价）" << std::endl;
	if (std::cin >> aBook) {
		Sales_item anotherBook;
		std::cout << "输入另一本书的销售信息（ISBN、售出册数以及售价）" << std::endl;
		while (std::cin >> anotherBook) {
			//判断两次输入的是否是同一本
			if (aBook.isbn() == anotherBook.isbn()) {
				aBook += anotherBook;//两本书的相关信息合并起来
			}
			else {
				//如果不相等
				std::cout << aBook << std::endl;
				aBook = anotherBook;//开始将另一本书作为对比的标准进行判断
			}
		}
		//循环结束
		std::cout << aBook << std::endl;
	}
	else
	{
		std::cerr << "没有数据欸！" << std::endl;
		return -1;
	}
	//std::cin >> aBook1 >> aBook2;

	//std::cout << "这本书的ISBN，以及第一次的售出册数、售价和平均价格是：" << aBook1 << std::endl;

	//std::cout << "这本书的ISBN，以及这两次的售出总数、总价和平均价格是：" << aBook1 + aBook2 << std::endl;

	int pause;
	std::cin >> pause;

	return 0;
}