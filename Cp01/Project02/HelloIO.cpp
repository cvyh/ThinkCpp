#include <iostream>
int main() {
	std::cout << "这是c-out的效果，即输出一句话，后面加上endl" << std::endl;
	std::cout << "这句换行了，因为上面加上了endl（全称应该是endline）；这句结束";
	std::cout << "上一句没有用endl于是后果很明显，所以就没有换行。" << std::endl;

	int pause;
	std::cin >> pause;

}

//第一句#include <iostream>，告诉编译器我们将要用iostream库。
//尖括号里面是头文件的名字。
//一般情况下include都放在源文件最开始的地方

//iostream库里包含两个基础类型：istream输入流和ostream输出流
//标准库定义了四个IO对象，输入cin，输出cout；警告cerr，一般信息clog。

//向流中写入数据：
// <<是输出运算符，左侧是ostream对象，右侧是要打印的值；运算结果仍是左侧对象。
//endl是操纵符，效果：结束当前行，并将与设备关联的缓冲区中的内容刷到设备中

//从流中读取数据
// >>是输入运算符，左侧是istream对象，右侧是要读入的对象
//运算结果是istream对象

//关于std::XXX
// ::是域运算符
// std是命名空间
// std::cout 意思就是，我们要使用一个定义在命名空间std中的名字cout
//优点：避免在使用来自不同库中的相同名字的东西导致的冲突
//缺点：麻烦