#include "RSA.h"
#include <boost/multiprecision/cpp_int.hpp>
namespace BM = boost::multiprecision;
#include <boost/multiprecision/random.hpp>
namespace BR = boost::random;
#include <boost/multiprecision/miller_rabin.hpp>

void ecrept(const char* plain_file_in, const char* ecrept_file_out,
	BM::int1024_t ekey, BM::int1024_t nkey)
{
	std::ifstream fin(plain_file_in);
	std::ofstream fout(ecrept_file_out);
	if (!fin.is_open())
	{
		std::cout << "open file failed" << std::endl;
		return;
	}
	const int NUM = 256;
	char buffer[NUM];
	int curNum;
	long buffer_out[NUM];
	//文件打开，按块读取，逐段加密
	while (!fin.eof())
	{
		fin.read(buffer, NUM);
		//当前读了多少个
		curNum = fin.gcount();
		for (int i = 0; i < curNum; i++)
		{
			buffer_out[i] = ecrept((long)buffer[i], ekey, nkey);
		}
		fout.write((char*)buffer_out, curNum * sizeof(long));
	}
}
void decrept(const char* ecrept_file_in, const char* plain_file_out,
	BM::int1024_t dkey, BM::int1024_t nkey)
{
	std::ifstream fin(ecrept_file_in);
	std::ofstream fout(plain_file_out);
	if (!fin.is_open())
	{
		std::cout << "open file failed" << std::endl;
		return;
	}
	const int NUM = 256;
	long buffer[NUM];
	long buffer_out[NUM];
	int curNum;
	//文件打开，按块读取，逐段加密
	while (!fin.eof())
	{
		fin.read(buffer, NUM * sizeof(long));
		//当前读取字节数
		curNum = fin.gcount();
		curNum /= sizeof(long);
		for (int i = 0; i < curNum; i++)
		{
			buffer_out[i] = (char)ecrept(buffer[i], dkey, nkey);
		}
		fout.write(buffer_out, curNum);
	}
	fin.close();
	fout.close();
}

BM::int1024_t RSA::produce_prime()
{
	BR::mt19937 gen(time(nullptr));
	BR::uniform_int_distribution<BM::int1024_t> primeS(2, BM::int1024_t(1) << 128);
	BM::int1024_t prime = 0;
	while (1)
	{
		prime = primeS(gen);
		if (is_prime(prime))
		{
			break;
		}
	}
	return prime;
}

bool RSA::is_prime(BM::int1024_t n)
{
	if (n < 2)
	{
		return false;
	}
}

void RSA::produce_keys()
{
	BM::int1024_t p1 = produce_prime();
	BM::int1024_t p2 = produce_prime();
	BM::int1024_t n = produce_nkey(p1, p2);
	BM::int1024_t orla = produce_orla(p1, p2);
	BM::int1024_t ekey = produce_ekey(orla);
	//BM::int1024_t dkey = Mod_exp();
}

BM::int1024_t RSA::produce_nkey(BM::int1024_t p1, BM::int1024_t  p2)
{
	return p1 * p2;
}

BM::int1024_t RSA::produce_orla(BM::int1024_t p1, BM::int1024_t p2)
{
	return (p1 - 1) * (p2 - 1);
}

//求最大公约数
BM::int1024_t produce_gcd(BM::int1024_t ekey, BM::int1024_t orla)
{
	if (orla == 0)
		return orla;
	return produce_gcd(orla, ekey % orla);
}

//产生公钥
BM::int1024_t produce_ekey(BM::int1024_t orla)
{
	srand(time(nullptr));
	BM::int1024_t e = rand() % orla;
	while (1)
	{
		if (e == 1 && produce_gcd(e, orla) != 1)
		{
			e = rand() % orla;
		}
		return e;
	}
}

//模幂运算
BM::int1024_t RSA::Mod_exp(const BM::int1024_t msg, const BM::int1024_t key, const BM::int1024_t nkey)
{
	BM::int1024_t a = msg;
	BM::int1024_t b = key;
	BM::int1024_t c = nkey;
	BM::int1024_t msg_out = 1;
	while (b)
	{
		if (b & 1)
		{
			msg_out = (msg_out * a) % c;
		}
		b >> 1;
		a = (a * a) % c;
	}
	return msg_out;
}

//产生私钥
BM::int1024_t RSA::produce_dkey(BM::int1024_t ekey, BM::int1024_t orla)
{

}






int main()
{
	return 0;
}
