// 2021.01.19 1年後期テスト.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <ctime>
using namespace std;

/*
int Judg(int player, int cpu)
{
    int result = 1;  // 勝ち

    if ((player == 0 && cpu == 2) || (player == 1 && cpu == 0) || (player == 2 && cpu == 1))
    {
        result = -1;  // プレイヤーの負け
    }
    else if(player == cpu)
    {
        result = 0;  // あいこ
    }
    return result;
}

void Choice(int c)
{
    switch (c)
    {
    case 0: cout << "グー" << endl; break;
    case 1: cout << "チョキ" << endl; break;
    case 2: cout << "パー" << endl; break;
    }
}

void Result(int r)
{
    switch (r)
    {
    case -1: cout << "あなたの負けです" << endl; break;
    case  0: cout << "あいこだ！もう一回！" << endl << endl; break;
    case  1: cout << "あなたの勝ちです" << endl; break;
    }
}


int main()
{
    int player = 0;
    int cpu = 0;
    int result = 0;

    srand((unsigned)time(NULL));

    do
    {
        cpu = rand() % 3;

        cout << "出す手を選んでください" << endl;
        cout << "0：グー  1：チョキ　2：パー" << endl;
        cin >> player;

        cout << "あなたの出した手は" << endl;
        Choice(player);
        cout << endl;

        cout << "cpuの出した手は" << endl;
        Choice(cpu);
        cout << endl;

        result = Judg(player, cpu);
        Result(result);

    }
    while (result == 0);
    {
        return 0;
    }
}
*/

int main()
{
    int player, cpu;
    int playWin = 0;
    int count = 0;
    int cheak = 0;

    srand((unsigned)time(NULL));
    cpu = rand() % 100 + 1;
    
    
    while(true)
    {
        cout << "数当てゲーム！！１～１００の数字を当てよう！" << endl;
        cout << "さぁ、答えはいくつでしょうか？" << endl;
        cin >> player;
        count++;

        if (player == cpu)
        {
            playWin++;
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

        cout << "続けますか？" << endl;
        cout << "0：終了  1：続ける" << endl;
        cin >> cheak;
        if (cheak == 0)
        {
            cout << "終了します" << endl;
            break;
        }
        else
        {
            continue;
        }
    }
    
    



    /*
    if (i == 0)
    {
        cout << "残念だったなぁ　" << "正解は" << cpu << "でしたぁ" << endl;
    }
    else
    {
        cout << "正解だ。よく分かったな…" << endl;
    }
    return 0;
    
    */
}


/*
int     cpu, inp, count;

        srand(time(NULL));
        cpu = rand() % 1000;
        count = 0;
        for(;;){
                printf("INPUT : ");
                scanf("%d", &inp);
                count++;
                if(num < inp)
                        printf("答えは入力した数値より小さい値です。\n");
                if(num > inp)
                        printf("答えは入力した数値より大きな値です。\n");
                if(num == inp){
                        printf("*** %d回で当たりです ****\n", count);
                        break;
                }
        }

*/



/*
入れたほうがいいプログラム
・関数　・switch文　・do,while文　・break,continue文　・乱数　・if文　・参照　・配列　・for文　・入力(cin)


*/

/*
ブラックジャック　神経衰弱

*/





