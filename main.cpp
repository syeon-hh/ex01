

// 주석
// 설명 역할, 코드로 인식되지 않는다.

int main()
{
	//int : 자료형
	//i : 변수명
	
	//자료형 (크기 단위, byte) Data Type
	//정수형 : char(1), short(2), int(4), long(4), long long(8)
	//실수형 : float(4), double(8)
	
	int i = 0;

	// 1 바이트로 양수만 표현
	// 256가지 -> 0 ~ 255
	unsigned char c = 0; //양수를 표현할 때는 unsigned char
	                     //음수를 표현할 때는 signed char(signed 는 음수, 양수를 다 표현할 수 있으므로 생략함)

	c = 0; // = 대입연산자
	c = 255;

	// 1 바이트로 양수, 음수 둘다 표현
	// -128 ~ 0 ~ 127
	char c1 = 0;
	c1 = -1;
	




	return 0;
}