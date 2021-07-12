#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cstring>

int i = 1;

//MBTI 타입 판단 변수
int score_I_E = 0;
int score_S_N = 0;
int score_T_F = 0;
int score_J_P = 0;

//질문 출력
int AskQuestion(int num);

//객관식 보기 출력
int SelectNumber();

//번호 입력
int getNum();

//I-E 타입 점수 확인
int ScoreIEQuestion(int input);

//S-N 타입 점수 확인
int ScoreSNQuestion(int input);

//T-F 타입 점수 확인
int ScoreTFQuestion(int input);

//J-P 타입 점수 확인
int ScoreJPQuestion(int input);

//결정된 MBTI 분석 결과 출력
int AnalyzeMyType(char* myTypeArray);
