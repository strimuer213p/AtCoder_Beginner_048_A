/*
問題
すぬけ君は、AtCoder s Contest という名前のコンテストを開こうとしています。 ここで、s は長さ 1 以上の文字列であり、1 文字目は英大文字、2 文字目以降は英小文字です。
すぬけ君は、このコンテストの略称を AxC に決めました。 ここで、x は s の先頭の英大文字です。
コンテストの名前が与えられるので、コンテストの略称を出力してください。
*/

/*
基本方針
strは空白で切れてしまうので3つのstrを作って2番目の先頭を参照したい
*/

#include<iostream>
#include<string>

int main() {
	int temp;
	std::string str[3]; //strを三つ

	for (int i = 0; i < 3; i++) {
		std::cin >> str[i];
	}

	std::cout << "A" << str[1][0] << "C"; //2番目の1文字目が欲しい

	return 0;
}
