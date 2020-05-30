//정적 전역변수는 다른 파일에서 사용할 수 없다.
void testglobal()
{
	extern gvar;
	gvar = 10;
}