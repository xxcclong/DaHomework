#pragma once
#ifndef LOAD_TXT_SIMPLE_H
#define LOAD_TXT_SIMPLE_H
#include "load_strategy.h"
//���شʵ��ļ������ڼ��ز��Ը�ʽ
class LoadTxtSimple :
	public LoadStrategy
{
public:
	LoadTxtSimple();
	virtual ~LoadTxtSimple();
	virtual const Dict Load(const std::string &path) override;
};


#endif  // !LOAD_TXT_SIMPLE_H