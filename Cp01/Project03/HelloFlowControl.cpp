#include <iostream>

int main()
{
	// currentValue是正在统计的值;然后把读入的新值存入value
	int currentValue = 0, value = 0;

	std::cout << "请输入第一个数，如果不输入的话就没有可以可以用来处理的数据";
	if (std::cin >> currentValue) {
		int cnt = 1;  // 保存当前正在处理的值的个数
		std::cout << "继续输入，现在即将进入循环";
		while (std::cin >> value) { // 读取剩余的数 
			if (value == currentValue)   //如果相同
				++cnt;            // +1
			else { // 如果不, 打印前一个值的个数
				std::cout
					<< currentValue << " occurs "
					<< cnt << " times" << std::endl;
				currentValue = value;    // 把新的值交给正在统计的值
				cnt = 1;          // 重置计数器
			}
		}  
		   // 当输入非法的值以后，循环就会跳出，此时输出这一句
		//这一句的作用是统计最后一个数字出现的次数
		std::cout << currentValue << " occurs "
			<< cnt << " times" << std::endl;
	} // outermost if statement ends here

}

//if(){}
//——小括号内是条件，为真就执行花括号中的语句
//————使用各种大于小于的运算符时，符合条件即为真。
//————使用istream之类的对象作为条件时，检测的是流的状态，如果是一个有效的流，这里就是真。

//while(){}
//——和if类似的，小括号内是条件，为真就执行花括号中的语句
//——和if不一样的是，if无论如何也只会做一遍
//————但是只要while内的条件只要满足，就会一遍遍的重复

//for(初始化语句;循环条件;表达式){}
//——初始化语句一般会定义一个值，这个值只在这个循环中存在
//————且只在for循环的入口处执行一次就不再执行
//——循环体每次执行钱先检查循环条件，为真就执行花括号里面的东西（即循环体）
//——小括号里的表达式在循环体中的内容都结束后执行
//————然后进行循环条件的判断——

