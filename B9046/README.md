### 에러 원인 1:
getline과 cin이 섞여 있을 때의 문제

cin >> T;  
getline(cin, input);

cin >> T; 는 정수를 입력받고 엔터(\n)는 버퍼에 남겨둡니다.  
그 다음 getline(cin, input);이 실행될 때,  
버퍼에 남아 있는 엔터('\n')를 바로 읽어버리기 때문에  
input은 빈 문자열이 됩니다.

해결 방법 1 cin.ignore() 사용

cin >> T;
cin.ignore(); // 버퍼에 남아있는 '\n' 제거  
이렇게 하면 첫 번째 getline부터 제대로 입력이 들어옵니다.

### 에러 원인 2:
문자열 입력 도중 공백으로 인한 잘못된 입력  
C++에서 cin >> input;은 공백(space, tab, newline)에서 입력을 끊습니다.

해결 방법 2 getline 사용

공백 포함 전체 라인을 한 번에 읽을 수 있습니다.






