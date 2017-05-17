#pragma once
#ifndef LOAD_STRATEGY_H
#define LOAD_STRATEGY_H
#include <fstream>
#include"dict.h"
//���شʵ��ļ�
class LoadStrategy
{
public:
	LoadStrategy();
	//��ֹ����
	//LoadStrategy(const LoadStrategy &orig) = delete;
	virtual ~LoadStrategy();
	//���شʵ��ļ�
	virtual const Dict Load(const std::string &path) = 0;
};



#endif  // !LOAD_STRATEGY_H
