# 01. 자료형과 변수

## 자료형과 변수

- **문제 01-01**
    
    ### 문제
    
    ```
    다음 보기의 설명과 관계가 있는 C언어 변수들의 종류를 쓰시오.
    "프로그램의 실행 시작 시점에 기억장소를 할당받아 실행이 끝날 때까지 지속적으로 기억장소를 유지한다."
    ```
    
    ### 정답
    
    전역 변수 (Global Variable) 또는 정적 변수 (Static Variable)
    
    ### 설명
    
    C언어에서 변수는 선언되는 위치와 저장 방식(Storage Class)에 따라 메모리 유지 기간이 다릅니다.
    - 지역 변수(Local Variable): 함수 내부에서 선언되며, 함수가 호출될 때 메모리가 할당되고 함수가 종료되면 메모리에서 사라집니다.
    - 전역 변수(Global Variable): 함수 외부에서 선언되며, 프로그램 시작 시 메모리(데이터 영역)에 할당되어 프로그램이 끝날 때까지 유지됩니다.
    - 정적 변수(Static Variable): `static` 키워드를 붙여 선언하며, 지역 변수처럼 특정 함수 내에서만 쓰이더라도 메모리는 프로그램이 끝날 때까지 유지되어 값이 지워지지 않습니다.
    
- **문제 01-02**
    
    ### 문제
    
    ```
    다음 변수 선언 중 올바르지 않은 변수명을 골라 적으시오.
    ㉠ LHJ_1       ㉢ 1_1                ㉤ long
    ㉦ h_birth     ㉨ start*key
    ㉡ $TIME       ㉣ name and address   ㉥ doublk
    ㉧ __ok
    ```
    
    ### 정답
    
    ㉡ $TIME, ㉢ 1_1, ㉣ name and address, ㉤ long, ㉨ start*key
    
    ### 설명
    
    C언어의 식별자(변수명) 작성 규칙에 어긋나는 것들입니다.
    
    올바르지 않은 이유:
    - ㉡ $TIME : 특수기호는 언더바(_)만 사용할 수 있습니다. ($ 사용 불가)
    - ㉢ 1_1 : 변수명은 숫자로 시작할 수 없습니다. (영문자나 언더바로 시작해야 함)
    - ㉣ name and address : 변수명 중간에 공백(띄어쓰기)을 포함할 수 없습니다.
    - ㉤ long : C언어에서 미리 의미를 정해둔 예약어(키워드)는 변수명으로 사용할 수 없습니다. (int, long, double, if, for 등)
    - ㉨ start*key : 특수기호(*)를 포함할 수 없으며, 수식 연산자로 인식되어 오류가 발생합니다.
    
    올바른 변수명:
    - ㉠ LHJ_1 (영문자로 시작, 숫자와 언더바 포함 가능)
    - ㉥ doublk (’double’은 예약어지만 ’doublk’은 예약어가 아니므로 사용 가능)
    - ㉦ h_birth (영문자로 시작, 언더바 포함)
    - ㉧ __ok (언더바로 시작 가능)
    

# 02. 입출력 함수 / 연산자

## 입출력 함수 / 연산자

- **문제 02-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        printf("%d%o%x\n", 10, 10, 10);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 12 a
    ```
    
    ### 설명
    
    서식 지정자(Format Specifier)에 따라 같은 숫자 10을 다르게 출력합니다.
    %d : 10진수(Decimal)로 출력 -> 10
    %o : 8진수(Octal)로 출력 -> 10진수 10은 8진수로 12
    %x : 16진수(Hexadecimal)로 출력 (소문자) -> 10진수 10은 16진수로 a
    
- **문제 02-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        printf("A\nB\tC");
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    A
    B       C
    ```
    
    ### 설명
    
    이스케이프 시퀀스(제어 문자)의 쓰임새를 묻는 문제입니다.
    : 줄바꿈(New line)을 수행합니다. A 출력 후 줄이 바뀝니다.
     탭(Tab)만큼 간격을 띄웁니다. B 출력 후 탭 공간만큼 띄우고 C를 출력합니다.
    
- **문제 02-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 5;
        int b = 0;
        b = a++;
    
        printf("%d%d\n", a, b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6 5
    ```
    
    ### 설명
    
    a++ 는 ’후위(Postfix) 증감 연산자’입니다.
    변수 b에 a의 현재 값(5)을 먼저 대입한 다음, a의 값을 1 증가(6)시킵니다.
    따라서 최종적으로 a는 6이 되고, b는 5가 됩니다.
    
- **문제 02-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 3, b = 5;
        printf("%d\n", a > 2 && b < 10);
        printf("%d\n", a == 4 || b == 5);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1
    1
    ```
    
    ### 설명
    
    C언어에서 논리 연산의 결과가 ’참(True)’이면 1, ’거짓(False)’이면 0을 반환합니다.
    a > 2 (참) && b < 10 (참) -> 참(1) AND 참(1) 이므로 1
    a == 4 (거짓) || b == 5 (참) -> 거짓(0) OR 참(1) 이므로 둘 중 하나가 참이므로 1
    
- **문제 02-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 7;
        printf("%d%d%d\n", a & b, a | b, a ^ b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 15 13
    ```
    
    ### 설명
    
    비트(2진수) 단위 연산자입니다. (10 = 1010, 7 = 0111)
    a & b (AND) : 두 비트가 모두 1일 때만 1 -> 1010 & 0111 = 0010(10진수로 2)
    a | b (OR) : 두 비트 중 하나라도 1이면 1 -> 1010 | 0111 = 1111(10진수로 15)
    a ^ b (XOR) : 두 비트가 서로 다를 때만 1 -> 1010 ^ 0111 = 1101(10진수로 13)
    
- **문제 02-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int x = 10;
        printf("%d%d\n", x << 1, x >> 1);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20 5
    ```
    
    ### 설명
    
    시프트(Shift) 연산자입니다. 비트를 왼쪽이나 오른쪽으로 밀어냅니다.
    x << 1 : 비트를 왼쪽으로 1칸 밉니다. 숫자가 2배가 됩니다. (10 * 2 = 20)
    x >> 1 : 비트를 오른쪽으로 1칸 밉니다. 숫자가 1/2배가 됩니다. (10 / 2 = 5)
    
- **문제 02-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 3;
        int result;
    
        // 조건식 ? 참일 때 반환값 : 거짓일 때 반환값;
        result = (a > b) ? a - b : b - a;
        printf("%d\n", result);
    
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7
    ```
    
    ### 설명
    
    삼항 연산자 문제입니다.
    조건식 (10 > 3)이 참(True)이므로 ? 바로 뒤에 있는 a - b 연산을 수행합니다.
    따라서 10 - 3 = 7이 result에 저장됩니다. (결과적으로 두 수의 차이를 구하는 식입니다.)
    
- **문제 02-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 5;
        a += 3;
        a *= 2;
    
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    16
    ```
    
    ### 설명
    
    복합 대입 연산자입니다.
    a += 3; 은 a = a + 3; 과 같습니다. a는 8이 됩니다.
    a *= 2; 는 a = a*  2; 와 같습니다. 현재 a가 8이므로 8 * 2 = 16이 됩니다.
    
- **문제 02-09**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        char c = 'A';
        printf("%d%c\n", c + 1, c + 1);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    66 B
    ```
    
    ### 설명
    
    C언어에서 문자는 내부적으로 아스키(ASCII) 코드 값인 정수로 저장됩니다. ’A’의 아스키 코드값은 65입니다.
    c + 1은 65 + 1이 되어 66이 됩니다.
    %d 로 출력하면 정수 형태인 66이 그대로 출력되고,
    %c 로 출력하면 아스키 코드 66에 해당하는 문자 ’B’가 출력됩니다.
    
- **문제 02-10**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 010;
        int b = 0x10;
    
        printf("%d%d\n", a, b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    8 16
    ```
    
    ### 설명
    
    C언어의 숫자 표기법 문제입니다.
    숫자 앞에 ’0’이 붙으면 8진수를 의미합니다. 8진수 10은 10진수로 변환하면 8입니다.
    숫자 앞에 ’0x’가 붙으면 16진수를 의미합니다. 16진수 10은 10진수로 변환하면 16입니다.
    
- **문제 02-11**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 3, b = 4;
        int result = a++ * ++b;
    
        printf("%d%d%d\n", a, b, result);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4 5 15
    ```
    
    ### 설명
    
    전위/후위 증감 연산자가 섞인 문제입니다.
    1. ++b (전위) : 먼저 b의 값을 1 증가시킵니다. b는 5가 되고 이 5가 연산에 사용됩니다.
    2. a++ (후위) : 현재의 a값(3)을 먼저 연산에 사용하고, 나중에 a를 1 증가시킵니다.
    3. 연산 : 3(현재 a값) * 5(증가된 b값) = 15. 이 값이 result에 저장됩니다.
    4. 연산이 끝난 후 a의 값이 1 증가하여 4가 됩니다.
    결과적으로 a=4, b=5, result=15 가 됩니다.
    
- **문제 02-12**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int x = 5;
        int y = 2;
        int r = x > 3 ? x << 1 : y >> 1;
    
        printf("%d\n", r);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10
    ```
    
    ### 설명
    
    삼항 연산자와 시프트 연산자의 복합 문제입니다.
    x > 3 (5 > 3) 조건이 참이므로 앞부분인 x << 1 이 수행됩니다.
    x(5)의 비트를 왼쪽으로 1칸 밀면 값이 2배가 되므로 5 * 2 = 10이 r에 저장됩니다.
    
- **문제 02-13**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        char c = 'A';
        c = c + 5;
    
        putchar(c);
        putchar('\n');
        printf("%d\n", c);
    
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    F
    70
    ```
    
    ### 설명
    
    ‘A’의 아스키코드 값은 65입니다. 여기에 5를 더하면 70이 되고, 이는 아스키코드로 문자 ’F’에 해당합니다.
    putchar(c) : 하나의 문자를 출력하는 함수입니다. ’F’가 출력됩니다.
    putchar(’’) : 줄바꿈 문자를 출력하여 다음 출력이 아랫줄에 나오게 합니다.
    printf(“%d”, c) : 변수 c(70)를 정수 형태로 출력합니다.
    
- **문제 02-14**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10;
        int b = 3;
        int r = a / b + a % b * 2;
    
        printf("%d\n", r);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5
    ```
    
    ### 설명
    
    산술 연산자들의 우선순위를 묻는 문제입니다.
    나눗셈(/), 나머지(%), 곱셈(*)은 덧셈(+)보다 우선순위가 높으며, 같은 순위일 때는 왼쪽에서 오른쪽으로 계산합니다.
    1. a / b : 10 / 3 의 몫인 3
    2. a % b : 10 % 3 의 나머지인 1
    3. 2번의 결과에 2를 곱함 : 1*  2 = 2
    4. 마지막으로 덧셈 수행 : 3 + 2 = 5
    
- **문제 02-15**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 4, b = 7;
    
        a ^= b;
        b &= a;
    
        printf("%d%d\n", a, b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 3
    ```
    
    ### 설명
    
    비트 연산 복합 대입 문제입니다. (4 = 0100, 7 = 0111)
    a ^= b : a = a ^ b -> 0100 ^ 0111 = 0011(10진수로 3). 이제 a는 3입니다.
    b &= a : b = b & a -> 0111 & 0011 = 0011(10진수로 3). b도 3이 됩니다.
    따라서 a, b 모두 3이 출력됩니다.
    

# 03. 제어문

## 제어문

- **문제 03-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10;
        if (a > 5) {
            printf("OK");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    OK
    ```
    
    ### 설명
    
    변수 a의 값이 10이므로 조건식 (a > 5)가 참(True)이 됩니다.
    따라서 if문 블록 안의 printf(“OK”); 가 실행됩니다.
    
- **문제 03-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 3;
        if (a == 5) {
            printf("A");
        }
        else {
            printf("B");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    B
    ```
    
    ### 설명
    
    a의 값은 3이므로 (a == 5) 조건은 거짓(False)입니다.
    if문이 거짓이므로 else 블록으로 넘어가 “B”를 출력합니다.
    
- **문제 03-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 7;
        if (n % 2 == 0) {
            printf("Even");
        }
        else {
            printf("Odd");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Odd
    ```
    
    ### 설명
    
    7을 2로 나눈 나머지(%)는 1입니다. 즉 (1 == 0)은 거짓입니다.
    짝수인지 판별하는 조건에 맞지 않으므로 else로 넘어가 홀수를 의미하는 “Odd”를 출력합니다.
    
- **문제 03-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int age = 18;
        if (age >= 20) {
            printf("A");
        }
        else {
            printf("B");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    B
    ```
    
    ### 설명
    
    age(18)는 20 이상이 아니므로 조건이 거짓입니다. else 블록이 실행되어 “B”가 출력됩니다.
    
- **문제 03-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int score = 85;
        if (score >= 90) {
            printf("A");
        }
        else if (score >= 80) {
            printf("B");
        }
        else {
            printf("F");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    B
    ```
    
    ### 설명
    
    여러 조건을 순차적으로 검사하는 if-else if 구문입니다.
    첫 번째 조건(85 >= 90)은 거짓이므로 다음 조건으로 넘어갑니다.
    두 번째 조건(85 >= 80)은 참이므로 “B”를 출력하고, 전체 if-else 제어문을 종료(빠져나옴)합니다.
    
- **문제 03-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int num = -3;
        if (num > 0) {
            printf("plus");
        }
        else if (num == 0) {
            printf("zero");
        }
        else {
            printf("minus");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    minus
    ```
    
    ### 설명
    
    num이 -3이므로 양수(> 0)도 아니고, 0(== 0)도 아닙니다.
    따라서 모든 조건이 거짓일 때 실행되는 else 블록으로 넘어가 “minus”를 출력합니다.
    
- **문제 03-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        char c = 'B';
        if (c == 'A') {
            printf("Apple");
        }
        else {
            printf("Banana");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Banana
    ```
    
    ### 설명
    
    변수 c에는 문자 ’B’가 들어있습니다. ’B’는 ’A’와 다르므로 else 블록이 실행됩니다.
    
- **문제 03-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 2;
        switch (n) {
            case 1:
                printf("One");
                break;
            case 2:
                printf("Two");
                break;
            default:
                printf("Other");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Two
    ```
    
    ### 설명
    
    n이 2이므로 ‘case 2:’ 의 코드가 실행되어 “Two”가 출력됩니다.
    출력 직후 break 문을 만나기 때문에, switch 문을 완전히 빠져나옵니다.
    
- **문제 03-09**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        char ch = 'C';
        switch (ch) {
            case 'A':
                printf("A");
                break;
            case 'B':
                printf("B");
                break;
            default:
                printf("Other");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Other
    ```
    
    ### 설명
    
    ch의 값이 ‘C’입니다. ’case A’나 ’case B’ 어디에도 해당하지 않습니다.
    해당하는 case가 없으므로 기본값인 default 코드가 실행되어 “Other”가 출력됩니다.
    
- **문제 03-10**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int day = 6;
        if (day == 6 || day == 7) {
            printf("Weekend");
        }
        else {
            printf("Weekday");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Weekend
    ```
    
    ### 설명
    
    논리합 연산자(||, OR)가 쓰였습니다.
    day가 6이거나 7이면 참입니다. day가 6이므로 첫 번째 조건이 참이 되어 전체가 참이 됩니다.
    
- **문제 03-11**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int v = 2;
        switch (v) {
            case 1:
            case 2:
            case 3:
                printf("Small");
                break;
            case 4:
                printf("Medium");
                break;
            default:
                printf("Large");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Small
    ```
    
    ### 설명
    
    의도적으로 break를 생략한 ‘Fall-through(폴스루)’ 기법입니다.
    v가 2이므로 case 2로 진입합니다. 그런데 case 2에 실행할 코드나 break가 없으므로 아래의 case 3으로 떨어집니다(Fall-through).
    case 3에 있는 printf(“Small”);을 실행하고, break를 만나 종료됩니다. (결과적으로 1, 2, 3일 때 모두 “Small” 출력)
    
- **문제 03-12**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 12;
        if (a % 3 == 0) {
            if (a % 2 == 0) {
                printf("A");
            }
            else {
                printf("B");
            }
        }
        else {
            printf("C");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    A
    ```
    
    ### 설명
    
    중첩 if문입니다.
    1. 첫 번째 조건 (12 % 3 == 0) : 참입니다. 내부 블록으로 들어갑니다.
    2. 내부 조건 (12 % 2 == 0) : 참입니다. 따라서 “A”를 출력합니다.
    12는 3의 배수이면서 2의 배수(짝수)이므로 “A”가 출력된 것입니다.
    
- **문제 03-13**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int age = 15;
        int height = 140;
    
        if (age >= 14 && height >= 150) {
            printf("A");
        }
        else if (age >= 14 || height >= 150) {
            printf("B");
        }
        else {
            printf("C");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    B
    ```
    
    ### 설명
    
    첫 번째 조건: 나이 14 이상(참) AND 키 150 이상(거짓). AND는 둘 다 참이어야 하므로 전체가 거짓이 됩니다.
    두 번째 조건: 나이 14 이상(참) OR 키 150 이상(거짓). OR은 하나만 참이어도 되므로 전체가 참이 되어 “B”를 출력합니다.
    
- **문제 03-14**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 5;
        int b = 10;
        if (a > 3)
            b = b + 5;
    
        printf("%d\n", b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    주의해야 할 문법입니다. if문 뒤에 중괄호 `{}`가 생략되면, 오직 “바로 밑에 있는 단 한 줄”의 코드만 if문의 영향을 받습니다.
    (a > 3)이 참이므로 `b = b + 5;`가 실행되어 b는 15가 됩니다.
    만약 조건이 거짓이었더라도, printf문은 if문과 상관없이 항상 실행됩니다.
    
- **문제 03-15**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int x = 0;
        int y = 3;
        if (x == 1)
            y++;
    
        y += 2;
        printf("%d\n", y);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5
    ```
    
    ### 설명
    
    C언어의 흔한 함정 문제입니다. 들여쓰기(Indentation)에 속으면 안 됩니다.
    중괄호 `{}`가 없으므로 `if (x == 1)`의 영향을 받는 코드는 바로 아래의 `y++;` 뿐입니다.
    x는 0이므로 조건이 거짓이 되어 `y++;`는 실행되지 않고 무시됩니다.
    그 다음 줄의 `y += 2;`는 if문과 전혀 상관없는 독립적인 코드입니다. 따라서 y(3)에 2를 더해 5가 됩니다.
    
- **문제 03-16**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 3;
        switch (n) {
            case 1:
            case 2:
                printf("A");
            case 3:
                printf("B");
            case 4:
                printf("C");
            case 5:
            case 6:
                printf("D");
                break;
            default:
                printf("E");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    BCD
    ```
    
    ### 설명
    
    매우 중요한 switch 폴스루(Fall-through) 문제입니다.
    n이 3이므로 바로 `case 3:` 으로 진입하여 “B”를 출력합니다.
    그런데 break가 없기 때문에 switch문을 탈출하지 못하고 아래로 계속 직진합니다!
    이어서 `case 4:`의 “C”를 출력하고, 또 아래로 직진해 `case 6:`의 “D”를 출력합니다.
    드디어 break를 만나 switch문이 종료됩니다. 결과적으로 연속해서 “BCD”가 출력됩니다.
    

# 04. 반복문

## for 문

- **문제 04-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 0; i < 3; i++) {
            printf("%d ", i + 1);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3
    ```
    
    ### 설명
    
    i는 0부터 시작하여 3보다 작을 때까지(0, 1, 2) 총 3번 반복합니다.
    출력할 때는 i에 1을 더한 값을 출력하므로 1, 2, 3이 순서대로 출력됩니다.
    
- **문제 04-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int sum = 0;
        for (int i = 2; i <= 6; i++) {
            sum += i;
        }
        printf("sum =%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    sum = 20
    ```
    
    ### 설명
    
    i가 2부터 6까지 1씩 증가하며 반복합니다. (2, 3, 4, 5, 6)
    반복할 때마다 sum에 i 값을 누적하여 더하므로 2 + 3 + 4 + 5 + 6 = 20이 됩니다.
    
- **문제 04-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 1; i <= 10; i++) {
            if (i % 2 == 0)
                printf("%d ", i);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 4 6 8 10
    ```
    
    ### 설명
    
    1부터 10까지 반복하면서, i를 2로 나눈 나머지가 0인 경우(즉, 짝수인 경우)에만 i를 출력합니다.
    
- **문제 04-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 5; i >= 1; i--) {
            printf("%d\n", i);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5
    4
    3
    2
    1
    ```
    
    ### 설명
    
    i의 초깃값이 5이며, 조건식(i >= 1)을 만족할 때까지 i를 1씩 감소(i–)시키며 반복합니다.
    
- **문제 04-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 2; j++) {
                printf("(%d,%d) ", i, j);
            }
            printf("\n");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    (1,1) (1,2)
    (2,1) (2,2)
    (3,1) (3,2)
    ```
    
    ### 설명
    
    중첩 for문(다중 반복문)입니다.
    바깥쪽 루프(i)가 1번 돌 때, 안쪽 루프(j)는 2번(1, 2) 돕니다.
    안쪽 루프가 끝나면 printf(“”);를 만나 줄을 바꾼 뒤, 다시 바깥쪽 루프의 다음 반복을 진행합니다.
    
- **문제 04-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 4; j >= i; j--) {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    ****
    ***
    **
    *
    ```
    
    ### 설명
    
    별 찍기 문제입니다.
    i=1 일 때, j는 4,3,2,1로 4번 반복하여 별 4개 출력
    i=2 일 때, j는 4,3,2로 3번 반복하여 별 3개 출력
    이처럼 줄이 바뀔 때마다 출력하는 별의 개수가 1개씩 줄어드는 역직각삼각형 모양이 됩니다.
    
- **문제 04-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int sum = 0;
        for (int i = 1; i <= 15; i++) {
            if (i >= 5 && i <= 10) {
                sum += i;
            }
        }
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    45
    ```
    
    ### 설명
    
    1부터 15까지 반복하지만, if 조건문에 의해 i가 5 이상 10 이하일 때만 sum에 더해집니다.
    즉, 5 + 6 + 7 + 8 + 9 + 10 = 45가 됩니다.
    

## while 문

- **문제 04-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        while (i <= 5) {
            printf("%d ", i);
            i++;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3 4 5
    ```
    
    ### 설명
    
    while문은 괄호 안의 조건이 참(True)인 동안 블록 내부를 계속 반복합니다.
    i가 1부터 5까지 1씩 증가하며 출력됩니다.
    
- **문제 04-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 5;
        while (n >= 1) {
            printf("%d ", n);
            n--;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5 4 3 2 1
    ```
    
    ### 설명
    
    n이 초깃값 5에서 시작하여 1씩 감소(n–)하며 1이 될 때까지 역순으로 출력합니다.
    
- **문제 04-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        while (i <= 10) {
            if (i % 2 == 0)
                printf("%d ", i);
            i++;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 4 6 8 10
    ```
    
    ### 설명
    
    i를 1부터 10까지 증가시키며, i가 짝수(2로 나눈 나머지가 0)일 때만 출력합니다.
    
- **문제 04-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        int sum = 0;
        while (i <= 5) {
            sum += i;
            i++;
        }
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    1부터 5까지의 합(1 + 2 + 3 + 4 + 5)을 구해 15를 출력합니다.
    
- **문제 04-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        int sum = 0;
        while (i <= 10) {
            if (i % 3 == 0)
                sum += i;
            i++;
        }
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    18
    ```
    
    ### 설명
    
    1부터 10까지의 숫자 중에서 3의 배수(3, 6, 9)만 골라내어 더합니다.
    3 + 6 + 9 = 18입니다.
    
- **문제 04-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 0;
        while (i < 3) {
            printf("%d ", i++);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    0 1 2
    ```
    
    ### 설명
    
    후위 증감 연산자(i++)가 쓰였습니다.
    현재의 i값을 먼저 printf로 출력한 뒤에, i의 값이 1 증가합니다.
    i=0 출력 -> i=1 됨 -> 조건 참 -> i=1 출력 -> i=2 됨 -> 조건 참 -> i=2 출력 -> i=3 됨 -> 루프 종료.
    
- **문제 04-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 5;
        while (--n > 1) {
            printf("%d ", n);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4 3 2
    ```
    
    ### 설명
    
    전위 감소 연산자(–n)가 조건식에 쓰였습니다. n의 값을 먼저 1 감소시키고 조건을 비교합니다.
    n이 5일 때, –n으로 4가 됩니다. (4 > 1) 참이므로 4 출력.
    그 다음 –n으로 3이 됩니다. (3 > 1) 참이므로 3 출력.
    그 다음 –n으로 2가 됩니다. (2 > 1) 참이므로 2 출력.
    그 다음 –n으로 1이 됩니다. (1 > 1) 거짓이므로 반복문 종료.
    

## do~while, continue, break 문

- **문제 04-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        do {
            printf("%d ", i);
            i++;
        } while (i <= 5);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3 4 5
    ```
    
    ### 설명
    
    do~while문은 조건 검사를 나중에 하므로, 조건과 상관없이 무조건 블록 내부를 최소 1번은 실행합니다.
    이 코드는 1부터 5까지 출력하는 기본적인 루프입니다.
    
- **문제 04-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int n = 3;
        do {
            printf("%d\n", n);
            n--;
        } while (n > 0);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3
    2
    1
    ```
    
    ### 설명
    
    n이 3부터 시작해 출력 후 1씩 감소하며, n이 0보다 큰 동안(3, 2, 1) 반복 실행합니다.
    
- **문제 04-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        int sum = 0;
        do {
            sum += i;
            i++;
        } while (i <= 5);
    
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    do~while 루프를 사용하여 1부터 5까지의 합계를 구합니다. (1+2+3+4+5=15)
    
- **문제 04-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int x = 0;
        do {
            printf("x =%d\n", x);
            x--;
        } while (x > 0);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    x = 0
    ```
    
    ### 설명
    
    초깃값 x가 0이므로 조건(x > 0)은 처음부터 거짓입니다.
    하지만 do~while문 특성상 조건 검사 전에 내부 코드를 무조건 1번 실행하기 때문에, “x = 0”을 출력하고 x를 -1로 만든 후에 루프가 종료됩니다.
    
- **문제 04-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 1;
        do {
            if (i == 4) {
                break;
            }
            printf("%d ", i);
            i++;
        } while (i <= 5);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3
    ```
    
    ### 설명
    
    i가 1, 2, 3일 때는 정상적으로 출력합니다.
    i가 4가 되는 순간 if문에 걸려 break가 실행되고, 반복문이 즉시 강제 종료됩니다. 따라서 4와 5는 출력되지 않습니다.
    
- **문제 04-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int i = 0;
        while (i < 7) {
            i++;
            if (i % 2 == 0) {
                continue;
            }
            printf("%d ", i);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 3 5 7
    ```
    
    ### 설명
    
    i를 먼저 1 증가시킨 후 짝수인지 판별합니다.
    i가 짝수일 때는 continue문을 만나 아래의 printf를 건너뛰고 조건식(i < 7)으로 바로 올라갑니다.
    따라서 짝수는 출력되지 않고, 홀수(1, 3, 5, 7)만 출력됩니다.
    
- **문제 04-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int sum = 0;
        for (int i = 1; i <= 10; i++) {
            if (i > 4) {
                break;
            }
            sum += i;
        }
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10
    ```
    
    ### 설명
    
    i가 1, 2, 3, 4일 때 sum에 더해집니다. (1+2+3+4 = 10)
    i가 5가 되는 순간 (i > 4) 조건을 만족하여 break로 인해 루프를 빠져나옵니다.
    
- **문제 04-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 1; i <= 6; i++) {
            if (i == 2 || i == 5)
                continue;
    
            printf("%d ", i);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 3 4 6
    ```
    
    ### 설명
    
    i가 2이거나 5일 때는 continue문을 만나 출력을 건너뜁니다.
    나머지 1, 3, 4, 6만 정상적으로 출력됩니다.
    
- **문제 04-09**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 1; j <= 4; j++) {
                if (j == 2)
                    continue;
                if (i == 3 && j == 3)
                    break;
    
                printf("(%d,%d) ", i, j);
            }
            printf("\n");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    (1,1) (1,3) (1,4)
    (2,1) (2,3) (2,4)
    (3,1)
    (4,1) (4,3) (4,4)
    ```
    
    ### 설명
    
    중첩 루프에 break와 continue가 모두 포함된 문제입니다.
    1. `if (j == 2) continue;` : 열(j)이 2일 때는 무조건 출력을 건너뜁니다.
    2. `if (i == 3 && j == 3) break;` : 3행 3열이 되는 순간 안쪽 루프(j)를 강제로 깨고(break) 바깥쪽 루프(i)로 탈출합니다.
    따라서 i가 3일 때는 j=1만 정상 출력된 뒤 j=3에서 루프가 깨지므로 (3,1) 까지만 출력됩니다.
    

# 05. 함수 / 변수의 유효 범위

## 함수

- **문제 05-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void func(int a) {
        a = a * 2;
        printf("%d\n", a);
    }
    
    int main() {
        int x = 3;
        func(x);
        printf("%d\n", x);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6
    3
    ```
    
    ### 설명
    
    C언어의 ‘값에 의한 호출(Call by Value)’ 개념입니다.
    func(x)를 호출할 때 x의 ’값(3)’만 func 함수의 매개변수 a로 복사되어 전달됩니다.
    따라서 func 내부에서 a를 6으로 바꾸어 출력해도, main 함수에 있는 원본 변수 x의 값은 전혀 변하지 않고 3이 유지됩니다.
    
- **문제 05-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int v) {
        v++;
        printf("%d\n", v);
    }
    
    int main() {
        int v = 10;
        change(v);
        change(v);
        printf("%d\n", v);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    11
    11
    10
    ```
    
    ### 설명
    
    1번 문제와 동일한 원리입니다. main의 v와 change의 v는 이름만 같을 뿐, 메모리 주소가 다른 완전히 별개의 변수입니다.
    change(10)이 호출될 때마다 독립적인 지역 변수 v가 10으로 초기화된 후 11이 되어 출력됩니다.
    원본인 main의 v는 변함없이 10입니다.
    
- **문제 05-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int add(int x, int y) {
        x = x + y;
        return x;
    }
    
    int main() {
        int x = 4, y = 7;
        int r = add(x, y);
        printf("%d%d%d\n", x, y, r);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4 7 11
    ```
    
    ### 설명
    
    add 함수 내에서 매개변수 x의 값이 11(4+7)로 바뀌고 이 11을 반환(return)합니다.
    반환된 값 11은 main 함수의 변수 r에 저장됩니다.
    add 함수 안에서 x가 변했더라도 main 함수의 지역 변수 x(4)와 y(7)는 변하지 않습니다.
    
- **문제 05-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void test(int a, int b) {
        a = a + 5;
        b = b - 2;
        printf("%d%d ", a, b);
    }
    
    int main() {
        int m = 8, n = 3;
        test(m, n);
        printf("%d%d\n", m, n);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    13 1 8 3
    ```
    
    ### 설명
    
    test(8, 3) 호출 시 매개변수 a는 13, b는 1이 되어 “13 1”이 출력됩니다.
    함수가 끝난 후, 원본 변수 m과 n의 값은 변함이 없으므로 “8 3”이 이어서 출력됩니다.
    
- **문제 05-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void inc(int a) {
        a++;
        printf("%d,", a);
    }
    
    void dec(int a) {
        a--;
        printf("%d,", a);
    }
    
    int main() {
        int a = 5;
        inc(a);
        dec(a);
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6,4,5
    ```
    
    ### 설명
    
    inc(5) 호출 시 지역 변수 a가 6이 되어 “6,” 출력.
    dec(5) 호출 시 지역 변수 a가 4가 되어 “4,” 출력. (main의 a 값인 5가 전달됨)
    main의 a는 그대로 5이므로 최종적으로 “5” 출력.
    
- **문제 05-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int add(int x) {
        x = x + 2;
        printf("%d,", x);
        return x;
    }
    
    int calc(int a) {
        a = add(a);
        a = a * 2;
        printf("%d,", a);
        return a;
    }
    
    int main() {
        int n = 3;
        int r = calc(n);
        printf("%d,%d\n", n, r);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5,10,3,10
    ```
    
    ### 설명
    
    1. calc(3) 호출 -> 내부에서 add(3) 호출.
    2. add(3)에서 x는 5가 됨 -> “5,” 출력 후 5 반환.
    3. calc로 돌아와 a = 5가 됨. a = 5 * 2 = 10 -> “10,” 출력 후 10 반환.
    4. main으로 돌아와 r = 10이 됨. n은 여전히 3. “3,10” 출력.
- **문제 05-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int add(int a, int b) {
        int c = a + b;
        printf("%d\n", c);
        return c;
    }
    
    int calc(int x) {
        int s1 = add(x, 1);
        int s2 = add(x, 2);
        printf("%d%d\n", s1, s2);
        return s1 + s2;
    }
    
    int main() {
        int n = 3;
        int r1 = calc(n);
        int r2 = add(n, r1);
        printf("%d%d%d\n", n, r1, r2);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4
    5
    4 5
    12
    3 9 12
    ```
    
    ### 설명
    
    1. calc(3) 호출 -> 내부에서 add(3, 1) 호출 시 c=4, “4” 출력 후 4 반환(s1=4).
    2. 내부에서 add(3, 2) 호출 시 c=5, “5” 출력 후 5 반환(s2=5).
    3. calc 내에서 “4 5” 출력. s1+s2=9 반환. (main의 r1=9)
    4. add(n, r1) -> add(3, 9) 호출. c=12, “12” 출력 후 12 반환. (main의 r2=12)
    5. main에서 n(3), r1(9), r2(12) 출력.
- **문제 05-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int add(int n) {
        return n + 5;
    }
    
    int mul(int n) {
        n = add(n);
        return n * 2;
    }
    
    int calc(int n) {
        n = mul(n);
        return n - 3;
    }
    
    int main() {
        int n = 4;
        printf("%d\n", calc(n));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    1. calc(4) 호출 -> 내부에서 mul(4) 호출.
    2. mul(4) 내부에서 add(4) 호출 -> 9 반환.
    3. mul(4) 내에서 n=9가 되고, 9 * 2 = 18을 반환.
    4. calc(4) 내에서 n=18이 되고, 18 - 3 = 15를 반환. 결과 15 출력.

## 변수의 유효 범위

- **문제 05-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a = 5;
        if (1) {
            int a = 10;
            printf("%d\n", a);
        }
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10
    5
    ```
    
    ### 설명
    
    블록 스코프(Block Scope) 문제입니다. 중괄호 {} 내에서 선언된 변수는 해당 블록 안에서만 유효합니다.
    if문 안에서 새로 선언된 `int a = 10`은 그 블록 안에서 바깥쪽의 a를 가립니다(Shadowing). 그래서 10이 출력됩니다.
    if문 블록이 끝나면 내부의 a는 소멸하므로, 바깥쪽의 `int a = 5`가 다시 나타나 5가 출력됩니다.
    
- **문제 05-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int x = 3;
        {
            int x = 7;
            printf("%d ", x);
        }
        {
            int x = 9;
            printf("%d ", x);
        }
        printf("%d\n", x);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7 9 3
    ```
    
    ### 설명
    
    1번 문제와 같은 원리입니다. 제어문이 없더라도 중괄호 {}만으로 블록을 만들어 지역 변수를 독립적으로 선언할 수 있습니다.
    각 블록 내부의 x가 차례대로 7, 9 출력되고 블록이 끝나면 소멸합니다. 마지막에 원본 x인 3이 출력됩니다.
    
- **문제 05-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int x = 3;
        {
            printf("%d ", x);
        }
        {
            int x = 9;
            printf("%d ", x);
        }
        printf("%d\n", x);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 9 3
    ```
    
    ### 설명
    
    첫 번째 블록 안에는 지역 변수 x가 선언되지 않았으므로, 바깥쪽에 있는 x(3)를 가져와 3을 출력합니다.
    두 번째 블록은 안쪽에 x(9)가 있으므로 9가 출력됩니다. 마지막엔 원본 3 출력.
    
- **문제 05-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int a = 10; // 전역 변수
    
    void test() {
        int a = 5; // 지역 변수
        printf("%d ", a);
    }
    
    int main() {
        printf("%d ", a);
        test();
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 5 10
    ```
    
    ### 설명
    
    지역 변수는 전역 변수보다 우선순위가 높습니다.
    main 함수에는 지역 변수 a가 없으므로 전역 변수 a(10)를 출력합니다.
    test 함수에는 지역 변수 a(5)가 있으므로 지역 변수를 우선하여 5를 출력합니다.
    
- **문제 05-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int g = 2; // 전역 변수
    
    void add() {
        g = g + 3; // 전역 변수 변경
    }
    
    int main() {
        printf("%d ", g);
        add();
        printf("%d ", g);
        add();
        printf("%d\n", g);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 5 8
    ```
    
    ### 설명
    
    전역 변수는 프로그램의 모든 함수에서 접근하고 값을 변경할 수 있습니다.
    add() 함수가 호출될 때마다 전역 변수 g의 값이 3씩 누적되어 2 -> 5 -> 8로 증가합니다.
    
- **문제 05-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void counter() {
        static int c = 1;
        printf("%d ", c);
        c++;
    }
    
    int main() {
        counter();
        counter();
        counter();
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3
    ```
    
    ### 설명
    
    `static` 키워드로 선언된 정적 지역 변수는 함수가 종료되어도 메모리에서 지워지지 않고 값을 유지합니다.
    초깃값 설정(`static int c = 1`)은 프로그램 실행 시 단 1번만 수행됩니다.
    따라서 호출될 때마다 값이 초기화되지 않고 1, 2, 3으로 계속 증가합니다.
    
- **문제 05-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void func() {
        static int a = 1; // 정적 변수 (값 유지됨)
        int b = 1;        // 일반 지역 변수 (호출 시마다 초기화됨)
        a++;
        b++;
        printf("%d%d\n", a, b);
    }
    
    int main() {
        func();
        func();
        func();
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 2
    3 2
    4 2
    ```
    
    ### 설명
    
    static 변수 a는 값이 초기화되지 않고 누적되므로 2, 3, 4로 증가합니다.
    일반 변수 b는 매번 함수가 호출될 때마다 1로 다시 초기화되므로 항상 2가 됩니다.
    
- **문제 05-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int g = 1; // 전역 변수
    
    void test(int g) { // 매개변수 g (전역 변수 가림)
        static int s = 2;
        int x = 3;
        g = g + 1;
        s = s + 1;
        x = x + 1;
        printf("%d%d%d\n", g, s, x);
    }
    
    int main() {
        test(g);
        test(g);
        printf("%d\n", g);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 3 4
    2 4 4
    1
    ```
    
    ### 설명
    
    1. 매개변수 g는 전역 변수 g와 이름이 같지만 독립적인 지역 변수입니다. test(1)이 전달되어 내부의 g는 2가 됩니다.
    2. x는 일반 지역 변수이므로 매번 3으로 초기화된 후 4가 됩니다.
    3. s는 static 변수이므로 첫 호출 시 3이 되고, 두 번째 호출 시 값을 유지하여 4가 됩니다.
    4. main 함수의 마지막 출력은 변경되지 않은 전역 변수 g(1)를 출력합니다.

## 재귀 함수 (Recursive Function)

- **문제 05-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void printDown(int n) {
        if (n < 0) return;
        printf("%d ", n);
        printDown(n - 1);
    }
    
    int main(void) {
        printDown(3);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 2 1 0
    ```
    
    ### 설명
    
    재귀 호출 전에 printf가 있으므로, 함수가 호출되자마자 값을 출력하고 다음 함수를 부릅니다.
    3 출력 -> printDown(2) 호출 -> 2 출력 -> … 이렇게 즉시 차례대로 3, 2, 1, 0이 출력됩니다.
    
- **문제 05-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void printUp(int n) {
        if (n < 0) return;
        printUp(n - 1);
        printf("%d ", n);
    }
    
    int main(void) {
        printUp(3);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    0 1 2 3
    ```
    
    ### 설명
    
    재귀 호출 “이후에” printf가 있습니다.
    printUp(3)은 printUp(2)를 부르고 대기 -> printUp(2)는 printUp(1)을 부르고 대기…
    n이 -1이 되어 가장 마지막 함수가 종료(return)되면, 그제야 대기하고 있던 가장 안쪽 함수부터 역순으로 깨어나면서 printf를 실행합니다.
    결과적으로 역순으로 0, 1, 2, 3이 출력됩니다.
    
- **문제 05-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int sum(int n) {
        if (n == 0) return 0;
        return n + sum(n - 1);
    }
    
    int main(void) {
        printf("%d\n", sum(5));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    재귀 함수를 이용해 1부터 n까지의 합을 구하는 대표적인 코드입니다.
    sum(5) = 5 + sum(4) = 5 + 4 + sum(3) … = 5 + 4 + 3 + 2 + 1 + 0 = 15.
    
- **문제 05-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int func(int n) {
        if (n <= 1) return 1;
        return n + func(n - 2);
    }
    
    int main(void) {
        printf("%d\n", func(6));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    13
    ```
    
    ### 설명
    
    func(6) = 6 + func(4)
    func(4) = 4 + func(2)
    func(2) = 2 + func(0)
    func(0) = 1 (n <= 1 조건)
    이를 거꾸로 모두 더하면 6 + 4 + 2 + 1 = 13이 됩니다.
    
- **문제 05-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int f(int n) {
        if (n == 0) return 1;
        return 2 * f(n - 1) + 1;
    }
    
    int main(void) {
        printf("%d\n", f(3));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
    ### 설명
    
    f(0) = 1
    f(1) = 2 * f(0) + 1 = 2 * 1 + 1 = 3
    f(2) = 2 * f(1) + 1 = 2 * 3 + 1 = 7
    f(3) = 2 * f(2) + 1 = 2 * 7 + 1 = 15
    
- **문제 05-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int calc(int n) {
        if (n == 0) return 0;
        if (n % 2 == 0)
            return calc(n - 1) + n;
        else
            return calc(n - 1) - n;
    }
    
    int main(void) {
        printf("%d\n", calc(5));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    -3
    ```
    
    ### 설명
    
    짝수일 때는 더하고 홀수일 때는 빼는 수식입니다.
    calc(1) = calc(0) - 1 = -1
    calc(2) = calc(1) + 2 = -1 + 2 = 1
    calc(3) = calc(2) - 3 = 1 - 3 = -2
    calc(4) = calc(3) + 4 = -2 + 4 = 2
    calc(5) = calc(4) - 5 = 2 - 5 = -3
    
- **문제 05-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int func(int n) {
        if (n == 1) return 1;
        int x = func(n - 1);
        return x * 2 + n;
    }
    
    int main(void) {
        printf("%d\n", func(4));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    26
    ```
    
    ### 설명
    
    func(1) = 1
    func(2) : x는 func(1)이므로 1. 반환값 = 1 * 2 + 2 = 4
    func(3) : x는 func(2)이므로 4. 반환값 = 4 * 2 + 3 = 11
    func(4) : x는 func(3)이므로 11. 반환값 = 11 * 2 + 4 = 26
    
- **문제 05-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int f(int n) {
        if (n <= 1) return 1;
        return f(n - 1) + f(n - 2) * 2;
    }
    
    int main(void) {
        printf("%d\n", f(4));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    11
    ```
    
    ### 설명
    
    피보나치 수열과 유사하지만 규칙이 약간 다릅니다.
    f(0) = 1, f(1) = 1
    f(2) = f(1) + f(0) * 2 = 1 + 1 * 2 = 3
    f(3) = f(2) + f(1) * 2 = 3 + 1 * 2 = 5
    f(4) = f(3) + f(2) * 2 = 5 + 3 * 2 = 11
    

# 06. 선행 처리기

## 선행 처리기(매크로)

- **문제 06-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define N10
    
    int main() {
        printf("%d", N * 2);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20
    ```
    
    ### 설명
    
    컴파일되기 전에 선행 처리기(Preprocessor)가 소스 코드의 ’N’을 모두 ’10’으로 단순 치환(대체)합니다.
    즉, printf(“%d”, 10 * 2); 가 되어 20이 출력됩니다.
    
- **문제 06-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define SQR(x)(x* x)
    
    int main() {
        printf("%d", SQR(3+1));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7
    ```
    
    ### 설명
    
    매크로 함수는 일반 함수처럼 값을 계산해서 넘기는 것이 아니라 “텍스트 그대로 치환”합니다.
    SQR(3+1) 은 치환되면 (3+1 * 3+1) 이 됩니다.
    연산자 우선순위에 의해 곱셈이 먼저 수행되므로, 3 + (1 * 3) + 1 = 3 + 3 + 1 = 7이 됩니다.
    (16이 나오지 않는다는 점이 시험에 아주 자주 출제되는 핵심 포인트입니다!)
    
- **문제 06-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define SQR(x)((x)*(x))
    
    int main() {
        printf("%d", SQR(3+1));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    16
    ```
    
    ### 설명
    
    2번 문제의 문제를 해결하기 위해, 매크로 함수를 정의할 때는 매개변수마다 괄호를 씌워주는 것이 원칙입니다.
    SQR(3+1) 은 치환되면 ((3+1) * (3+1)) 이 됩니다.
    괄호가 덧셈을 먼저 묶어주므로 (4 * 4)가 되어 의도한 대로 16이 출력됩니다.
    
- **문제 06-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define LIMIT5
    
    int main(void) {
        int i, sum = 0;
    
        // LIMIT는 5로 치환됩니다. 즉, for (i = 0; i < 5; i += 2)
        for (i = 0; i < LIMIT; i += 2) {
            sum += i;
        }
    
        printf("%d\n", sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6
    ```
    
    ### 설명
    
    i는 0부터 시작해서 2씩 증가하며 5보다 작을 때까지 반복합니다.
    i = 0 일 때, sum = 0 + 0 = 0
    i = 2 일 때, sum = 0 + 2 = 2
    i = 4 일 때, sum = 2 + 4 = 6
    i = 6 이 되면 조건(6 < 5)이 거짓이 되어 루프를 종료합니다. 최종 sum은 6입니다.
    
- **문제 06-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define STEP3
    #define END10
    
    int main(void) {
        int x = 0;
    
        // END는 10으로 치환됩니다. (x < 10)
        while (x < END) {
            x += STEP;         // STEP은 3으로 치환됩니다. (x += 3)
            if (x % 2 == 0)
                x++;
        }
    
        printf("%d\n", x);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    11
    ```
    
    ### 설명
    
    초기 x = 0
    1번째 반복: x < 10 (참). x에 3을 더해 x=3. 3은 홀수이므로 if문 통과. (현재 x=3)
    2번째 반복: x < 10 (참). x에 3을 더해 x=6. 6은 짝수이므로 x++ 실행되어 x=7. (현재 x=7)
    3번째 반복: x < 10 (참). x에 3을 더해 x=10. 10은 짝수이므로 x++ 실행되어 x=11. (현재 x=11)
    4번째 반복: x < 10 (거짓). 루프 종료.
    최종적으로 11이 출력됩니다.
    
- **문제 06-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    #define LEVEL2
    #define BONUS5
    
    int main(void) {
        int score = 0;
        int i;
    
        for (i = 0; i < 3; i++) {
            switch (LEVEL + i) { // LEVEL은 2로 치환. 즉, switch (2 + i)
                case 1:
                    score += 1;
                    break;
                case 2:
                case 3:
                    score += 2;
                    break;
                default:
                    score += BONUS; // BONUS는 5로 치환. score += 5;
            }
        }
    
        printf("%d\n", score);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    9
    ```
    
    ### 설명
    
    루프는 i가 0, 1, 2일 때 총 3번 반복됩니다.
    1. i = 0 일 때: switch(2+0) -> case 2 실행. break가 없어서 fall-through되어 case 3의 내용 실행 (score += 2). 현재 score = 2
    2. i = 1 일 때: switch(2+1) -> case 3 실행. score += 2. 현재 score = 2 + 2 = 4
    3. i = 2 일 때: switch(2+2) -> case 4. 해당하는 case가 없으므로 default 실행. score += 5. 현재 score = 4 + 5 = 9
    최종적으로 9가 출력됩니다.
    

# 07. 배열과 포인터

## 배열

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a[5] = { 5, 10, 15, 20, 25 };
        a[2] = a[2] + 10;
        printf("%d\n", a[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    25
    ```
    
    ### 설명
    
    배열의 인덱스는 0부터 시작합니다. a[2]는 3번째 요소인 15입니다.
    15에 10을 더해 25가 되고, 이를 다시 a[2]에 저장했으므로 25가 출력됩니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a[5];
        int i;
        for (i = 0; i < 5; i++) {
            a[i] = i * 2;
        }
        printf("%d\n", a[3]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6
    ```
    
    ### 설명
    
    for문을 돌며 배열 a에 0, 2, 4, 6, 8이 차례대로 저장됩니다.
    a[3]에는 i가 3일 때의 값인 3 * 2 = 6이 들어있습니다.
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a[5] = { 1, 2, 3, 4, 5 };
        int i;
        for (i = 4; i >= 0; i--) {
            printf("%d ", a[i]);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5 4 3 2 1
    ```
    
    ### 설명
    
    인덱스 4(마지막 요소)부터 0(첫 번째 요소)까지 역순으로 배열의 값을 출력합니다.
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a[5] = { 7, 3, 9, 2, 8 };
        int i;
        int max = a[0];
    
        for (i = 1; i < 5; i++) {
            if (a[i] > max) {
                max = a[i];
            }
        }
        printf("%d\n", max);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    9
    ```
    
    ### 설명
    
    배열 내에서 ’최댓값’을 찾는 대표적인 알고리즘입니다.
    맨 처음 요소(7)를 max로 잡고, 다음 요소들과 차례대로 비교하며 더 큰 값이 나오면 max를 갱신합니다.
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int x) {
        x = x + 10;
    }
    
    int main(void) {
        int a[3] = { 1, 2, 3 };
        change(a[1]);
        printf("%d,%d,%d\n", a[0], a[1], a[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1, 2, 3
    ```
    
    ### 설명
    
    change(a[1])은 change(2)와 같습니다. 배열 전체나 주소를 넘긴 것이 아니라 ’값(Call by Value)’만 넘겼기 때문에,
    함수 내에서 x가 변해도 원본 배열 a의 값은 바뀌지 않습니다.
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int x[3]) {
        x[1] = x[1] + 10;
    }
    
    int main(void) {
        int a[3] = { 1, 2, 3 };
        change(a);
        printf("%d,%d,%d\n", a[0], a[1], a[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1, 12, 3
    ```
    
    ### 설명
    
    C언어에서 배열의 이름(a)은 배열의 ’시작 주소’를 의미합니다.
    함수에 배열을 넘기면 주소가 넘어가므로(Call by Reference 유사), 함수 안에서 배열 요소를 수정하면 원본 배열도 같이 수정됩니다.
    
- **문제 07-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int x, int y) {
        int t;
        t = x;
        x = y;
        y = t;
    }
    
    int main(void) {
        int a[3] = { 1, 2, 3 };
        change(a[1], a[2]);
        printf("%d,%d,%d\n", a[0], a[1], a[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1, 2, 3
    ```
    
    ### 설명
    
    두 값을 교환(Swap)하는 함수지만, 주소가 아닌 ’값’만 전달했으므로 원본 배열 a에는 아무런 영향이 없습니다.
    
- **문제 07-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int x[3], int y[3]) {
        int t;
        t = x[1];
        x[1] = y[2];
        y[2] = t;
    }
    
    int main(void) {
        int a[3] = { 1, 2, 3 };
        change(a, a); // 같은 배열 주소를 두 번 넘김
        printf("%d,%d,%d\n", a[0], a[1], a[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1, 3, 2
    ```
    
    ### 설명
    
    배열 주소 a를 매개변수 x, y에 모두 넘겼으므로 x와 y는 결국 같은 원본 배열 a를 가리킵니다.
    t = a1, a[1] = a2, a[2] = t(값 2) 가 되어 2번째와 3번째 요소가 교환됩니다.
    

## 포인터 변수

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10;
        int *p;
        p = &a; // 포인터 p에 a의 주소 저장
        *p = 20; // p가 가리키는 곳(a)의 값을 20으로 변경
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20
    ```
    
    ### 설명
    
    포인터를 이용해 간접적으로 변수 a의 값을 변경했습니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void change(int x) {
        x = x + 10;
    }
    
    int main(void) {
        int a = 5;
        int *p = &a;
        change(a);       // 값만 복사되므로 a에는 변화 없음
        *p = *p + 10;    // p가 가리키는 a의 값(5)에 10을 더해 다시 a에 저장 -> a = 15
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15
    ```
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 7;
        int *p = &a;
        int *q = p; // q도 p와 마찬가지로 a의 주소를 가짐
    
        *p = *p + 3; // a = 7 + 3 = 10
        *q = *q * 2; // a = 10 * 2 = 20
    
        printf("%d\n", a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20
    ```
    
    ### 설명
    
    포인터 p와 q 모두 변수 a를 가리키고 있으므로, 어떤 포인터로 접근하든 a의 값이 변경됩니다.
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void swap(int x, int y) {
        int t = x;
        x = y;
        y = t;
    }
    
    int main(void) {
        int x = 3, y = 5;
        swap(x, y); // 값에 의한 호출
        printf("%d,%d\n", x, y);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3, 5
    ```
    
    ### 설명
    
    값만 전달했으므로 원본 x, y는 교환되지 않습니다.
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    void swap(int *x, int *y) {
        int t = *x;
        *x = *y;
        *y = t;
    }
    
    int main(void) {
        int x = 3, y = 5;
        swap(&x, &y); // 참조에 의한 호출 (주소 전달)
        printf("%d,%d\n", x, y);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5, 3
    ```
    
    ### 설명
    
    변수의 주소(&)를 넘겼기 때문에 함수 내부에서 포인터 연산(*)으로 원본 변수에 직접 접근하여 값을 교환할 수 있습니다.
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 20;
        int *p = &a;
        int *q = &b;
    
        *p = *p + 5;  // a = 15
        q = p;        // 이제 포인터 q는 b가 아니라 a를 가리킵니다!! (중요)
        *q = *q + 5;  // q가 가리키는 곳(a)에 5를 더함 -> a = 20
    
        printf("%d,%d\n", a, b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20, 20
    ```
    
    ### 설명
    
    중간에 `q = p;`를 수행하여 두 포인터가 같은 변수(a)를 가리키게 되었습니다. b는 변경된 적이 없습니다.
    

## 1차원 배열과 포인터

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[3] = {10, 20, 30};
        printf("%d%d\n", arr[0], *(arr + 1));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 20
    ```
    
    ### 설명
    
    배열 이름(arr)은 0번째 요소의 주소입니다.
    arr + 1은 1번째 요소의 주소이고, 거기에 *를 붙인* (arr + 1)은 arr[1]과 완벽히 같은 의미입니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[4] = {4, 8, 12, 16};
        int *p = arr; // p가 arr[0]을 가리킴
        printf("%d%d%d\n", *p, *(p + 2), p[3]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4 12 16
    ```
    
    ### 설명
    
    *p는 arr[0] (4),* (p + 2)는 arr[2] (12), p[3]은 arr[3] (16)을 의미합니다.
    포인터도 배열처럼 인덱스 표기법(p[3])을 사용할 수 있습니다.
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[3] = {5, 7, 9};
        int *p = arr + 1; // p는 arr[1] (값 7이 있는 곳)을 가리킵니다.
        printf("%d%d\n", *p, *(p - 1));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7 5
    ```
    
    ### 설명
    
    p가 배열의 중간(arr[1])을 가리키도록 설정했습니다.
    *p는 7,* (p - 1)은 한 칸 뒤로 간 arr[0]이므로 5입니다.
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[5] = {2, 4, 6, 8, 10};
        int *p = arr;
        for (int i = 0; i < 5; i++) {
            // *(p + i) 는 arr[i] 와 같습니다.
            printf("%d ", *(p + i) + arr[i]);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    4 8 12 16 20
    ```
    
    ### 설명
    
    결국 자기 자신끼리 더하는 것(arr[i] + arr[i])이 되어 각 요소가 2배가 되어 출력됩니다.
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[] = {1, 3, 5, 7};
        int *p = arr;
    
        p++;        // p가 arr[1] (값 3)을 가리키도록 주소 1칸(자료형 크기만큼) 이동
        *p += 10;   // p가 가리키는 곳(arr[1])의 값에 10 더함 -> arr[1] = 13
    
        printf("%d%d%d\n", arr[0], arr[1], arr[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 13 5
    ```
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[5] = {2, 4, 6, 8, 10};
        int *p = arr;
        printf("%d%d%d\n", p[0], p[2], p[4]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 6 10
    ```
    
    ### 설명
    
    포인터 변수 이름에 대괄호 표기법을 쓰면 배열처럼 동작합니다. (p[i] == *(p + i) == arr[i])
    
- **문제 07-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int arr[4] = {3, 6, 9, 12};
        int *p = arr;
    
        p++; // 포인터가 인덱스 1 (값 6)을 가리키도록 이동
    
        // 이제 p[0]은 arr[1]이 됩니다.
        printf("%d ", p[0]);
        printf("%d ", p[1]);
        printf("%d", p[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6 9 12
    ```
    
    ### 설명
    
    p가 이동했으므로, p를 기준으로 한 인덱스 번호는 원본 배열의 인덱스보다 1씩 밀리게 됩니다.
    

## 포인터 배열

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 20, c = 30;
        // 포인터 배열: 각 요소가 '메모리 주소'를 저장하는 배열입니다.
        int* arr[3] = { &a, &b, &c };
    
        printf("%d%d%d\n", *arr[0], *arr[1], *arr[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 20 30
    ```
    
    ### 설명
    
    arr[0]에는 a의 주소가 있으므로 *arr[0]은 a의 값인 10이 됩니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 20, c = 30;
        int* arr[3] = { &a, &b, &c };
    
        *arr[1] = *arr[1] + 5;  // arr[1]이 가리키는 곳(b)의 값에 5를 더함 -> b = 25
        printf("%d%d\n", b, *arr[1]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    25 25
    ```
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 20, c = 30;
        int* arr[3] = { &a, &b, &c };
    
        arr[0] = &c; // 0번째가 c를 가리키게 바꿈
        arr[2] = &a; // 2번째가 a를 가리키게 바꿈
    
        printf("%d%d%d\n", *arr[0], *arr[1], *arr[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    30 20 10
    ```
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int x[3] = { 5, 10, 15 };
        int* p[3] = { &x[0], &x[1], &x[2] };
    
        *p[0] += 5; // x[0] = 10
        *p[1] += 5; // x[1] = 15
        *p[2] += 5; // x[2] = 20
    
        for (int i = 0; i < 3; i++) {
            printf("%d ", x[i]);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 15 20
    ```
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        int a = 10, b = 20;
        int* arr[2] = { &a, &b };
    
        // 포인터 배열의 주소(가리키는 방향)끼리 값을 교환합니다.
        int* temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    
        printf("%d%d\n", *arr[0], *arr[1]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20 10
    ```
    
    ### 설명
    
    원본 변수 a, b의 값은 그대로지만, 배열 arr이 가리키는 순서가 반대가 되었습니다.
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        // 문자열 리터럴의 시작 주소를 저장하는 포인터 배열입니다.
        char* words[3] = { "C", "Java", "Python" };
        printf("%s%s\n", words[0], words[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    C Python
    ```
    
- **문제 07-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main(void) {
        const char* words[3] = { "Apple", "Banana", "Cherry" };
    
        printf("%s\n", words[0]);
        printf("%c\n", *(words[1] + 2));
        printf("%s\n", words[2] + 3);
        printf("%c\n", words[0][4]);
    
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Apple
    n
    rry
    e
    ```
    
    ### 설명
    
    1. words[0] : “Apple” 문자열 전체 출력
    2. (words[1] + 2) : “Banana”의 시작 주소에서 2칸 이동한 곳의 ‘단일 문자(%c)’. 즉, 0번’B’, 1번’a’, 2번’n’ -> ‘n’
    3. words[2] + 3 : “Cherry”의 시작 주소에서 3칸 이동한 곳부터 ‘문자열 전체(%s)’ 출력. (0’C’,1’h’,2’e’,3’r’) -> “rry”
    4. words[0][4] : “Apple”의 인덱스 4번 문자 -> ‘e’

## 2차원 배열

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 2 3
    4 5 6
    ```
    
    ### 설명
    
    2행 3열짜리 2차원 배열을 순회하며 그대로 출력합니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        printf("%zu%zu%zu\n", sizeof(a), sizeof(a[0]), sizeof(a[0][0]));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    24 12 4
    ```
    
    ### 설명
    
    sizeof(a) : 전체 요소 6개 * 4바이트(int) = 24바이트
    sizeof(a[0]) : 0번 행의 크기. 행에는 요소가 3개 있으므로 3 * 4 = 12바이트
    sizeof(a[0][0]) : 단일 정수 요소 1개의 크기이므로 4바이트
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        int r_sum = 0;
        int c_sum = 0;
    
        // 0행 요소들의 합 구하기
        for (int j = 0; j < 3; j++) {
            r_sum += a[0][j];
        }
        // 1열 요소들의 합 구하기
        for (int i = 0; i < 2; i++) {
            c_sum += a[i][1];
        }
    
        printf("%d%d\n", r_sum, c_sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6 7
    ```
    
    ### 설명
    
    r_sum = a[0][0] + a[0][1] + a[0][2] = 1 + 2 + 3 = 6
    c_sum = a[0][1] + a[1][1] = 2 + 5 = 7
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        printf("%d\n", a[1] == *(a + 1));
        printf("%d\n", a[1] == a[0]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1
    0
    ```
    
    ### 설명
    
    C언어에서 a[1]과 *(a + 1)은 표기법만 다를 뿐 문법적으로 완전히 똑같은 의미이므로 두 주소는 같아서 참(1)입니다.
    a[1]의 시작 주소와 a[0]의 시작 주소는 엄연히 다르므로 거짓(0)입니다.
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {10, 20, 30},
            {40, 50, 60}
        };
        // 2차원 배열에서 a[i][j] == *(a[i] + j) == *(*(a + i) + j) 공식 성립!
        printf("%d%d%d\n", a[0][1], *(a[0] + 1), *(*(a + 1) + 0));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20 20 40
    ```
    
    ### 설명
    
    a[0][1]은 20.
    *(a[0] + 1) 은 배열의 0행에서 주소를 1칸 이동시켜 참조한 것이므로 역시 a[0][1] 즉 20.*
    (*(a + 1) + 0) 은 a[1][0]과 같으므로 40.
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {10, 20, 30},
            {40, 50, 60}
        };
        int (*p)[3] = a;  // 크기가 3인 1차원 배열을 가리키는 '배열 포인터'
    
        printf("%d\n", p[0][1]);
        printf("%d\n", (*(p + 1))[2]);
        printf("%d\n", *(*(p + 1) + 0));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20
    60
    40
    ```
    
    ### 설명
    
    배열 포인터 p는 a와 완전히 동일한 단위(행 단위)로 포인터 연산이 일어납니다.
    p[0][1] = 20.
    (*(p + 1))[2] = p[1][2] = 60.*
    (*(p + 1) + 0) = p[1][0] = 40.
    
- **문제 07-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        int *p = a[1];  // a[1]은 1번 행의 시작주소, 즉 a[1]0를 가리킵니다.
    
        printf("%d%d%d\n", *(p - 1), *p, *(p + 2));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 4 6
    ```
    
    ### 설명
    
    p는 4를 가리키는 1차원 포인터입니다.
    2차원 배열은 메모리상에 한 줄로 일렬로 연결(1 2 3 4 5 6)되어 있습니다.
    따라서 p에서 한 칸 뒤로 가면(*(p-1)) 0행의 마지막인 3이 되고, 2칸 앞으로 가면(*(p+2)) 6이 됩니다.
    
- **문제 07-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
        int *p = &a[0][0]; // 배열의 가장 첫 시작 주소
    
        // 2차원 배열을 1차원 포인터로 접근하면 1차원 배열처럼 쓸 수 있습니다.
        printf("%d ", p[1]);
        printf("%d ", p[3]);
        printf("%d\n", *(p + 4));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    2 4 5
    ```
    
    ### 설명
    
    메모리상 순서: p[0]=1, p[1]=2, p[2]=3, p[3]=4, p[4]=5, p[5]=6
    

## 배열 포인터

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = { {10, 20, 30}, {40, 50, 60} };
        int (*ptr)[3] = a; // 열의 개수가 3개인 배열을 가리키는 배열 포인터
    
        printf("%d,%d\n", a[0][1], ptr[0][1]);
        printf("%d,%d\n", a[1][2], ptr[1][2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20, 20
    60, 60
    ```
    
    ### 설명
    
    ptr은 a와 구조가 완벽히 같으므로 똑같이 사용하면 됩니다.
    
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[3][2] = { {10, 20}, {30, 40}, {50, 60} };
        int (*p)[2] = a + 1; // 1번 행({30, 40})부터 가리키기 시작!
    
        printf("%d,%d\n", a[0][0], p[0][0]);
        printf("%d,%d\n", a[1][1], p[1][1]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10, 30
    40, 60
    ```
    
    ### 설명
    
    p[0][0]은 p가 가리키는 시작점인 a[1]0이 됩니다.
    p[1][1]은 그 다음 행인 a[2]1이 됩니다. (p의 인덱스가 원본 a보다 행 단위로 1씩 밀림)
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int arr[6] = {1, 2, 3, 4, 5, 6};
        // 1차원 배열을 강제로 '3칸씩 묶어' 2차원 배열처럼 쓸 수 있게 형변환
        int (*p)[3] = (int (*)[3])arr;
    
        printf("%d ", p[0][2]);
        printf("%d ", p[1][0]);
        printf("%d\n", p[1][2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 4 6
    ```
    
    ### 설명
    
    p의 시선: 0행 {1, 2, 3}, 1행 {4, 5, 6}
    p[0][2] = 3, p[1][0] = 4, p[1][2] = 6
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
        int (*p)[3] = a;
    
        printf("%d ", (*p)[2]); // p[0][2]
        printf("%d ", (*(p + 1))[0]);     // p[1][0]
        printf("%d\n", *(*(p + 1) + 1));  // p[1][1]
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 4 5
    ```
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int arr[4] = {5, 10, 15, 20};
        int (*p)[2] = (int (*)[2])arr; // 2개씩 묶어서 인식
    
        printf("%d%d\n", p[0][0], (*p)[0]);
        printf("%d%d\n", p[1][0], (*p)[2]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    5 5
    15 15
    ```
    
    ### 설명
    
    p의 시선: 0행 {5, 10}, 1행 {15, 20}
    p[0][0] = 5, (*p)[0]도 p[0][0]과 같으므로 5.
    p[1][0] = 15. (*p)는 p[0]이고 배열 이름처럼 작동하므로 인덱스 2로 가면 한계를 넘어 15를 가져옵니다.
    
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
        int (*p)[3] = a;
        int *q = &a[0][0]; // 1차원 포인터
    
        printf("%d ", p[1][2]);
        printf("%d ", *(*p + 1)); // p[0][1]
        printf("%d ", q[4]);
        printf("%d\n", *(*(p + 1) + 0) + q[2]); // p[1][0] + a[0][2]
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6 2 5 7
    ```
    
    ### 설명
    
    p[1][2] = 6
    *(*p + 1) = p[0][1] = 2
    q[4] = 일렬로 봤을 때 인덱스 4 = 5
    *(*(p + 1) + 0) = p[1][0] = 4, q[2] = 3. 4 + 3 = 7
    

## 이중 포인터

- **문제 07-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a = 10;
        int *p = &a;
        int **pp = &p; // 포인터 p의 주소를 담는 이중 포인터
    
        printf("%d\n", **pp);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10
    ```
    
    ### 설명
    
    - *pp 는 *(*pp) 이며, *pp는 p이므로 결국* p와 같고, 이는 a의 값인 10이 됩니다.
- **문제 07-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int x = 3, y = 7;
        int *p = &x;
        int **pp = &p;
    
        *pp = &y; // pp가 가리키는 대상(포인터 p)의 값을 &y로 바꿈. 즉 p가 y를 가리키게 됨!
    
        printf("%d%d\n", *p, **pp);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7 7
    ```
    
    ### 설명
    
    이중 포인터로 1차원 포인터의 방향을 꺾었습니다. 이제 p가 y를 가리키므로 둘 다 7이 출력됩니다.
    
- **문제 07-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a = 1, b = 2, c = 3;
        int *arr[3] = { &a, &b, &c }; // 포인터 배열 (배열 이름 arr 자체가 이중포인터처럼 동작 가능)
        int **pp = arr;
    
        printf("%d%d\n", pp[0][0], pp[2][0]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 3
    ```
    
    ### 설명
    
    pp[0][0] = *pp[0] =* arr[0] = a = 1
    pp[2][0] = *pp[2] =* arr[2] = c = 3
    
- **문제 07-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        char *words[3] = { "Hello", "World", "C" };
        char **pp = words;
    
        printf("%c%s\n", pp[0][1], pp[1]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    e World
    ```
    
    ### 설명
    
    pp[0][1] : 0번째 문자열(“Hello”)의 인덱스 1번 문자 -> ‘e’
    pp[1] : 1번째 문자열 전체 -> “World”
    
- **문제 07-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int arr[4] = {1, 2, 3, 4};
        int *p = arr;
        int **pp = &p;
    
        printf("%d%d\n", **pp, *(*pp + 3));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 4
    ```
    
    ### 설명
    
    - *pp = *p = arr[0] = 1*
    (*pp + 3) =* (p + 3) = arr[3] = 4
- **문제 07-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        int a = 3, b = 6, c = 9;
        int *pa[3] = { &a, &b, &c };
        int **pp = pa;
    
        pp++; // pp가 배열의 두 번째 요소(pa[1] 즉 &b)를 가리키게 됨
    
        printf("%d%d\n", **pp, *(*(pp) + 0));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    6 6
    ```
    
    ### 설명
    
    pp++ 로 인해 이제 기준이 pa[1]로 이동했습니다.
    **pp = *pa[1] = b = 6*
    (*(pp) + 0) = **pp = 6
    
- **문제 07-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    int main() {
        char *s[3] = {"AB", "CD", "EF"};
        char **pp = s;
    
        // *pp[1] 은 pp[1][0]과 같습니다.
        printf("%c%c\n", *pp[1], pp[2][1]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    C F
    ```
    
    ### 설명
    
    - pp[1] : s[1]인 “CD”의 첫 문자 -> ‘C’
    pp[2][1] : s[2]인 “EF”의 두 번째 문자 -> ‘F’

# 08. 구조체와 공용체

## 구조체

- **문제 08-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[50];
        int age;
        float grade;
    };
    
    int main(void) {
        struct Student s1 = {"Lee", 20, 3.5f};
        s1.age = s1.age + 1;
        s1.grade = s1.grade + 0.3f;
    
        printf("%s%d%.1f\n", s1.name, s1.age, s1.grade);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Lee 21 3.8
    ```
    
    ### 설명
    
    구조체 멤버에 접근할 때는 점(.) 연산자를 사용합니다.
    age는 20 + 1 = 21, grade는 3.5 + 0.3 = 3.8이 되어 출력됩니다.
    
- **문제 08-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[50];
        unsigned int age;
        float grade;
    };
    
    int main(void) {
        struct Student s = {"Seo", 20u, 2.0f};
        s.age = s.age + 2u;
        s.grade = s.grade + 0.5f;
        s.age = s.age - 1u;
        s.grade = s.grade + 1.0f;
    
        printf("%u%.1f\n", s.age, s.grade);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    21 3.5
    ```
    
    ### 설명
    
    age: 20 -> 22 -> 21
    grade: 2.0 -> 2.5 -> 3.5
    unsigned int(부호 없는 정수)는 %u로 출력합니다.
    
- **문제 08-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[50];
        int age;
        float grade;
    };
    
    int main(void) {
        struct Student s1 = {"Kim", 21, 3.0f};
        struct Student s2 = {"Park", 24, 4.0f};
    
        s1.grade = s2.grade - 0.5f; // s1.grade = 4.0 - 0.5 = 3.5
        s2.age = s1.age + 2;        // s2.age = 21 + 2 = 23
    
        printf("%.1f%d\n", s1.grade, s2.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3.5 23
    ```
    
- **문제 08-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[50];
        int age;
        float grade;
    };
    
    int main(void) {
        struct Student s1 = {"Kim", 20, 3.5f};
        struct Student s2 = {"Lee", 30, 2.5f};
    
        s1.age = s1.age + 5;        // s1.age = 25
        s2.grade = s1.grade - 1.0f; // s2.grade = 3.5 - 1.0 = 2.5
    
        printf("%d%.1f\n", s1.age, s2.grade);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    25 2.5
    ```
    
- **문제 08-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[50];
        int age;
        float grade;
    };
    
    int main(void) {
        struct Student s1 = {"Kim", 20, 3.0f};
        struct Student s2 = {"Park", 22, 4.0f};
    
        s2 = s1;        // s1의 모든 데이터가 s2로 그대로 복사됩니다. (s2도 Kim, 20, 3.0이 됨)
        s1.age = 25;
        s1.grade = 3.5f;
    
        // s1은 위에서 변경되었으므로 25 3.5
        printf("%d%.1f\n", s1.age, s1.grade);
        // s2는 복사받은 직후의 값이 유지되므로 20 3.0
        printf("%d%.1f\n", s2.age, s2.grade);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    25 3.5
    20 3.0
    ```
    
    ### 설명
    
    같은 구조체 타입끼리는 대입 연산자(=)를 통해 전체 데이터를 한 번에 복사할 수 있습니다.
    복사된 이후에는 서로 독립적인 메모리이므로 한쪽을 수정해도 다른 쪽에 영향을 주지 않습니다.
    
- **문제 08-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        int age;
    };
    
    void add(struct Student st) {
        st.age = st.age + 10;
        printf("add:%d\n", st.age);
    }
    
    int main(void) {
        struct Student s = {23};
        add(s); // 값에 의한 호출(Call by Value)
        printf("main:%d\n", s.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    add: 33
    main: 23
    ```
    
    ### 설명
    
    배열과 다르게, 구조체를 함수 인자로 넘기면 구조체 전체가 ’복사’되어 넘어갑니다.
    따라서 함수 안에서 값을 변경해도 원본 구조체에는 전혀 영향을 미치지 않습니다.
    
- **문제 08-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        int age;
    };
    
    void calc(struct Student a, struct Student b) {
        a.age = a.age + b.age; // a.age = 10 + 20 = 30
        b.age = b.age * 2;     // b.age = 20 * 2 = 40
        printf("%d%d\n", a.age, b.age);
    }
    
    int main(void) {
        struct Student s1 = {10};
        struct Student s2 = {20};
    
        calc(s1, s2);
        printf("%d%d\n", s1.age, s2.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    30 40
    10 20
    ```
    
    ### 설명
    
    앞선 문제와 동일하게 Call by Value이므로 main의 s1, s2 원본은 변하지 않습니다.
    
- **문제 08-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Data {
        int a;
        int b;
    };
    
    int main(void) {
        printf("%zu\n", sizeof(struct Data));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    8
    ```
    
    ### 설명
    
    int 크기 4바이트가 2개 있으므로 4 + 4 = 8바이트입니다.
    
- **문제 08-09**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Info {
        char c;  // 1바이트
        int x;   // 4바이트
        short s; // 2바이트
    };
    
    int main(void) {
        printf("%zu\n", sizeof(struct Info));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    12
    ```
    
    ### 설명
    
    메모리 정렬(Padding) 원리를 묻는 문제입니다.
    CPU가 메모리를 빠르게 읽기 위해 가장 큰 자료형(int, 4바이트)의 배수 크기로 메모리를 맞춥니다.
    c(1바이트) + 빈공간 3바이트 패딩 + x(4바이트) + s(2바이트) + 빈공간 2바이트 패딩 = 총 12바이트가 됩니다.
    

## 구조체 배열

- **문제 08-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Point {
        int x;
        int y;
    };
    
    int main(void) {
        struct Point p[3] = { {1, 2}, {3, 4}, {5, 6} };
    
        printf("%d%d\n", p[0].x, p[1].y);
        printf("%d%d\n", p[2].x, p[2].y);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 4
    5 6
    ```
    
- **문제 08-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    int main(void) {
        struct Student s[2] = { {"Kim", 20}, {"Lee", 21} };
        s[0].age = s[0].age + 2;        // s[0].age = 22
        s[1].age = s[0].age + s[1].age; // s[1].age = 22 + 21 = 43
    
        printf("%d%d\n", s[0].age, s[1].age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    22 43
    ```
    
- **문제 08-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Exam {
        int score;
    };
    
    int main(void) {
        struct Exam e[4] = { 10, 20, 30, 40 };
        int i;
        int total = 0;
    
        for (i = 0; i < 4; i++) {
            total = total + e[i].score;
        }
    
        printf("total=%d\n", total);
        printf("avg=%d\n", total / 4);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    total=100
    avg=25
    ```
    
- **문제 08-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Item {
        int a;
        int b;
    };
    
    int main(void) {
        struct Item arr[3] = {
            {1, 2},
            {3},     // 초기화되지 않은 멤버 b는 0으로 자동 설정됨
            {0, 0}
        };
    
        // arr[2].a = 2 + 0 = 2
        arr[2].a = arr[0].b + arr[1].b;
    
        printf("%d%d%d\n", arr[0].a, arr[1].b, arr[2].a);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1 0 2
    ```
    
- **문제 08-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Num {
        int v;
    };
    
    int main(void) {
        // 생략된 멤버는 모두 0이 됩니다.
        struct Num a[3] = { {1}, {2}, {3} };
        int i = 0;
    
        a[i].v = a[i].v + a[i + 1].v; // a[0].v = 1 + 2 = 3
        i = i + 1; // i = 1
        a[i + 1].v = a[i].v * 2;      // a[2].v = a[1].v * 2 = 2 * 2 = 4
    
        printf("%d%d%d\n", a[0].v, a[1].v, a[2].v);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 2 4
    ```
    
- **문제 08-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Node {
        int value;
        int next; // 다음 노드의 인덱스를 저장
    };
    
    int main(void) {
        // 연결 리스트(Linked List)를 배열로 구현한 모습입니다.
        struct Node list[4] = { {10, 1}, {20, 2}, {30, 3}, {40, -1} };
        int head = 0;
        int move = 2; // 이동시킬 대상 인덱스(30)
        int prev = 1; // 이동시킬 대상의 이전 인덱스(20)
    
        list[prev].next = list[move].next;     // 인덱스 1의 다음을 인덱스 3으로 연결 (20 다음에 40 연결)
        list[move].next = head;                // 인덱스 2의 다음을 현재 head(0)로 연결 (30 다음에 10 연결)
        head = move;                           // head를 인덱스 2로 변경
    
        int cur = head; // 시작점은 2(값 30)
        while (cur != -1) {
            printf("%d ", list[cur].value);
            cur = list[cur].next;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    30 10 20 40
    ```
    
    ### 설명
    
    리스트 중간에 있는 노드를 맨 앞으로 빼내는 연결 리스트 조작 문제입니다.
    순서 변화: 10 -> 20 -> 30 -> 40 에서 30 -> 10 -> 20 -> 40 으로 재배치되었습니다.
    
- **문제 08-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Node {
        int value;
        int next;
    };
    
    int main(void) {
        struct Node list[4] = { {10, 1}, {20, 2}, {30, 3}, {40, -1} };
        int head = 0;
        int del = 2;  // 삭제할 인덱스(30)
        int prev = 1; // 삭제할 이전 인덱스(20)
    
        list[prev].next = list[del].next;     // 20의 다음을 30의 다음인 40으로 바로 연결 (30이 스킵됨)
        list[del].next = -1;                  // 삭제된 30의 링크 끊기
    
        int cur = head;
        while (cur != -1) {
            printf("%d ", list[cur].value);
            cur = list[cur].next;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 20 40
    ```
    
    ### 설명
    
    연결 리스트에서 특정 노드(30)를 건너뛰어 삭제하는 알고리즘입니다.
    

## 구조체 포인터

- **문제 08-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    int main(void) {
        struct Student s = {"Lee", 20};
        struct Student *p = &s; // 포인터 p가 s를 가리킴
    
        p->age = p->age + 1; // 화살표(->) 연산자를 사용해 포인터가 가리키는 구조체 멤버에 접근
        printf("%s%d\n", s.name, s.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Lee 21
    ```
    
    ### 설명
    
    구조체 포인터는 점(.)이 아니라 화살표(->)를 통해 멤버에 접근합니다. (*p).age 와 완벽히 같은 의미입니다.
    
- **문제 08-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    int main(void) {
        struct Student s = {"Kim", 30};
        struct Student *p = &s;
        struct Student *q = &s;
    
        p->age = p->age + 5; // s.age = 35
        q->age = q->age - 3; // s.age = 32
    
        printf("%d\n", s.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    32
    ```
    
    ### 설명
    
    포인터 p와 q 모두 원본 변수 s를 가리키고 있으므로 s가 지속적으로 변경됩니다.
    
- **문제 08-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    int main(void) {
        struct Student a = {"A", 10};
        struct Student b = {"B", 20};
        struct Student *p = &a;
    
        p->age = p->age + 1; // a.age = 11
        p = &b;              // p가 구조체 b를 가리키도록 변경
        p->age = p->age + 2; // b.age = 22
    
        printf("%d%d\n", a.age, b.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    11 22
    ```
    
- **문제 08-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    // 포인터를 매개변수로 받아 주소로 직접 접근(Call by Reference)
    void addAge(struct Student *p) {
        p->age = p->age + 2;
    }
    
    int main(void) {
        struct Student s = {"Cho", 25};
        addAge(&s); // 주소를 넘김
        printf("%s%d\n", s.name, s.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Cho 27
    ```
    
    ### 설명
    
    앞선 섹션의 “구조체 값에 의한 호출”과 달리 포인터로 주소를 넘겼으므로 원본 구조체가 직접 수정됩니다.
    
- **문제 08-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        char name[10];
        int age;
    };
    
    int main(void) {
        struct Student arr[3] = { {"A", 10}, {"B", 20}, {"C", 30} };
        struct Student *p = arr; // p는 arr[0]을 가리킴
    
        p->age = p->age + 1; // arr[0].age = 11
        p = p + 1;           // p를 구조체 하나 크기만큼 뒤로 이동 (arr[1]을 가리킴)
        p->age = p->age + 2; // arr[1].age = 22
    
        printf("%d%d%d\n", arr[0].age, arr[1].age, arr[2].age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    11 22 30
    ```
    
- **문제 08-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    struct Student {
        int age;
    };
    
    int main(void) {
        struct Student s[2] = { 10, 20 };
        struct Student *p[2]; // 구조체 포인터를 담는 배열
    
        p[0] = &s[0];
        p[1] = &s[1];
    
        p[0]->age = p[0]->age + 3;          // s[0].age = 13
        p[1]->age = p[0]->age + p[1]->age;  // s[1].age = 13 + 20 = 33
    
        printf("%d%d\n", s[0].age, s[1].age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    13 33
    ```
    
- **문제 08-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<stdlib.h>
    
    struct Node {
        int value;
        struct Node *next; // 자기 자신과 같은 타입의 구조체를 가리키는 포인터
    };
    
    int main(void) {
        struct Node n1 = {10, NULL};
        struct Node n2 = {20, NULL};
        struct Node n3 = {30, NULL};
    
        n1.next = &n2;
        n2.next = &n3;
        // 현재 리스트: n1(10) -> n2(20) -> n3(30)
    
        struct Node newNode = {15, NULL};
        newNode.next = n1.next; // 15 노드의 다음을 20 노드로 설정
        n1.next = &newNode;     // 10 노드의 다음을 15 노드로 설정
        // 현재 리스트: n1(10) -> newNode(15) -> n2(20) -> n3(30)
    
        struct Node *p = &n1;
        // 리스트 끝(NULL)에 도달할 때까지 순회 출력
        while (p != NULL) {
            printf("%d ", p->value);
            p = p->next;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 15 20 30
    ```
    
    ### 설명
    
    포인터를 이용한 진짜 ’연결 리스트(Linked List)’에 노드를 새로 삽입하는 알고리즘입니다.
    

## typedef와 중첩 구조체

- **문제 08-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    // typedef를 쓰면 'struct Student' 대신 'Student'라는 짧은 별칭으로 사용 가능합니다.
    typedef struct {
        char name[10];
        int age;
    } Student;
    
    int main(void) {
        Student s1 = {"Lee", 20};
        Student s2 = s1; // 구조체 내용 전체 복사
    
        s2.age = s2.age + 5;
        printf("%d%d\n", s1.age, s2.age);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20 25
    ```
    
- **문제 08-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    typedef struct {
        char city[20];
        int zipcode;
    } Address;
    
    typedef struct {
        char name[20];
        Address addr; // 구조체 안에 다른 구조체 포함 (중첩 구조체)
    } Person;
    
    int main(void) {
        Person p = {"Kim", {"Seoul", 12345}};
        p.addr.zipcode = p.addr.zipcode + 10;
        printf("%d\n", p.addr.zipcode);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    12355
    ```
    
    ### 설명
    
    점(.)을 두 번 찍어서 내부 구조체의 멤버에 순차적으로 접근합니다.
    
- **문제 08-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    typedef struct {
        char name[10];
        int score;
    } Subject;
    
    int main(void) {
        Subject sub[3] = { {"C", 70}, {"DB", 80}, {"OS", 90} };
        int total = 0;
    
        total = total + sub[0].score;
        total = total + sub[1].score;
        total = total + sub[2].score;
        printf("%d\n", total);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    240
    ```
    
- **문제 08-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    typedef struct {
        int x;
        int y;
    } Point;
    
    typedef struct {
        Point start;
        Point end;
    } Line;
    
    int main(void) {
        Line l1 = {{0, 0}, {10, 10}};
        Line l2 = l1;
    
        l2.end.x = l2.end.x + 5; // 15
        l2.end.y = l2.end.y - 5; // 5
    
        printf("%d%d%d%d\n", l1.end.x, l1.end.y, l2.end.x, l2.end.y);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 10 15 5
    ```
    
- **문제 08-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    typedef struct {
        int kor;
        int eng;
    } Score;
    
    typedef struct {
        char name[20];
        Score score;
    } Student;
    
    int main(void) {
        Student st = {"Hong", {80, 90}};
        int sum = 0;
    
        sum = st.score.kor + st.score.eng; // sum = 170
    
        st.score.kor = st.score.kor + 5;   // kor = 85
        st.score.eng = st.score.eng - 10;  // eng = 80
    
        sum = sum + st.score.kor + st.score.eng; // 170 + 85 + 80 = 335
    
        printf("%d%d%d\n", st.score.kor, st.score.eng, sum);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    85 80 335
    ```
    
- **문제 08-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    typedef struct Node {
        int value;
        struct Node *next;
    } Node;
    
    int main(void) {
        Node n1 = {10, NULL};
        Node n2 = {20, NULL};
        Node n3 = {30, NULL};
    
        n1.next = &n2;
        n2.next = &n3;
    
        Node *head = &n1;
        Node *prev = &n1; // n1
        Node *del  = &n2; // n2
    
        prev->next = del->next; // n1의 다음을 n2의 다음인 n3로 연결 (20 노드 스킵)
        del->next = NULL;       // 삭제된 노드의 연결 끊기
    
        Node *p = head;
        while (p != NULL) {
            printf("%d ", p->value);
            p = p->next;
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10 30
    ```
    
    ### 설명
    
    포인터 기반 연결 리스트의 중간 노드 삭제 알고리즘입니다.
    
- **문제 08-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<stdlib.h>
    
    typedef struct {
        char name[10];
        int age;
    } Student;
    
    int main(void) {
        Student s1 = {"Kim", 25};
        // malloc으로 동적 메모리 할당 (포인터 p로 가리킴)
        Student *p = (Student*)malloc(sizeof(Student));
    
        p->age = 40;
        s1.age = s1.age + 2; // s1.age = 27
        p->age = p->age + s1.age; // p->age = 40 + 27 = 67
    
        printf("%d%d\n", s1.age, p->age);
        free(p); // 동적 할당된 메모리 반환
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    27 67
    ```
    

## 공용체

- **문제 08-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    // 공용체는 멤버들이 '가장 큰 메모리 공간을 공유'합니다. (struct와 가장 큰 차이)
    union Number {
        int i;
        float f;
    };
    
    int main(void) {
        union Number n;
        n.i = 10;
        printf("%d, ", n.i);
    
        n.f = 3.5f; // 같은 메모리 공간에 실수 3.5f를 덮어씁니다.
        printf("%.1f\n", n.f);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10, 3.5
    ```
    
- **문제 08-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Data {
        int i;
        char c;
    };
    
    int main(void) {
        union Data d;
        d.i = 100;
        printf("%d ", d.i);
    
        d.c = 'A'; // 'A'의 아스키코드 65가 메모리 하위 바이트에 덮어씌워짐.
        printf("%c\n", d.c);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    100 A
    ```
    
    ### 설명
    
    메모리를 공유하므로 나중에 저장한 ’A’를 기준으로 읽으면 A가 출력됩니다.
    
- **문제 08-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Sample {
        int a;
        int b;
    };
    
    int main(void) {
        union Sample s;
        s.a = 5;
        s.b = 7; // a와 b는 완전히 동일한 4바이트 메모리를 사용하므로, b에 7을 쓰면 a도 7이 됩니다.
    
        printf("%d%d\n", s.a, s.b);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    7 7
    ```
    
- **문제 08-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Data {
        int i;    // 4바이트
        char ch;  // 1바이트
    };
    
    int main(void) {
        union Data d[2];
        d[0].i = 10;
        d[1].i = 20;
    
        d[0].ch = 'A'; // 하위 1바이트에 문자 'A'(아스키코드 65)가 덮어씌워집니다.
        // 리틀 엔디언(Little Endian) 시스템에서 가장 작은 메모리 주소(하위 1바이트)를 65로 덮어쓰면
        // 기존에 있던 값 10이 완전히 지워지고 d[0].i 값이 65로 변경됩니다.
    
        printf("%d%d\n", d[1].i, d[0].i);
        printf("%c\n", d[0].ch);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    20 65
    A
    ```
    
- **문제 08-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Info {
        char name[10];
    };
    
    int main(void) {
        printf("%u\n", sizeof(union Info));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    10
    ```
    
    ### 설명
    
    공용체의 크기는 소속된 멤버 중 가장 크기가 큰 놈의 크기로 결정됩니다.
    
- **문제 08-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Info {
        int count;      // 4바이트
        char name[10];  // 10바이트
    };
    
    int main(void) {
        printf("%u\n", sizeof(union Info));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    12
    ```
    
    ### 설명
    
    가장 큰 멤버인 10바이트 공간을 잡으려 하나, 4바이트(int)의 배수로 크기 정렬(Padding)이 발생하여 10보다 큰 4의 배수인 12바이트가 공용체의 최종 크기가 됩니다.
    
- **문제 08-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    
    union Data {
        int num;     // 4바이트
        char ch[4];  // 1바이트짜리 4칸 = 총 4바이트
    };
    
    int main() {
        union Data dt;
        dt.num = 0x41424344;
    
        // 16진수(%X) 41 42 43 44는 아스키코드로 각각 A, B, C, D에 해당합니다.
        // 리틀 엔디언(Little Endian) 시스템은 작은 자릿수를 메모리의 앞쪽(하위 주소)에 저장합니다.
        // 따라서 메모리 배치: ch[0]=0x44(D), ch[1]=0x43(C), ch[2]=0x42(B), ch[3]=0x41(A) 가 됩니다.
        printf("%X,%c%c%c%c\n", dt.num, dt.ch[0], dt.ch[1], dt.ch[2], dt.ch[3]);
    
        dt.ch[1] = 'X'; // 0x43(C) 자리를 0x58(X)로 덮어씌웁니다.
        // 메모리 배치가 0x44, 0x58, 0x42, 0x41 로 바뀌어 num은 0x41425844 가 됩니다.
    
        printf("%X,%c%c%c%c\n", dt.num, dt.ch[0], dt.ch[1], dt.ch[2], dt.ch[3]);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    41424344, D C B A
    41425844, D X B A
    ```
    
    ### 설명
    
    공용체를 활용해 메모리 엔디언 방식을 검증하는 매우 유명하고 중요한 문제입니다! 리틀 엔디언 환경에서는 숫자의 뒤쪽(작은 자릿수)이 메모리 배열의 앞쪽 인덱스로 들어간다는 점을 꼭 기억하세요.
    

# 09. 프로세스 생성

## 프로세스 생성

- **문제 09-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<unistd.h>
    
    int main(void) {
        int x = 0;
        fork(); // 현재 프로세스를 복제하여 자식 프로세스 생성
    
        x = 1;
        printf("%d\n", x);
    
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    1
    1
    ```
    
    ### 설명
    
    fork()가 호출되는 순간, 원본(부모 프로세스)과 똑같은 복사본(자식 프로세스)이 하나 더 생깁니다.
    fork() 이후의 코드인 `x = 1; printf("%d\n", x);`를 부모 프로세스와 자식 프로세스가 각각 한 번씩 독립적으로 실행하게 됩니다.
    따라서 1이 두 번 출력됩니다.
    
- **문제 09-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<unistd.h>
    #include<sys/types.h>
    
    int main(void) {
        pid_t pid;
        int x = 0;
    
        pid = fork();
    
        // fork()의 반환값(pid)에 따라 부모와 자식의 실행 흐름을 나눕니다.
        if( pid > 0 ){ // 부모 프로세스 (자식의 PID를 반환받음)
            x = 1;
            printf("부모 :%d\n", x);
        }
        else if( pid == 0 ){ // 자식 프로세스 (0을 반환받음)
            x = 2;
            printf("자식 :%d\n", x);
        }
        else{ // 포크 실패 시 (음수 반환)
            printf("실패");
        }
    
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    (출력 순서는 운영체제 스케줄링에 따라 부모/자식이 바뀔 수 있습니다)
    부모 : 1
    자식 : 2
    ```
    
    ### 설명
    
    fork()의 가장 기본적인 분기 처리 패턴입니다.
    fork()가 성공하면 부모에게는 자식의 프로세스 ID(양수)를 주고, 자식에게는 0을 줍니다.
    따라서 부모는 if(pid > 0) 블록을 실행하여 “부모 : 1”을 출력하고, 자식은 else if(pid == 0) 블록을 실행하여 “자식 : 2”를 출력합니다.
    
- **문제 09-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<sys/types.h>
    #include<unistd.h>
    
    int main(void) {
        int i = 0, v = 1, n = 5;
        pid_t pid;
        pid = fork();
    
        if( pid < 0 ){
            for( i = 0; i < n; i++ ) v += (i+1);
            printf("c =%d ", v);
        }
        else if( pid == 0 ){ // 자식 프로세스
            // v = 1 * 1 * 2 * 3 * 4 * 5 = 120
            for( i = 0; i < n; i++ ) v *= (i+1);
            printf("b =%d", v );
        }
        else{ // 부모 프로세스
            // v = 1 + 1 + 1 + 1 + 1 + 1 = 6
            for( i = 0; i < n; i++ ) v+=1;
            printf("a =%d, ", v);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    (부모 프로세스가 먼저 실행되었다고 가정할 경우)
    a = 6, b = 120
    ```
    
    ### 설명
    
    부모와 자식은 메모리 공간이 완벽히 분리되므로, 각각 계산하는 변수 v는 서로 영향을 주지 않습니다.
    자식 프로세스: v에 1부터 5까지 곱합니다 (팩토리얼 5! = 120). 따라서 “b = 120” 출력.
    부모 프로세스: v에 1을 5번 더합니다 (1 + 5 = 6). 따라서 “a = 6,” 출력.
    ※ 이 코드에는 대기(wait) 명령어가 없으므로, OS의 스케줄링에 따라 출력 순서가 뒤섞일 수 있습니다.
    
- **문제 09-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<sys/types.h>
    #include<sys/wait.h>
    #include<unistd.h>
    
    int main(void) {
        int i = 0, v = 1, n = 5;
        pid_t pid;
        pid = fork();
    
        if( pid < 0 ){
            for( i = 0; i < n; i++ ) v += (i+1);
            printf("c =%d ", v);
        }
        else if( pid == 0 ){ // 자식 프로세스
            // v = 1 * 1 * 2 * 3 * 4 * 5 = 120
            for( i = 0; i < n; i++ ) v *= (i+1);
            printf("b =%d, ", v );
        }
        else{ // 부모 프로세스
            wait(NULL); // ★ 자식 프로세스가 완전히 끝날 때까지 여기서 일시 정지(대기)합니다!
    
            // 자식이 죽은 후에 아래 코드를 실행합니다.
            for( i = 0; i < n; i++ ) v+=1;
            printf("a =%d", v);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    (출력 순서가 확정됨!)
    b = 120, a = 6
    ```
    
    ### 설명
    
    3번 문제와 코드가 같지만 부모 프로세스 블록에 `wait(NULL);`이 추가되었습니다.
    wait() 함수는 자식 프로세스의 작업이 끝날 때까지 부모를 대기하게 만듭니다.
    따라서 자식이 먼저 계산을 마치고 “b = 120,”을 출력한 뒤, 부모가 멈춤을 풀고 “a = 6”을 출력하게 됩니다.
    
- **문제 09-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<unistd.h>
    
    int main(void) {
        for( int i = 0; i < 3; i++ ){
            fork();
        }
        return 0;
    }
    
    // [문제] 다음 프로그램을 수행하였을 때, 현재 수행 중인 프로세스의 개수는 몇 개인지 쓰시오.
    // [정답] 8개
    ```
    
    ### 설명
    
    반복문 안에서 fork()를 호출할 때마다 현재 존재하는 ‘모든’ 프로세스가 각자 fork()를 수행하여 2배로 분열합니다.
    i = 0 일 때 : 1개 -> 2개
    i = 1 일 때 : 2개 -> 4개
    i = 2 일 때 : 4개 -> 8개
    공식으로 기억하시면 편합니다. 총 프로세스 개수 = 2^N 개 (여기서 N은 fork의 실행 횟수)
    
- **문제 09-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<unistd.h>
    
    int main(void) {
        for( int i = 0; i < 3; i++ ){
            fork();
        }
        return 0;
    }
    
    // [문제] 다음 프로그램을 수행하였을 때, '새로 생성된 프로세스'의 개수는 몇 개인지 쓰시오.
    // [정답] 7개
    ```
    
    ### 설명
    
    5번 문제와 동일한 원리로 전체 프로세스는 8개가 됩니다.
    그러나 문제에서 “새로 생성된(자식)” 프로세스의 개수만 물어보았으므로,
    총 8개의 프로세스 중 최초부터 실행 중이었던 ’원본 부모 프로세스 1개’를 뺀 7개가 정답이 됩니다.
    공식: 새로 생성된 프로세스 개수 = (2^N) - 1 개
    

# 10. C언어 주요 함수

## C언어 주요 함수

- **문제 10-01**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char str[] = "Hello, World!";
        printf("%d%d\n", strlen(str), strlen(str + 7));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    13 6
    ```
    
    ### 설명
    
    strlen() 함수는 문자열의 길이(널 문자 ‘\0’ 제외)를 반환합니다.
    1. strlen(str) : “Hello, World!” 전체 길이이므로 공백과 기호를 포함해 13입니다.
    2. strlen(str + 7) : 배열의 시작 주소에서 7칸 뒤로 이동한 곳(“World!”)부터 길이를 셉니다. 따라서 6입니다.
    
- **문제 10-02**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char src[] = "ABC";
        char dest[10] = "XXXX";
    
        strcpy(dest + 2, src);
        printf("%s\n", dest);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    XXABC
    ```
    
    ### 설명
    
    strcpy(도착지, 출발지) : 출발지 문자열을 널 문자(‘\0’)를 포함하여 도착지로 복사합니다.
    dest 배열은 초기에 ‘X’, ‘X’, ‘X’, ‘X’, ‘\0’ 로 구성되어 있습니다.
    dest + 2 위치(세 번째 ‘X’)부터 “ABC”를 복사하여 덮어씁니다.
    결과적으로 ‘X’, ‘X’, ‘A’, ‘B’, ‘C’, ‘\0’ 이 되어 “XXABC”가 출력됩니다.
    
- **문제 10-03**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char src[] = "Source";
        char dest[10] = "123456789";
    
        strncpy(dest, src, 3);
        printf("%s\n", dest);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Sou456789
    ```
    
    ### 설명
    
    strncpy(도착지, 출발지, 개수) : 지정한 개수만큼만 문자를 복사합니다.
    src에서 앞의 3글자 “Sou”만 dest의 맨 앞(인덱스 0, 1, 2)에 덮어씁니다.
    ※ 주의: strncpy는 복사할 길이만큼만 딱 복사하고 끝내기 때문에 널 문자(‘\0’)를 자동으로 붙여주지 않습니다.
    따라서 기존 문자열의 뒷부분 “456789”는 그대로 남습니다.
    
- **문제 10-04**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char str[20] = "Hello";
    
        strcat(str, "!");
        strcat(str, "C");
    
        printf("%s\n", str);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    Hello!C
    ```
    
    ### 설명
    
    strcat(목적지, 덧붙일문자열) : 목적지 문자열의 끝(널 문자가 있는 곳)에 새로운 문자열을 이어 붙입니다(Concatenate).
    “Hello” 뒤에 “!”가 붙어서 “Hello!”가 되고, 이어서 “C”가 붙어 “Hello!C”가 됩니다.
    
- **문제 10-05**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char a[] = "ABC";
        char b[] = "ABD";
    
        int r1 = strcmp(a, b);
        int r2 = strncmp(a, b, 2);
    
        printf("%d%d\n", r1, r2);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    -1 0  (※ 컴파일러에 따라 첫 번째 결과는 -1 음수 값으로 나올 수 있음)
    ```
    
    ### 설명
    
    strcmp(문자열1, 문자열2) : 두 문자열을 사전순으로 비교합니다. 완전히 같으면 0을 반환합니다.
    문자열1이 사전순으로 더 앞서면 음수(-1)를 반환합니다. “ABC”의 ’C’가 “ABD”의 ’D’보다 앞서므로 음수(-1) 반환.
    strncmp(문자열1, 문자열2, 개수) : 앞에서부터 지정한 개수만큼만 비교합니다.
    2글자(“AB”와 “AB”)만 비교하므로 두 문자열이 완전히 같다고 판단하여 0을 반환합니다.
    
- **문제 10-06**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char str[] = "banana";
        char *p = strchr(str, 'a');
    
        if (p) {
            printf("%s\n", p);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    anana
    ```
    
    ### 설명
    
    strchr(문자열, 찾을문자) : 문자열의 “앞에서부터” 처음으로 일치하는 문자의 포인터(메모리 주소)를 반환합니다.
    “banana”에서 첫 번째 ‘a’(인덱스 1)를 찾습니다.
    반환된 포인터 p를 %s로 출력하면 그 위치부터 문자열 끝까지 쭈욱 출력되므로 “anana”가 나옵니다.
    
- **문제 10-07**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char str[] = "Hello, World!";
        char *p = strrchr(str, 'l');
    
        if (p) {
            printf("%s\n", p);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    ld!
    ```
    
    ### 설명
    
    strrchr(문자열, 찾을문자) : 문자열의 “뒤에서부터(Reverse)” 처음으로 일치하는 문자의 포인터를 반환합니다.
    뒤에서부터 탐색하여 “World!”에 있는 ’l’을 찾습니다. 그 위치부터 끝까지 출력하면 “ld!”가 됩니다.
    
- **문제 10-08**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<string.h>
    
    int main(void) {
        char str[] = "ababcab";
        char *p = strstr(str, "abc");
    
        if (p) {
            printf("%s\n", p);
        }
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    abcab
    ```
    
    ### 설명
    
    strstr(문자열, 찾을부분문자열) : 문자열 안에서 “특정 문자열(String)”이 처음 등장하는 위치의 포인터를 반환합니다.
    “ababcab” 안에서 처음 나오는 “abc”의 시작 위치를 찾아 반환하므로, 그곳부터 출력하면 “abcab”가 됩니다.
    
- **문제 10-09**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<math.h>
    
    int main(void) {
        double x = sqrt(16) + pow(2, 3);
        printf("%.0f\n", x);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    12
    ```
    
    ### 설명
    
    <math.h> 라이브러리의 수학 함수들입니다.
    sqrt(16) : 제곱근(루트) 함수. 루트 16이므로 4.0 입니다.
    pow(2, 3) : 거듭제곱(Power) 함수. 2의 3승이므로 8.0 입니다.
    4.0 + 8.0 = 12.0 이며, 서식 지정자 %.0f를 통해 소수점 이하를 출력하지 않으므로 12가 됩니다.
    
- **문제 10-10**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<math.h>
    
    int main(void) {
        double a = ceil(2.1);
        double b = floor(3.8);
        double c = round(2.5);
        double d = round(-2.5);
    
        printf("%.0f%.0f%.0f%.0f\n", a, b, c, d);
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    3 3 3 -3
    ```
    
    ### 설명
    
    올림, 내림, 반올림을 처리하는 <math.h> 함수들입니다.
    ceil(2.1) : 무조건 올림(천장) 처리하여 3.0 이 됩니다.
    floor(3.8) : 무조건 내림(바닥) 처리하여 3.0 이 됩니다.
    round(2.5) : 반올림 처리 함수. .5 이상이므로 절댓값이 커지는 쪽으로 반올림되어 3.0 이 됩니다.
    round(-2.5) : 반올림 처리. 음수일 때도 절댓값이 커지는 방향(0에서 멀어지는 방향)으로 올리므로 -3.0 이 됩니다.
    
- **문제 10-11**
    
    ### 코드
    
    ```c
    #include<stdio.h>
    #include<stdlib.h>
    #include<ctype.h>
    
    int main(void) {
        char numStr[] = "12";
        char c = 'a';
    
        int n = atoi(numStr) + 3;
        printf("%d%c%c\n", n, toupper(c), tolower('Z'));
        return 0;
    }
    ```
    
    ### 실행 결과
    
    ```
    15 A z
    ```
    
    ### 설명
    
    atoi(문자열) : ASCII to Integer의 약자로, 숫자로 이루어진 ‘문자열’을 실제 ’정수형 숫자(int)’로 변환합니다. “12”가 12가 되어 12 + 3 = 15.
    toupper(문자) : 소문자를 대문자로 변환합니다. ’a’ -> ‘A’.
    tolower(문자) : 대문자를 소문자로 변환합니다. ‘Z’ -> ‘z’.
