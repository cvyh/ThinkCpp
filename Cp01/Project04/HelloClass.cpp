#include <iostream>
#include "Sales_item.h"

int main() {
	Sales_item aBook;//����Sales_item���͵ı���
	std::cout << "����һ�����������Ϣ��ISBN���۳������Լ��ۼۣ�" << std::endl;
	if (std::cin >> aBook) {
		Sales_item anotherBook;
		std::cout << "������һ�����������Ϣ��ISBN���۳������Լ��ۼۣ�" << std::endl;
		while (std::cin >> anotherBook) {
			//�ж�����������Ƿ���ͬһ��
			if (aBook.isbn() == anotherBook.isbn()) {
				aBook += anotherBook;//������������Ϣ�ϲ�����
			}
			else {
				//��������
				std::cout << aBook << std::endl;
				aBook = anotherBook;//��ʼ����һ������Ϊ�Աȵı�׼�����ж�
			}
		}
		//ѭ������
		std::cout << aBook << std::endl;
	}
	else
	{
		std::cerr << "û�����ݚG��" << std::endl;
		return -1;
	}
	//std::cin >> aBook1 >> aBook2;

	//std::cout << "�Ȿ���ISBN���Լ���һ�ε��۳��������ۼۺ�ƽ���۸��ǣ�" << aBook1 << std::endl;

	//std::cout << "�Ȿ���ISBN���Լ������ε��۳��������ܼۺ�ƽ���۸��ǣ�" << aBook1 + aBook2 << std::endl;

	int pause;
	std::cin >> pause;

	return 0;
}