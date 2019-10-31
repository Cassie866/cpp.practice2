#include <iostream>
#include <string>

int main()
{
	////构造函数
	//std::string s0("caomingge");
	//std::string s1;
	//std::string s2(s0);
	//std::string s3(s0, 5, 3);
	//std::string s4("lixingyue");
	//std::string s5("yinwenhui",5);
	//std::string s6a(10, 'x');
	//std::string s6b(10, 42);    
	//std::string s7(s0.begin(), s0.begin() + 5);

	//std::cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3;
	//std::cout << "\ns4: " << s4 << "\ns5: " << s5 << "\ns6a: " << s6a;
	//std::cout << "\ns6b: " << s6b << "\ns7: " << s7 << '\n';

	////=赋值运算符
	//std::string str1, str2, str3;
	//str1 = "Test string: ";   // c-string
	//str2 = 'x';               // single character
	//str3 = str1 + str2;       // string

	//std::cout << str3 << '\n';

	////迭代器
	//std::string str("Test string");
	//for (std::string::iterator it = str.begin(); it != str.end(); ++it)
	//	std::cout << *it;
	//std::cout << '\n';

	//std::string str5("now step live...");
	//for (std::string::reverse_iterator rit = str5.rbegin(); rit != str5.rend(); ++rit)
	//	std::cout << *rit;
	//std::cout << '\n';


	/*std::string str("I like to code in C");
	std::cout << str << '\n';

	unsigned sz = str.size();

	str.resize(sz + 2, '+');
	std::cout << str << '\n';

	str.resize(14);
	std::cout << str << '\n';*/

	std::string str("Test string");
	std::cout << "size: " << str.size() << "\n";
	std::cout << "length: " << str.length() << "\n";
	std::cout << "capacity: " << str.capacity() << "\n";
	std::cout << "max_size: " << str.max_size() << "\n";
	return 0;
}
