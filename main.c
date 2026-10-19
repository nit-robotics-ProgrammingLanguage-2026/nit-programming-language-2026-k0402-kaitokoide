#include <stdio.h>          //入力と表示の機能を使う準備

int main(void) {
    double d;               //入力した数を保存
    double result;          //計算結果を保存

    scanf("%lf", &d);        //小数を入力
    result = d * 1.08;       //入力した数を1.08倍
    printf("%.2f", result); //小数点以下2桁で表示

    return 0;               //正常終了
}