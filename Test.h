#pragma once
class Test final{
private:
	Test();
	~Test();
public:
	Test(const Test& obj) = delete;
	Test&operator=(const Test& obj) = delete;

	static Test* GetInstance();
};