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
	string _name = "peter"; // ����
	int _age = 18; // ����
};

class Student1 : public Person1
{
protected:
	int _stuid; // ѧ��
};

class Teacher1 : public Person1
{
protected:
	int _jobid; // ����
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
	string _name; // ����
	string _sex; // �Ա�
	int _age; // ����
};

class Student2 : public Person2
{
public:
	int _No; // ѧ��
};

void Test2()
{
	Student2 sobj;
	// 1.���������Ը�ֵ���������/ָ��/����
	Person2 pobj = sobj;
	Person2* pp = &sobj;
	Person2& rp = sobj;
	
	//2.��������ܸ�ֵ�����������
	//sobj = pobj;
	
	// 3.�����ָ�����ͨ��ǿ������ת����ֵ���������ָ��
	pp = &sobj;
	Student2 * ps1 = (Student2*)pp; // �������ת���ǿ��Եġ�
	ps1->_No = 10;
	
	//pp = &pobj;
	//Student2* ps2 = (Student2*)pp; // �������ת��ʱ��Ȼ���ԣ����ǻ����Խ����ʵ�����
	//ps2->_No = 10;
}


 //Student��_num��Person��_num�������ع�ϵ�����Կ�������������Ȼ���ܣ����Ƿǳ����׻���
class Person3
{
protected:
	string _name = "С����"; // ����
	int _num = 111; // ���֤��
};

class Student3 : public Person3
{
public:
	void Print()
	{
		cout << " ����:" << _name << endl;
		cout << " ���֤��:" << Person3::_num << endl;
		cout << " ѧ��:" << _num << endl;
	}
protected:
	int _num = 999; // ѧ��
};

void Test3()
{
	Student3 s1;
	s1.Print();
};



// B�е�fun��A�е�fun���ǹ������أ���Ϊ������ͬһ������
// B�е�fun��A�е�fun�������أ���Ա�������㺯������ͬ�͹������ء�
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
	string _name; // ����
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
	int _num; //ѧ��
};

void Test5()
{
	Student4 s1("jack", 18);
	Student4 s2(s1);
	Student4 s3("rose", 17);
	s1 = s3;
}



// C++98�й��캯��˽�л����������е���������Ĺ��캯�������޷��̳�
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

// C++11�������µĹؼ���final��ֹ�̳�
class NonInherit2 final
{};



class Student5;

class Person5
{
public:
	friend void Display(const Person5& p, const Student5& s);
protected:
	string _name; // ����
};

class Student5 : public Person5
{
protected:
	int _stuNum; // ѧ��
};

void Display(const Person5& p, const Student5& s) {
	cout << p._name << endl;
	//cout << s._stuNum << endl;   //���ɷ���
}

class Person6
{
public:
	Person6() { ++_count; }
protected:
	string _name; // ����
public:
	static int _count; // ͳ���˵ĸ�����
};

int Person6::_count = 0;

class Student6 : public Person6
{
protected:
	int _stuNum; // ѧ��
};

class Graduate : public Student6
{
protected:
	string _seminarCourse; // �о���Ŀ
};

void Test6()
{
	Student6 s1;
	Student6 s2;
	Student6 s3;
	Graduate s4;
	cout << " ���� :" << Person6::_count << endl;
	Student6::_count = 0;
	cout << " ���� :" << Person6::_count << endl;
}


class Person7
{
public:
	string _name; // ����
};

class Student7 : public Person7
{
protected:
	int _num; //ѧ��
};

class Teacher7 : public Person7
{
protected:
	int _id; // ְ�����
};

class Assistant1 : public Student7, public Teacher7
{
protected:
	string _majorCourse; // ���޿γ�
};
void Test7()
{
	// �������ж������޷���ȷ֪�����ʵ�����һ��
	Assistant1 a;
	//a._name = "peter";
	// ��Ҫ��ʾָ�������ĸ�����ĳ�Ա���Խ�����������⣬�����������������޷����
	a.Student7::_name = "xxx"; 
	a.Teacher7::_name = "yyy";
}

class Person8
{
public:
	string _name; // ����
};

class Student8 : virtual public Person8
{
protected:
	int _num; //ѧ��
};

class Teacher8 : virtual public Person8
{
protected:
	int _id; // ְ�����
};

class Assistant2 : public Student8, public Teacher8
{
protected:
	string _majorCourse; // ���޿γ�
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