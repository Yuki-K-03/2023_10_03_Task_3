#include <iostream>

using namespace std;

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
        case 1:
            Janken();
            break;
        case 2:
            Kazuate();
            break;
        case 3:
            end = true;
            break;
        default:
            break;
        }

        printf("------------------------------\n");
    }
}