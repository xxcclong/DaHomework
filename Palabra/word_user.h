#pragma once
#ifndef WORD_USER_H
#define WORD_USER_H
#include<string>
#include<vector>
#include"sentence.h"
//�û��ĵ����ࣨ�洢�û����ڵ��ʵ���Ϣ��
struct WordUser
{
	std::string note;
	std::vector<Sentence> sentence;
	std::vector<std::string> tag;
	int review_num;
	int error_num;
	int last_appear_time;
	int importance;
};
#endif  // !WORD_USER_H