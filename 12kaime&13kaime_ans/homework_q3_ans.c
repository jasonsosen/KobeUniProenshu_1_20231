#include <stdio.h>

// 入力された文字列の長さを計算する関数
int len(char c[]){
    int i = 0;
    
    // 文字列を一文字ずつ見ていき、最後の文字（'\0'）にたどり着くまでカウントする。
    //文字列の最後は'\0'（ヌル文字）で表され
    while(c[i] != '\0'){
        i++; // iに1を加算します。これは、見た文字数を数えるためのものです。
    }
    
    // 最後にたどり着くまでに見た文字の数を返します。これが文字列の長さになります。
    return i;
}

int main(void){
    // 文字列"abc"を宣言します。この文字列の長さは3です。
	char c[]="abc";
    // len関数を使って文字列cの長さを計算し、その結果を出力します。
	printf("%d\n", len(c));
    return 0;
}
