#pragma once
class exceptie
{
public:
	exceptie() = default;
	virtual const char* what() const throw() = 0;
};

class exceptie1 : public exceptie
{
public:
	exceptie1() = default;
	virtual const char* what() const throw()
	{
		return "Impartire la 0!";
	}
};

class exceptie2 : public exceptie
{
public:
	exceptie2() = default;
	virtual const char* what() const throw()
	{
		return "Indexul este inafara domeniului!";
	}
};


