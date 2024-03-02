#pragma once
class oov
{
private:
	int count;
public:
	oov();
	oov(int c);
	int g_count();
	oov operator ++();
	oov operator --();
};

