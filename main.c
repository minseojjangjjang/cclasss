#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "game.h"

int main() {
    int choice; // 선택 변수 선언
    int choice2;
    int gameplaying = 1;
    int score = 0;{
        int i;
        char text[] = "\n\n\n\n\n\n\n                                     로딩 중 .";
        for (i = 0; i < 3; i++) {
            system("clear");printf("%s\n", text);usleep(250000);system("clear");usleep(250000);
        }
    }{
        int i;
        char text[] = "\n\n\n\n\n\n\n                                     로딩 중 . .";
        for (i = 0; i < 3; i++) {
            system("clear");printf("%s\n", text);usleep(250000);system("clear");usleep(250000);
        }
    }{
        int i;
        char text[] = "\n\n\n\n\n\n\n                                     로딩 중 . . .";
        for (i = 0; i < 3; i++) {
            system("clear");printf("%s\n", text);usleep(250000);system("clear");usleep(250000);
        }
    }
    while (gameplaying==1) {
        showGameTitleScreen();
        scanf("%d", &choice);
        int a =1; // 지역변수: while문 실행시키기 위해 선언
        while (a==1)
        {
            switch (choice) {
                    // 지역변수:  함수 내에서쓰고 말 거라 안에서 선언해줌!
                    int choice1=0;
                    int choice2=0;
                    int choice3=0;
                case 1:
                    // 게임 시작
                    printf(" \n");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf(" \n");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf(" \n");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf(" \n");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf("\n ");printf(" \n");printf("\n ");printf(" \n");printf(" \n");printf("\n ");printf("\n ");printf(" \n");
                    printf("터벅터벅.\n");getchar();
                    printf("?:안녕!\n");getchar();
                    printf("조민서: 나는 유한대 공주 조민서라고 해\n");getchar();
                    printf("조민서: 내가 요즘 좋아하는 사람이 생겼는데..도와줄래?\n");getchar();
                    printf("조민서: 도와주어 응? 제발 도와조 응 제발...(콩순이 빙의한 듯)\n");getchar();
                    printf("조민서: 뭐 도와준다구?ㅎ 역시 그럴 줄 알았어\n");getchar();
                    printf("조민서: 이따 짝남 만나면 어떻게 말해야할 지 알려줘!!\n");getchar();
                    printf("조민서: 그럼 이따 보자!!\n");getchar();
                    printf("나: 뭐야 이 앙큼한 공주는..\n");getchar();
                    printf("나: 너무 도와주고싶어지잖아?!\n");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf("---강의가 끝나고---\n");getchar();
                    printf("짝남이 말을 건다\n");getchar();
                    printf("짝남: 민서야 코노갈래?\n");getchar();
                    printf("조민서: 응 (ㅈㄴㅈㄴㅈㄴㅈㄴㅈㄴ) 갈래!!\n ");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf("---코인 노래방 안---\n");getchar();
                    printf("짝남: 너 먼저 불러!!ㅎㅎ\n");getchar();
                    printf("조민서: 아! 응...\n");getchar();
                    printf("조민서: 어떤 노래를 불러야하지??ㅜㅜ\n\n");getchar();
                    
                    printf("\033[32m                                  <1번째 관문>\033[0m\n");
                    printf("\033[34m------------------------------------------------------------------------------------------\033[0m\n");
                    printf("1. 화끈한 고음을 선사할 수 있는 ");
                    printf("\033[31m'티얼스'\033[0m\n");
                    printf("2. 카리스마 넘치는 멋진 랩을 자랑할 수 있는 ");
                    printf("\033[31m'한번도 안 틀리고 누구도 부르기 어려운 노래'\033[0m\n");
                    printf("\033[34m------------------------------------------------------------------------------------------\033[0m\n");
                    
                    printf("선택: ");
                    scanf("%d", &choice1);
                    printf("\n");
                    
                    if (choice1 == 1) {
                        score -= 5;
                        printf("조민서: 잔인한! 여자라!!\n\n");getchar(); //엔터 누르지 않았는데 바로 다음 대사 나옴
                        getchar();
                        printf("조민서: 나를 욕하지는 마!!!!\n");getchar();
                        printf("조민서: 다시히!인(삑소리)\n");getchar();
                        printf("조민서: (헉....)\n");getchar();
                        printf("조민서: (하..쪽팔려..)\n");getchar();
                        printf("짝남: 음이 너무 높았네~~ㅎㅎ\n");getchar();
                        printf("조민서: (헉 다정해..)\n");getchar();
                        printf("조민서: (대체 짝남이는 나를 어떻게 생각하고있을까..?)\n");getchar();
                        printf("---현재 짝남의 속마음---\n");getchar();
                        printf("짝남: (난 노래도 못 부르는 음치...)\n");getchar();
                        printf("짝남: (정말정말 싫어!!!!웩!!!!)\n");getchar();
                        printf("\033[36m호감도 -5: 삑사리, 음치 프레임\033[0m\n");getchar();//여기도
                       
                        
                    } else if (choice1 == 2) {
                        score += 5;
                        printf("조민서: 너를 처음 만난 그 날은\n");getchar();
                        printf("조민서: 드미트리 메드베데프 러시아 대통령 재임 시절\n");getchar();
                        printf("조민서: 확률분포표상에는 있을 수 없는 청단풍잎이 우거진 붉은 수수밭에서...\n");getchar();
                        printf("짝남: 와우, bravo 완벽해 민서야!\n");getchar();
                        printf("짝남: 그 빠른 랩을 혀 한번 꼬이지 않고 부르다니....\n");getchar();
                        printf("짝남: 너 정말 재능있다!!!\n");getchar();
                        printf("조민서: (연습도 안 해봤는데 나.. 재능충일 수도..?) 아 ㅎ 고마워\n");getchar();
                        printf("\033[35m호감도 +5 : 의외의 재능\033[0m\n");getchar();
                    }
                    
                    
                    printf("\n 그렇게 노래를 신나게 부르고 난 후..\n");getchar();
                    printf("조민서: 하 재밌었다!!\n");getchar();
                    printf("터벅터벅\n");getchar();
                    printf("집에 도착했다\n");getchar();
                    printf("---스윗홈---\n");getchar();
                    printf("\n\n띠링♪\n\n");getchar();
                    printf("조민서: 오잉 머지?\n");getchar();
                    printf("조민서: 헉 짝남이다!\n");getchar();
                    printf("짝남: 민서야 집 잘 들어갔어?\n");getchar();
                    printf("조민서: 응 난 잘 들어갔지ㅎㅎ 넌 뭐하고 있어?\n");getchar();
                    printf("짝남: 난 책 읽는 중이야\n");getchar();
                    printf("조민서: 무슨 책 읽어??\n");getchar();
                    printf("짝남: 나는...\n");getchar();
                    printf("짝남이 할 대답은?\n");getchar();
                    
                    printf("\033[32m           <2번째 관문>\033[0m\n");
                    printf("\033[34m-----------------------------------------\033[0m\n");
                    printf("1. ");
                    printf("\033[31m'누가 내 머리에 똥 쌌어'\033[0m\n");
                    printf("2. ");
                    printf("\033[31m'나 주~책~~'\033[0m\n");
                    printf("\033[34m-----------------------------------------\033[0m\n");
                   
                    printf("선택: ");
                    printf("\n");
                    scanf("%d", &choice1);
                    
                    if (choice1 == 1) {
                    score += 5;
                
                        printf("'짝남: 누가 내머리에 똥쌌어'를 읽고 있었어ㅎㅎ\n\n");getchar();//적용 안됨
                        getchar();
                        printf("조민서: 헐 나도 그 책 봤는데 그 책 되게 유명하지않아?\n");getchar();
                        printf("짝남: 당연히 유명하지~ 어릴 때 필독 도서잖아~ㅎㅎ\n");getchar();
                        printf("조민서: 너 이상형 같은 거 있어?\n");getchar();
                        printf("내 이상형은 이름이 '조'로 시작해서 '서'로 끝나는 사람이야!\n");getchar();
                        printf("조민서: (저기 부합하는 거 ㄹㅇ 나 아닌가? 아 근데 너무 도끼병 같나..)\n");getchar();
                        printf("조민서: 그렇구나 되게 구체적이네.\n");getchar();
                        printf("짝남: 나 너한테 관심 많아^^\n");getchar();
                        printf("조민서: 아 정말? 인기짱에게 받는 관심이라니ㅎ 감사한 걸 ㅋㅋ\n");getchar();
                        printf("\033[35m호감도 +5 : 두근두근 시그널\033[0m\n");getchar();
                    }
                    
                    else if (choice1 == 2) {
                    score -= 5;
                        printf("짝남: 나 주~~책^^\n");getchar();
                        printf("조민서:(푸흐- 귀여워..)ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ뭐래 ㅎㅎ\n");getchar();
                        printf("짝남: 너 하나도 안 웃긴데 억지로 웃어주는거지?\n");getchar();
                        printf("조민서: 아냐.. 난 단지 귀여워서..ㅠㅠ(뭐야 10R 왜저래)\n");getchar();
                        printf("짝남: 난 귀엽지않아 흥.\n");getchar();
                        printf("짝남: 난 엄마가 밥 먹으래서 가볼게.\n");getchar();
                        printf("조민서: 응.....\n");getchar();
                        printf("조민서: (난 정말 바본가봐..ㅜ)\n");getchar();
                        printf("\033[36m호감도 -5: 밥>>>>>>>>>>>>>>>조민서\033[0m\n");getchar();
                    }
                    
                    printf("조민서: (내일은 신나는 주말!!!!#!@$^&*^$#@)\n");getchar();
                    printf("조민서: (야무지게......)\n");getchar();
                    printf("조민서: (집콕이나 해볼까나?!!?!?)\n");getchar();
                    printf("조민서: (껄껄...skrrrrrr)\n");getchar();
                    printf("띠링♪\n");getchar();
                    printf("조민서: (엥 뭐지)\n");getchar();
                    printf("---핸드폰 알림 확인 중---\n");getchar();
                    printf("짝남: 민서야 내일 주말인데 영화나 보러갈래?\n");getchar();
                    printf("조민서: (헉!!! 너와 함께라면 24시간 영화만 볼 수도 있어...)\n");getchar();
                    printf("조민서: 웅!!! 너무 조아ㅎㅎㅎ\n");getchar();
                    printf("짝남: 그러면 내일 아침 8시에 만나자 내가 돈이 없어가지구 ㅎㅎ\n");getchar();
                    printf("조민서: (헉 돈이 없다고.....?)\n");getchar();
                    printf("조민서: (아 그지같구 귀여워......)\n");getchar();
                    printf("조민서: 짝남아 내가 사줄게ㅎㅎ\n");getchar();
                    printf("짝남: 아니 민서야...\n");getchar();
                    printf("짝남: 그럼 너무 고맙지..ㅜㅜ 꺼억~~ 잘 볼게\n");getchar();
                    printf("조민서: (향기롭다ㅎ 아 이럴 때가 아니지 얼른 자야겠다)\n");getchar();
                    printf("Zzz\n");getchar();
                    printf("Zzz\n");getchar();
                    printf("알람: 띵딩딩...♪ 굿모닝...빱빠빠빱빠빠빠빠빠!!!♪♪\n");getchar();
                    printf("조민서: (휴 간신히 일어났다.)\n");getchar();
                    printf("조민서: (빨리 준비하고 나가보자.)\n");getchar();
                    printf("조민서: (준비 끗!!)\n");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf(".\n");getchar();
                    printf("---영화관 안---\n");getchar();
                    printf("짝남:엇 민서야 여기야 여기!!\n");getchar();
                    printf("조민서: 엇 짝남아 안녕!!(오늘도 잘생겼네 ㅎ 좋다)\n");getchar();
                    printf("짝남: 안녕ㅎㅎㅎ 우리 무슨 영화 볼까?\n");getchar();
                    printf("조민서: 넌 뭐 보고싶은데?\n");getchar();
                    printf("짝남: 아니 너가 사주는 거니까 너가 고르자\n");getchar();
                    printf("조민서: 아.. 그럼 나는...\n");getchar();
                    printf("\033[32m          <3번째 관문>\033[0m\n");
                    printf("\033[34m-----------------------------------------\033[0m\n");
                    printf("1. ");
                    printf("\033[31m'공포 영화를 본다.'\033[0m\n");
                    printf("2. ");
                    printf("\033[31m'로맨스 영화를 본다.'\033[0m\n");
                    printf("\033[34m-----------------------------------------\033[0m\n");
                    
                    printf("선택: ");
                    scanf("%d", &choice1);
                    printf("\n");
                    if (choice1 == 1) {
                        score -= 5;
                        printf("\n조민서: 난 공포 영화!\n");getchar();
                        printf("\n짝남: 공포 영화 좋지ㅎㅎ\n");getchar();
                        printf(".\n");getchar();
                        printf(".\n");getchar();
                        printf(".\n");getchar();
                        printf(". . . 공포 영화 시청 중 . . .\n");getchar();
                        printf("조민서:꺄악!! ");
                        printf("\033[35m♥︎\033[0m");
                        printf(" 끼액빼액!!\n");getchar();
                        printf("너무 무서운 나머지 민서가 짝남에게 안겼다\n");getchar();
                        printf("짝남도 마냥 나쁘지 않은지 가만히 앉아있다..\n");getchar();// \n 적용안됨
                        printf("짝남은 설레이고있다...\n");getchar();
                        printf("짝남: (어..?ㅎ)\n");getchar();
                        printf("조민서:(헐...)\n");getchar();
                        printf("킁\n");getchar();
                        printf("킁킁..\n");getchar();
                        printf("짝남: 킁킁킁ㅋ엌ㅇ컹킁 컹컹컹킁킁킁ㅋ엉컹켕킹켕!!\n");getchar();
                        printf("짝남: (뭐지..?)민서야 뭔가 이상한 냄새 나지않아?\n");getchar();
                        printf("조민서: 헉 그러게..ㅎㅎ(아 미친 너무 놀라서 바지에 지려버렸다..)\n");getchar();
                        printf("짝남은 민서의 바지가 젖어있는 것을 보고..\n");getchar();
                        printf("의심이 되었지만 묻진 않았다...\n");getchar();
                        printf("그는 스윗남이니까...\n");getchar();
                        printf("\033[36m호감도 -5: 찌린내의 주인공\033[0m\n");getchar();
                        printf("과연 민서의 운명은?!?!?!?!\n");getchar();
                    }
                    
                    else if (choice1 == 2) {
                        score += 5;
                        printf("조민서: 난 로맨스 영화!!");getchar();
                        printf("\n");
                        printf("짝남: 로맨스 영화 좋지ㅎㅎ\n");getchar();
                        printf(".\n");getchar();printf(".\n");getchar();printf(".\n");getchar();
                        printf(". . . 로맨스 영화 시청 중 . . .\n");getchar();
                        printf("영화 속 주인공1: 당신같은 사람을 오랫동안 기다려왔다우..\n");getchar();
                        printf("영화 속 주인공2: 허거덩.. 사실 지두유...\n");getchar();
                        printf("영화 속 주인공1: 사랑한다우...\n");getchar();
                        printf("영화 속 주인공2: 나도유....\n");getchar();
                        printf("영화 속 주인공1,2: 폭 풍 키 스 중 . . .\n");getchar();
                        printf("짝남은 로맨스영화를 보고 무언가 영감이 떠올랐다...\n");getchar();
                        printf("---영화가 끝난 후 집 가는 길---\n");getchar();
                        printf("짝남: 저기....민서야\n");getchar();
                        printf("조민서: 웅? 왜 불러?\n");getchar();
                        printf("짝남: 당신같은 사람을 오랫동안 기다려왔다우...\n");getchar();
                        printf("조민서:(헉)\n");getchar();
                        printf("조민서:(이거 완전 고백각 아닌가? 아냐 나 혼자 김칫국일 수도..\n)");getchar();
                        printf("짝남: ㅋㅋㅋㅋㅋㅋ(반응 개귀엽넼ㅋ)\n");getchar();
                        printf("\033[35m호감도 +5: 짝남의 장난\033[0m\n");getchar();
                        printf("조민서: !!아 뭐야앙 장난치지마앙ㅡㅡ!\n");getchar();
                        printf("조민서: (아 심장아 나대지말라굿!!!)\n");getchar();
                    }
                        printf("영화를 보고 민서의 집 앞에서....\n");getchar();
                        printf("조민서: (밤공기도 좋고 영화도 봤겠다...)\n");getchar();
                        printf("조민서: (이거 완전 고백하기 딱 좋은 타이밍이잖아?!)\n");getchar();
                        printf("조민서: 저기 짝남아..\n");getchar();
                        printf("짝남: 응 왜?\n");getchar();
                        printf("조민서: 넌 날 어떻게 생각해?\n");getchar();
                        printf(" 과 연 결 과 는 ? \n");getchar();
                        printf(" 두 구 두 구 두 9 두 구 두 구\n");getchar();
                            
                            if (score <= -5) {
                                printf("짝남: 미안.. 난 너가 여자로 안 보여서..\n");getchar();
                                printf("조민서: 아... 나도 장난으로 말해본 거였지롱 메롱!!\n");getchar();
                                printf("결과: 당신은 민서를 하여자로 만들었습니다...\n");getchar();
                                printf("점수: %d\n", score);
                            } else if (score >= 15) {
                                printf("짝남: 내가 말했었잖아..\n");getchar();
                                printf("조민서: 응..? 뭘?\n");getchar();
                                printf("짝남: 내 이상형은 '조'로 시작해서 '서'로 끝나는 사람이라고..\n");getchar();
                                printf("조민서: (헉 그게 김칫국이 아니었단 거야?!?!)\n");getchar();
                                printf("짝남: 민서야 좋아해....... 사궈주라..응?제발....\n");getchar();
                                printf("조민서: 당!여!나!즤!ㅎ\n");getchar();
                                printf("결과: 축하합니다!!!! 민서가 드디어 연애를 할 수 있게되었습니다!!!\n");getchar();
                                printf("점수: %d\n", score);
                            } else {
                                printf("짝남: 아.. 그래? 좀 당황스럽네 집가서 생각 좀 해봐야할 것 같아...\n");getchar();
                                printf("조민서: 아하.. 좋게 생각해주라 ㅎ..\n");getchar();
                                printf("결과: 당신은 민서를 잠 못 자게끔 만들었습니다.. 다시 도전해서 연애하게 도와주세요\n");getchar();
                                printf("점수: %d\n", score);
                            }

                            return 0;
                            
                        case 2:
                            showGameDescription();
                            printf("선택하세요: ");
                            scanf("%d", &choice2);
                            switch (choice2)
                            {
                                case 1 :
                                    choice = 1;
                                    break;
                                    
                                case 2 :
                                    a = 0;
                                    break;
                                    
                                case 3 :
                                    choice = 3;
                                    continue;
                                default:
                                    break;
                            }
                            break;
        
                        case 3:
                            showGameEndScreen();
                            printf("선택하세요: ");
                            scanf("%d", &choice3);
                             
                            switch (choice3)
                            {
                                case 1 :
                                    printf("게임을 종료합니다.\n");
                                    a = 0;
                                    gameplaying=0;
                                    break;
                                case 2 :
                                    printf("메인 화면으로 돌아갑니다.\n");
                                    a = 0;
                                    break;
                                default:
                                    break;
                            }
                            break;
                        }}} return 0;}

