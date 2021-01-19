/*
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int player, cpu;
    int count = 0;
    int cheak = 0;

    srand((unsigned)time(NULL));

    cout << "数当てゲーム！！１～１００の数字を当てよう！" << endl;


    while (true)
    {
        cpu = rand() % 100 + 1;
        cout << "さぁ、答えはいくつでしょうか？" << endl;

        for (;;)
        {
            cin >> player;
            count++;

            if (player == cpu)
            {
                cout << "大正解！おめでとう" << endl;
                cout << count << "回で正解できました！" << endl;
                break;
            }
            else if (player > cpu)
            {
                cout << "もっと小さい！" << endl;
            }
            else
            {
                cout << "もっと大きい！" << endl;
            }

        }

        cout << "続けますか？" << endl;
        cout << "0：終了  1：続ける" << endl;
        cin >> cheak;
        if (cheak == 0)
        {
            cout << "終了します" << endl;
            break;
        }

    }

}
*/