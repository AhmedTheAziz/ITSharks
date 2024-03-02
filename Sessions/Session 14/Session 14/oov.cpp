#include "oov.h"

oov::oov() : count(0)
{
}

oov::oov(int c) : count(c)
{
}

int oov::g_count()
{
	return count;
}

oov oov::operator++()
{
	count++;
	return oov(count);
}

oov oov::operator--()
{
	--count;
	return oov(count);
}
