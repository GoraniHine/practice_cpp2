# 12789번 코드 문제점 요약

## 1️⃣ pop이 연속으로 되어야 하는데 한 번만 처리

```cpp
else if(arr2[check] == now)
{
    arr2[check] = 0;
    check--;
    now++;
    continue;
}
```

문제:

스택 top이 now일 때 pop을 한 번만 수행

하지만 스택에는 연속으로 now, now+1, … 형태가 있을 수 있음

→ 연속 pop이 필요하지만 현재 코드는 한 번만 pop하고 다음 입력으로 넘어감

해결:

while문을 사용해서 스택 top이 now인 동안 반복적으로 pop

```cpp
while(check >= 0 && arr2[check] == now)
{
    arr2[check] = 0;
    check--;
    now++;
}
```

2️⃣ check가 -1인 상태에서 스택 접근 → 런타임 에러 가능
else if(arr2[check] > arr1[i] && arr2[check] != now)


문제:

스택이 비어 있는 경우(check == -1)에도 arr2[check] 접근

→ 배열 인덱스 -1 접근 → 정의되지 않은 동작(C++ 런타임 에러) 발생

해결:스택이 비어 있을 때는 push 조건을 별도로 처리

```cpp
else if(check == -1 || arr2[check] > arr1[i])
{
    check++;
    arr2[check] = arr1[i];

}
```
