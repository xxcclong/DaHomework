#pragma once
#ifndef SHELL_WINDOWS_H
#define SHELL_WINDOWS_H
#include<vector>
#include<string>
#include"operation.h"
//HACK:�Ƿ���Ҫ�̳�
class ShellWindows :Operation
{
public:
	ShellWindows();
	~ShellWindows();
	// CLI�������
	virtual void Execute(const std::vector<std::string> &parameter = std::vector<std::string>()) override;
	// �������
private:
	std::string username_;
	void PrintWelcome() const;
	void PrintHelp() const;
	void PrintLoginInformation() const;
	void Login();
};

#endif  // !SHELL_WINDOWS_H
