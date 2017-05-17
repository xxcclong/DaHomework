#pragma once
#include"word_dict.h"
#include"set"
//�ʵ��࣬�������е��ʺͽ���
class Dict
{
private:
	//�����޸�
	const std::set<WordDict> dict_;
public:
	//�����ʼ��
	Dict(std::set<WordDict> & dict);
	Dict(std::set<WordDict> && dict) noexcept;
	~Dict();
	//inline void insert(const WordDict &word);//dict���ܲ��룬ֻ�ܳ�ʼ��
	
	inline const std::set<WordDict>::const_iterator cbegin() const;
	inline const std::set<WordDict>::const_iterator cend() const;
	//���ҵ���
	WordDict Search(const std::string& word) const;
	//���������б�
	const std::vector<std::string> WordList() const;
};

//**************************
//the definition of inline functions
//**************************
inline const std::set<WordDict>::const_iterator Dict::cbegin() const
{
	return dict_.cbegin();
}
inline const std::set<WordDict>::const_iterator Dict::cend() const
{
	return dict_.cend();
}
