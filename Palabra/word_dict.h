#pragma once
#ifndef WORD_DICT_H
#define WORD_DICT_H
#include<string>
#include<vector>
#include<iostream>
#include"meaning.h"
//�ֵ��еĵ����ࣨ�洢�ֵ��е���Ϣ)����Ϊ�գ���ʾ�����ڡ�
struct WordDict
{
	//Ӣ�ĵ���
	std::string word;
	//����
	std::string phonetic;
	std::vector<Meaning> meaning;
	int importance;
	//�ֵ��ǩ������CET-4
	std::vector<std::string> tag;
	//���������
	friend void operator<<(std::ostream &o, const WordDict &worddict);
	//���ݵ�����ĸ������
	friend bool operator<(const WordDict& a, const WordDict& b);
	inline operator std::string() { return word; }
};


//**************************
//the definition of inline functions
//**************************
inline bool operator<(const WordDict &a, const WordDict &b)
{
	return a.word < b.word;
}
#endif // !WORD_DICT_H