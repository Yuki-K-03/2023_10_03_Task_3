#include <iostream>
#include <ctime>
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
        printf("%d �` %d\n�l����� > ", min, max);
        cin >> select;
    }

    return select;
}

bool Check(int &min, int &max, const int select) {
    const static int answer = rand() % 10 + 1;

    if (select == answer) {
        printf("������\n\n");
        return true;
    }
    else if (select < answer) {
        printf("������\n\n");
        min = select + 1;
    }
    else if (select > answer) {
        printf("�傫��\n\n");
        max = select - 1;
    }
    return false;
}