//function pointer using typedef


int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}


int main()
{
	typedef int(*fpointer)(int,int);
	fpointer fadd=add;
	fpointer fsun=sub;
}

