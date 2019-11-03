#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>

#include <boost/multiprecision/cpp_int.hpp>
namespace BM = boost::multiprecision;
#include <boost/multiprecision/random.hpp>
namespace BR = boost::random;
#include <boost/multiprecision/miller_rabin.hpp>

struct Key
{
	BM::int1024_t nkey;
	BM::int1024_t ekey;
	//��Կ��ekey��nkey��
	BM::int1024_t dkey;
	//˽Կ��dkey��nkey��
};

class RSA
{
public:
	RSA();
	Key GetKey();
	void ecrept(const char* plain_file_in, const char* ecrept_file_out, BM::int1024_t ekey, BM::int1024_t nkey);
	void decrept(const char* ecrept_file_in, const char* plain_file_out, BM::int1024_t dkey, BM::int1024_t nkey);
	std::vector<BM::int1024_t> ecrept(std::string& str_in, BM::int1024_t ekey, BM::int1024_t nkey);
	std::string decrept(std::vector<BM::int1024_t>& ecrept_str, BM::int1024_t dkey, BM::int1024_t nkey);
	void printInfo(std::vector<BM::int1024_t>& ecrept_str);
private:
	BM::int1024_t Mod_exp(const BM::int1024_t msg, const BM::int1024_t key, const BM::int1024_t nkey);//ģ������
	BM::int1024_t produce_prime();//��������
	bool is_prime(BM::int1024_t n);//�ж��Ƿ�Ϊ����
	void produce_keys();//������Կ
	BM::int1024_t produce_nkey(BM::int1024_t prime1, BM::int1024_t prime2);//����n
	BM::int1024_t produce_orla(BM::int1024_t prime1, BM::int1024_t prime2);//��f(n)
	BM::int1024_t produce_ekey(BM::int1024_t orla);//������Կe
	BM::int1024_t produce_gcd(BM::int1024_t ekey, BM::int1024_t orla);//�����Լ��
	BM::int1024_t produce_dkey(BM::int1024_t ekey, BM::int1024_t orla);//��˽Կ
private:
	Key _key;
};

