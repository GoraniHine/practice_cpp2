#include "Struct.h" // Struct.h를 불러옴 -> 전처리 지시자
// 헤더 파일을 여러 파일에 포함시킬 때에, 반드시 단 한 번만 포함시켜야 함
/* 전처리 지시문
컴파일러가 소스 코드를 컴파일하기 전에
전처리기(preprocessor) 가 먼저 읽고 처리하는 명령
*/

/* 헤더파일
1. 함수 원형
2. #define이나 const를 사용하는 기호 상수
3. 구조체 선언
4. 클래스
5. 템플릿
6. 인라인
*/

int main()
{
	MyStruct PandaCoding =
	{
		"Panda",
		26
	};

	display(PandaCoding);

	return 0;
}

