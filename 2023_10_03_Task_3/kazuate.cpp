#include <iostream>
#include <ctime>
#include "kazuate.h"
using namespace std;

void Kazuate() {
    srand((unsigned int)time(NULL));

    int min = 1, max = 10;
    bool end = false;

    while (!end) {
        end = Check(min, max, Input(min, max));
    }
}

int Input(const int min, const int max) {
    int select = 0;

    while (!(min <= select && select <= max)) {
        printf("%d 〜 %d\n値を入力 > ", min, max);
        cin >> select;
    }

    return select;
}

bool Check(int &min, int &max, const int select) {
    const static int answer = rand() % 10 + 1;

    if (select == answer) {
        printf("当たり\n\n");
        return true;
    }
    else if (select < answer) {
        printf("小さい\n\n");
        min = select + 1;
    }
    else if (select > answer) {
        printf("大きい\n\n");
        max = select - 1;
    }
    return false;
}