// Ch01_Basic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> // Input/Output Stream

#define NUMBER 100

using namespace std;
// std::cout => cout

int main()
{
    std::cout << "Hello World!\n";
    // std : standard
    cout << "Hello C++\n";
    cout << "C++ Programming\n";
    cout << 500 << endl; //endl : endline
    cout << NUMBER + 50 << endl;

    //여기서부터
    int Number1; //변수 선언 
    Number1 = 10;// 초기값 대입

    int Number2 = 10; //변수 선언 및 초기화
    int Number3 = 1, Number4 = 2;
    Number3 = 5;

    //심볼릭 상수(Constant) 수정불가능하게 만들기 
    const int Number5 = 10;

    //데이터 타입 - 숫자 데이터 타입 - 정수형,실수형
    // 정수형 타입(int:integer)
    int Num1 = 10;
    short Num2 = 10;
    long Num3 = 10;


    //실수형 타입(float)
    float Num10 = 10.4544f;
    double Num11 = 1.234;

    //문자데이터 : 문자(1개), 문자열(2개 이상)
    // char : character
    // char 타입 문자 표현 = '' 사용
    // 문자열 :""사용


    char Letter = 'a';


    //bool 타입 데이터
    //참/거짓 구분 : True/False, Tes/No, On/off
    bool Condition = true;

    //auto 선언 키워드
    auto AutoNum = 10;

    cout << Number1 << std::endl; //여기까지





    int Arithmetic1 = 30;
    int Arithmetic2 = 17;

    cout << Arithmetic1 + Arithmetic2 << endl;
    cout << Arithmetic1 - Arithmetic2 << endl;
    cout << Arithmetic1 * Arithmetic2 << endl;
    cout << Arithmetic1 / Arithmetic2 << endl;
    cout << Arithmetic1 % Arithmetic2 << endl;

    // 증감 연산에는 반복 실행의 개념이 포함(30+3, 33+3, 36+3...)
    int Inc = 30;

    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;
    Inc = Inc + 3;
    cout << Inc << endl;

    Inc = Inc + 3; // 제대로 된 형태
    Inc += 3; // 줄인 형태

    Inc = Inc + 1; //제대로 된 형태
    Inc += 1; //줄인 형태
    Inc++; // 1씩 증가하는 애는 이렇게 표기 가능하게도 해놓자 하도 많이 쓰니까

    Inc = Inc - 1;
    Inc -= 1;
    Inc--;

    Inc = Inc * 3;
    Inc *= 3;
    Inc /= 3;
    Inc %= 3;



}

// 비트와 바이트에 대한 이해
/*
bit : 컴퓨터 데이터 저장의 최소단위
byte : 컴퓨터 정보 저장의 최소단위(8bit)
데이터와 정보의 차이: 의미가 있는 데이터냐 아닌 데이터냐
1byte = 8bit

2진수 숫자 데이터 : 0,1
진법 계산
1010 => 2^3 * 1 + 2^2 * 0 + 2^1 * 1 + 2^0 * 0 = 10
2^0 ~ 2^10 : 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024
색 표현, 문자, 아이피주소 표현 : 1byte 기준으로 확장
*/