#include <iostream>
#include "kazuate.h"
#include "janken.h"

using namespace std;

enum _game {
    _janken,
    _kazuate,
    _end
};

void Janken();
void Kazuate();

int main()
{
    int select = 0;
    bool end = false;

    while (!end) {
        printf("どちらをプレイしますか？\n");
        printf("１．じゃんけん\n");
        printf("２．数当てゲーム\n");
        printf("３．終了\n> ");

        cin >> select;
        printf("\n");

        switch (select)
        {
        case _janken:
            Janken();
            break;
        case _kazuate:
            Kazuate();
            break;
        case _end:
            end = true;
            break;
        default:
            break;
        }

        printf("------------------------------\n");
    }
}