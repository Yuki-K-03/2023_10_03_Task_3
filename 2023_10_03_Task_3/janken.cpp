#include <iostream>
#include <ctime>
using namespace std;

enum _rps {
    _rock,
    _paper,
    _scissors,
};

enum _result {
    _draw,
    _win,
    _lose,
};

const char* RPS[] = {
    "グー",
    "パー",
    "チョキ",
};

const char* RESULT[] = {
    "あいこ",
    "勝ち",
    "負け",
};

void Janken() {
    srand((unsigned int)time(NULL));
    int enemy = 0;
    bool end = false;

    while (!end) {
        enemy = rand() % 3;
#if 0
        printf("相手の手は%s\n", RPS[enemy]);
#endif
        end = Check(Input(), enemy);
    }
}

int Input() {
    int select = -1;

    while (
        select != _rock &&
        select != _paper &&
        select != _scissors
        ) {
        printf("%s : 0, %s : 1, %s : 2\n", RPS[_rock], RPS[_paper], RPS[_scissors]);
        printf("手を入力 > ");
        cin >> select;
    }

    return select;
}

bool Check(const int player, const int enemy) {
    int result = 0;
    bool end = false;

    printf("Player > %s, Enemy > %s\n", RPS[player], RPS[enemy]);

    if (player == enemy) {
        result = _draw;
    }
    else if (
        (player == _rock && enemy == _scissors) ||
        (player == _paper && enemy == _rock) ||
        (player == _scissors && enemy == _paper)
        ) {
        result = _win;
        end = true;
    }
    else {
        result = _lose;
        end = true;
    }
    printf("%s\n\n", RESULT[result]);

    return end;
}