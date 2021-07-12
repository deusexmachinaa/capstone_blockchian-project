#include "header.h"


int main() {

	int input;
	char myTypeArray[5] = { 0, };

	printf("MBTI 검사를 시작합니다.\n");
	printf("총16문항 입니다.\n");

	AskQuestion(1);
	SelectNumber();
	input = getNum();
	ScoreIEQuestion(input);

	AskQuestion(2);
	SelectNumber();
	input = getNum();
	ScoreIEQuestion(input);

	//점수 예외
	AskQuestion(3);
	SelectNumber();
	input = getNum();
	if (input == 1) {
		score_I_E = score_I_E - 3;
	}
	else if (input == 2) {
		score_I_E = score_I_E - 1;
	}
	else if (input == 3) {
		score_I_E = score_I_E + 1;
	}
	else if (input == 4) {
		score_I_E = score_I_E + 3;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		input = getNum();
	}

	//점수 예외
	AskQuestion(4);
	SelectNumber();
	input = getNum();
	if (input == 1) {
		score_I_E = score_I_E - 3;
	}
	else if (input == 2) {
		score_I_E = score_I_E - 1;
	}
	else if (input == 3) {
		score_I_E = score_I_E + 1;
	}
	else if (input == 4) {
		score_I_E = score_I_E + 3;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		input = getNum();
	}

	//첫번째 타입 결정
	if (score_I_E < 0) {
		myTypeArray[0] = 'I';
	}
	else {
		myTypeArray[0] = 'E';
	}

	AskQuestion(5);
	SelectNumber();
	input = getNum();
	ScoreSNQuestion(input);

	AskQuestion(6);
	SelectNumber();
	input = getNum();
	ScoreSNQuestion(input);

	AskQuestion(7);
	SelectNumber();
	input = getNum();
	ScoreSNQuestion(input);

	AskQuestion(8);
	SelectNumber();
	input = getNum();
	ScoreSNQuestion(input);

	//두번째 타입 결정
	if (score_S_N < 0) {
		myTypeArray[1] = 'S';
	}
	else {
		myTypeArray[1] = 'N';
	}

	AskQuestion(9);
	SelectNumber();
	input = getNum();
	ScoreTFQuestion(input);

	AskQuestion(10);
	SelectNumber();
	input = getNum();
	ScoreTFQuestion(input);

	//점수 예외
	AskQuestion(11);
	SelectNumber();
	input = getNum();
	if (input == 1) {
		score_T_F = score_T_F + 3;
	}
	else if (input == 2) {
		score_T_F = score_T_F + 1;
	}
	else if (input == 3) {
		score_T_F = score_T_F - 3;
	}
	else if (input == 4) {
		score_T_F = score_T_F - 3;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		input = getNum();
	}

	//점수 예외
	AskQuestion(12);
	SelectNumber();
	input = getNum();
	if (input == 1) {
		score_T_F = score_T_F - 3;
	}
	else if (input == 2) {
		score_T_F = score_T_F - 1;
	}
	else if (input == 3) {
		score_T_F = score_T_F + 1;
	}
	else if (input == 4) {
		score_T_F = score_T_F + 3;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		input = getNum();
	}

	//세번째 타입 결정
	if (score_T_F < 0) {
		myTypeArray[2] = 'T';
	}
	else {
		myTypeArray[2] = 'F';
	}

	//점수 예외
	AskQuestion(13);
	SelectNumber();
	input = getNum();
	if (input == 1) {
		score_J_P = score_J_P + 3;
	}
	else if (input == 2) {
		score_J_P = score_J_P + 1;
	}
	else if (input == 3) {
		score_J_P = score_J_P + 1;
	}
	else if (input == 4) {
		score_J_P = score_J_P + 3;
	}
	else {
		printf("잘못 입력하셨습니다.\n");
		input = getNum();
	}

	AskQuestion(14);
	SelectNumber();
	input = getNum();
	ScoreJPQuestion(input);

	AskQuestion(15);
	SelectNumber();
	input = getNum();
	ScoreJPQuestion(input);

	AskQuestion(16);
	SelectNumber();
	input = getNum();
	ScoreJPQuestion(input);

	//마지막 타입 결정
	if (score_J_P < 0) {
		myTypeArray[3] = 'J';
	}
	else {
		myTypeArray[3] = 'P';
	}

	//각 타입 항목 점수 출력
	printf("\nscore_I_E: %d\n", score_I_E);
	printf("score_S_N: %d\n", score_S_N);
	printf("score_T_F: %d\n", score_T_F);
	printf("score_J_P: %d\n", score_J_P);

	//결정된 타입 출력
	printf("\n당신은 %s 유형입니다.\n\n", myTypeArray);

	//타입 분석
	AnalyzeMyType(myTypeArray);


	return 0;
}


int AskQuestion(int num) {
	switch (num) {
	case 1:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("나는 처음 보는 사람에게 자신을 소개하는 것이 두렵지 않다.\n");
		break;
	case 2:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("내가 스트레스를 푸는 방법은 사람들을 만나는 것 이다.\n");
		break;
	case 3:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("대화를 시작하기 보다 맞장구 치는 걸 좋아한다.\n");
		break;
	case 4:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("술자리에서 노는 것 보다 집에서 게임하는게 좋다.\n");
		break;
	case 5:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("업무를 하거나 과제를 할 때 계획을 먼저 세운다.\n");
		break;
	case 6:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다.\n");
		break;
	case 7:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("가끔 비현실적인 망상을 하는 편이다.\n");
		break;
	case 8:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("나는 내성적인 성격이다.\n");
		break;
	case 9:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("상대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편이다.\n");
		break;
	case 10:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다.\n");
		break;
	case 11:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다.\n");
		break;
	case 12:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다.\n");
		break;
	case 13:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("방 정리가 되어있지 않으면 일을 시작할 수 없다.\n");
		break;
	case 14:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("과제나 업무는 최대한 미루었다가 한꺼번에 하는 편이다.\n");
		break;
	case 15:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("호기심은 나를 움직이는 원동력이다.\n");
		break;
	case 16:
		printf("\n--------------16문항중 %d 문항입니다.---------------\n", i++);
		printf("프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다.\n");
		break;
	default:
		break;
	}
	return num;
}

int SelectNumber() {
	printf("①.강한 긍정\n");
	printf("②.약한 긍정\n");
	printf("③.약한 부정\n");
	printf("④.강한 부정\n");

	return 0;
}

int getNum() {
	int input;
	printf("번호를 입력해주세요: ");

	fseek(stdin, 0, SEEK_END);
	
	scanf("%d", &input);

	return input;
}

int ScoreIEQuestion(int input) {
	for (; ; ) {
		if (input == 1) {
			score_I_E = score_I_E + 3;
			break;
		}
		else if (input == 2) {
			score_I_E = score_I_E + 1;
			break;
		}
		else if (input == 3) {
			score_I_E = score_I_E - 1;
			break;
		}
		else if (input == 4) {
			score_I_E = score_I_E - 3;
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			input = getNum();
			continue;
		}
	}

	return input;
}

int ScoreSNQuestion(int input) {
	for (; ; ) {
		if (input == 1) {
			score_S_N = score_S_N + 3;
			break;
		}
		else if (input == 2) {
			score_S_N = score_S_N + 1;
			break;
		}
		else if (input == 3) {
			score_S_N = score_S_N - 1;
			break;
		}
		else if (input == 4) {
			score_S_N = score_S_N - 3;
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			input = getNum();
			continue;
		}
	}

	return input;
}

int ScoreTFQuestion(int input) {
	for (; ; ) {
		if (input == 1) {
			score_T_F = score_T_F + 3;
			break;
		}
		else if (input == 2) {
			score_T_F = score_T_F + 1;
			break;
		}
		else if (input == 3) {
			score_T_F = score_T_F - 1;
			break;
		}
		else if (input == 4) {
			score_T_F = score_T_F - 3;
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			input = getNum();
			continue;
		}
	}

	return input;
}

int ScoreJPQuestion(int input) {

	for (; ; ) {
		if (input == 1) {
			score_J_P = score_J_P + 3;
			break;
		}
		else if (input == 2) {
			score_J_P = score_J_P + 1;
			break;
		}
		else if (input == 3) {
			score_J_P = score_J_P - 1;
			break;
		}
		else if (input == 4) {
			score_J_P = score_J_P - 3;
			break;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			input = getNum();
			continue;
		}
	}

	return input;
}

int AnalyzeMyType(char* myTypeArray) {
	if (strcmp(myTypeArray, "ISTJ") == 0) {
		printf("당신은 논리주의자 입니다. 사실에 대하여 정확하고 체계적으로 기억하며 신중하고 책임감이 있습니다.\n");
		printf("대표적 인물: 워렌버핏(가치 투자의 황제)\n");
	}
	else if (strcmp(myTypeArray, "ISFJ") == 0) {
		printf("당신은 조용하고 차분하며 친근합니다. 가장 믿음직스러운 사람입니다.\n");
		printf("대표적 인물: 아이유(가수)\n");
	}
	else if (strcmp(myTypeArray, "INFJ") == 0) {
		printf("당신은 인내심이 많고 사람들을 좋아합니다. 눈치가 빠르고 영감이 있습니다.\n");
		printf("대표적 인물: 루크 스카이워커(제다이)\n");
	}
	else if (strcmp(myTypeArray, "INTJ") == 0) {
		printf("당신은 논리적이고 효율성을 중시하는 냉철한 사람입니다.\n");
		printf("대표적 인물: 진용진(유튜버)\n");
	}
	else if (strcmp(myTypeArray, "ISTP") == 0) {
		printf("조용하고 과묵하고 손재주가 있는 공학자 스타일 입니다.\n");
		printf("대표적 인물: 박명수(연예인)\n");
	}
	else if (strcmp(myTypeArray, "ISFP") == 0) {
		printf("다정하고 착하고 상대방에 대한 배려심이 많습니다. 주위 사람들에게 많이 휩쓸리는 성격입니다.\n");
		printf("대표적 인물: 마이클 잭슨 (가수)\n");
	}
	else if (strcmp(myTypeArray, "INFP") == 0) {
		printf("당신은 정열적이고 완벽을 추구하며 유토피아를 추구하는 성격입니다.\n");
		printf("대표적 인물: 빈센트 반 고흐 (화가)\n");
	}
	else if (strcmp(myTypeArray, "INTP") == 0) {
		printf("당신은 조용하고 과묵하며 상상을 즐기는 사색가 입니다. 사회성이 부족하다는 말을 많이 듣습니다.\n");
		printf("대표적 인물: 알버트 아인슈타인 (물리학자)\n");
	}
	else if (strcmp(myTypeArray, "ESTP") == 0) {
		printf("당신은 활동하는 것을 좋아하는 사업가형 입니다.\n");
		printf("대표적 인물: 존 F 케네디 (대통령)\n");
	}
	else if (strcmp(myTypeArray, "ESFP") == 0) {
		printf("당신은 자유로운 영혼을 갖고 있는 연예인 스타일 입니다.\n");
		printf("대표적 인물: 레오나르도 디카프리오 (영화배우)\n");
	}
	else if (strcmp(myTypeArray, "ENFP") == 0) {
		printf("당신은 넘치는 상상력을 바탕으로 항상 새로운 가능성을 찾아보는 탐험가입니다.\n");
		printf("대표적 인물: 윌 스미스 (배우)\n");
	}
	else if (strcmp(myTypeArray, "ENTP") == 0) {
		printf("당신은 논쟁을 즐기며 사람을 만나는 것을 좋아합니다.\n");
		printf("대표적 인물: 토니 스타크 (아이언맨)\n");
	}
	else if (strcmp(myTypeArray, "ESTJ") == 0) {
		printf("현실적이며 구체적이고 사실적이며 조직을 이끌어나가는 리더형 입니다.\n");
		printf("대표적 인물: 조자룡 (삼국지)\n");
	}
	else if (strcmp(myTypeArray, "ESFJ") == 0) {
		printf("동정심이 많고 다른 사람에게 관심을 주는 것을 좋아하며 협력을 조항하고 동료애가 끈끈합니다.\n");
		printf("대표적 인물: 허경영(정치인)\n");
	}
	else if (strcmp(myTypeArray, "ENFJ") == 0) {
		printf("당신은 따뜻하고 적극적이며 사교성이 풍부하고 이타적입니다.\n");
		printf("대표적 인물: 요한 바오로 2세 (교황)\n");
	}
	else if (strcmp(myTypeArray, "ENTJ") == 0) {
		printf("당신은 열정적이며 솔직하고 지도력과 통솔력이 있습니다. 활동적이고 장기적인 계획을 좋아합니다.\n");
		printf("대표적 인물: 고든 램지 (요리사)\n");
	}
	else {
		printf("외계인!\n");
	}
	return 0;
}
