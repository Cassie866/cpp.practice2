#include <iostream>
using namespace std;


class Person1
{
public:
	void Print()
	{
		cout << "name:" << _name << endl;
		cout << "age:" << _age << endl;
	}
protected:
	string _name = "peter"; // 姓名
	int _age = 18; // 年龄
};

class Student1 : public Person1
{
protected:
	int _stuid; // 学号
};

class Teacher1 : public Person1
{
protected:
	int _jobid; // 工号
};

void Test1()
{
	Student1 s;
	Teacher1 t; 
	s.Print();
	t.Print();
}



class Person2
{
protected:
	string _name; // 姓名
	string _sex; // 性别
	int _age; // 年龄
};

class Student2 : public Person2
{
public:
	int _No; // 学号
};

void Test2()
{
	Student2 sobj;
	// 1.子类对象可以赋值给父类对象/指针/引用
	Person2 pobj = sobj;
	Person2* pp = &sobj;
	Person2& rp = sobj;
	
	//2.基类对象不能赋值给派生类对象
	//sobj = pobj;
	
	// 3.基类的指针可以通过强制类型转换赋值给派生类的指针
	pp = &sobj;
	Student2 * ps1 = (Student2*)pp; // 这种情况转换是可以的。
	ps1->_No = 10;
	
	//pp = &pobj;
	//Student2* ps2 = (Student2*)pp; // 这种情况转换时虽然可以，但是会存在越界访问的问题
	//ps2->_No = 10;
}


 //Student的_num和Person的_num构成隐藏关系，可以看出这样代码虽然能跑，但是非常容易混淆
class Person3
{
protected:
	string _name = "小李子"; // 姓名
	int _num = 111; // 身份证号
};

class Student3 : public Person3
{
public:
	void Print()
	{
		cout << " 姓名:" << _name << endl;
		cout << " 身份证号:" << Person3::_num << endl;
		cout << " 学号:" << _num << endl;
	}
protected:
	int _num = 999; // 学号
};

void Test3()
{
	Student3 s1;
	s1.Print();
};



// B中的fun和A中的fun不是构成重载，因为不是在同一作用域
// B中的fun和A中的fun构成隐藏，成员函数满足函数名相同就构成隐藏。
class A 
{
public:
	void fun()
	{
		cout << "func()" << endl;
	}
};

class B : public A 
{
public:
	void fun(int i)
	{
		A::fun();
		cout << "func(int i)->" << i << endl;
	}
};

void Test4()
{
	B b; 
	b.fun(10);
};



class Person4
{
public:
	Person4(const char* name = "peter")
		: _name(name)
	{
		cout << "Person()" << endl;
	}
	Person4(const Person4& p)
		: _name(p._name)
	{
		cout << "Person(const Person& p)" << endl;
	}
	Person4& operator=(const Person4& p)
	{
		cout << "Person operator=(const Person& p)" << endl;
		if (this != &p)
			_name = p._name;
		return *this;
	}
	~Person4()
	{
		cout << "~Person()" << endl;
	}	
protected:
	string _name; // 姓名
};

class Student4 : public Person4
{
public:
	Student4(const char* name, int num)
		: Person4(name)
		, _num(num)
	{
		cout << "Student()" << endl;
	}
	Student4(const Student4& s)
		: Person4(s)
		, _num(s._num)
	{
		cout << "Student(const Student& s)" << endl;
	}
	Student4& operator = (const Student4& s)
	{
		cout << "Student& operator= (const Student& s)" << endl;
		if (this != &s)
		{
			Person4::operator =(s);
			_num = s._num;
		}
		return *this;
	}
	~Student4()
	{
		cout << "~Student()" << endl;
	}
protected:
	int _num; //学号
};

void Test5()
{
	Student4 s1("jack", 18);
	Student4 s2(s1);
	Student4 s3("rose", 17);
	s1 = s3;
}



// C++98中构造函数私有化，派生类中调不到基类的构造函数。则无法继承
class NonInherit
{
public:
	static NonInherit GetInstance()
	{
		return NonInherit();
	}
private:
	NonInherit()
	{}
};

// C++11给出了新的关键字final禁止继承
class NonInherit2 final
{};



class Student5;

class Person5
{
public:
	friend void Display(const Person5& p, const Student5& s);
protected:
	string _name; // 姓名
};

class Student5 : public Person5
{
protected:
	int _stuNum; // 学号
};

void Display(const Person5& p, const Student5& s) {
	cout << p._name << endl;
	//cout << s._stuNum << endl;   //不可访问
}

class Person6
{
public:
	Person6() { ++_count; }
protected:
	string _name; // 姓名
public:
	static int _count; // 统计人的个数。
};

int Person6::_count = 0;

class Student6 : public Person6
{
protected:
	int _stuNum; // 学号
};

class Graduate : public Student6
{
protected:
	string _seminarCourse; // 研究科目
};

void Test6()
{
	Student6 s1;
	Student6 s2;
	Student6 s3;
	Graduate s4;
	cout << " 人数 :" << Person6::_count << endl;
	Student6::_count = 0;
	cout << " 人数 :" << Person6::_count << endl;
}


class Person7
{
public:
	string _name; // 姓名
};

class Student7 : public Person7
{
protected:
	int _num; //学号
};

class Teacher7 : public Person7
{
protected:
	int _id; // 职工编号
};

class Assistant1 : public Student7, public Teacher7
{
protected:
	string _majorCourse; // 主修课程
};
void Test7()
{
	// 这样会有二义性无法明确知道访问的是哪一个
	Assistant1 a;
	//a._name = "peter";
	// 需要显示指定访问哪个父类的成员可以解决二义性问题，但是数据冗余问题无法解决
	a.Student7::_name = "xxx"; 
	a.Teacher7::_name = "yyy";
}

class Person8
{
public:
	string _name; // 姓名
};

class Student8 : virtual public Person8
{
protected:
	int _num; //学号
};

class Teacher8 : virtual public Person8
{
protected:
	int _id; // 职工编号
};

class Assistant2 : public Student8, public Teacher8
{
protected:
	string _majorCourse; // 主修课程
};

void Test8()
{
	Assistant2 a;
	a._name = "peter";
}




class A2 
{
public:
	int _a;
};

// class B : public A
class B2 : virtual public A2 
{
public:
	int _b;
};

// class C : public A
class C2 : virtual public A2 
{
public:
	int _c;
};
class D2 : public B2, public C2 
{
public:
	int _d;
};

void Test9()
{
	D2 d; 
	d.B2::_a = 1; 
	d.C2::_a = 2; 
	d._b = 3; 
	d._c = 4; 
	d._d = 5;
}



int main()
{
	Test1();
	return 0;
}