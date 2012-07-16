#include "code.h"

using namespace std;

int* encrypt(int a[],int b[])
{
	for (int i=0;i<maxLength;i++)
		b[i] = 0;

	for (int i=0;i<maxLength;i++)
		for (int j=0;j<maxLength;j++)
		{
			b[i]+=a[j]*codeMatrix[i][j];
		}
	return b;
}

int* decipher(int a[],int c[])
{
	for (int i=0;i<maxLength;i++)
		c[i] = 0;

	for (int i=0;i<maxLength;i++)
		for (int j=0;j<maxLength;j++)
		{
			c[i]+=a[j]*antiCodeMatrix[i][j];
		}

	for (int i=0;i<maxLength;i++)
		c[i] = c[i]/20820;

	return c;
}

paswd::paswd(int)
{
	word = "";
}

paswd::paswd(string tmp)
{
	word = tmp;
}

int paswd::pass(string tmp)
{
	return tmp.compare(word);//相等为0，不相等不为0
}

