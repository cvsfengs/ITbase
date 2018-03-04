//动机:根据不同的按钮,展现相应的外观
//大致实现:根据传入的参数选择基类的具体实现,返回基类
//应用举例:JAVA获取不同加密算法的密钥生成器:KeyGenerator.getInstance("DESede");
#include <iostream>
#include "src/Factory.h"
#include "src/Product.h"

using namespace std;

int main(int argc, char *argv[])
{
	Product* prod=Factory::createProduct("A");
		
	prod->Use();
	
	delete prod;
	
	return 0;
}
