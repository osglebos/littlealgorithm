#pragma once
#include <string>
#include <vector>
class Algorithm
{
public:
	char *name;
	std::vector<std::vector<int>> data;
	Algorithm();
	Algorithm(std::vector<std::vector<int>>);
	Algorithm(char*);
	bool LoadData(std::vector<std::vector<int>>);
	bool LoadData(char*);
	bool LoadData(int ** arr, int rows, int cols);
	virtual void Run();
protected:
	int GetStrCount(std::ifstream&);
	int GetColCount(std::ifstream&);
	virtual bool validateData();
};

