/*
���
���ʂ��N�́AAtCoder s Contest �Ƃ������O�̃R���e�X�g���J�����Ƃ��Ă��܂��B �����ŁAs �͒��� 1 �ȏ�̕�����ł���A1 �����ڂ͉p�啶���A2 �����ڈȍ~�͉p�������ł��B
���ʂ��N�́A���̃R���e�X�g�̗��̂� AxC �Ɍ��߂܂����B �����ŁAx �� s �̐擪�̉p�啶���ł��B
�R���e�X�g�̖��O���^������̂ŁA�R���e�X�g�̗��̂��o�͂��Ă��������B
*/

/*
��{���j
str�͋󔒂Ő؂�Ă��܂��̂�3��str�������2�Ԗڂ̐擪���Q�Ƃ�����
*/

#include<iostream>
#include<string>

int main() {
	int temp;
	std::string str[3]; //str���O��

	for (int i = 0; i < 3; i++) {
		std::cin >> str[i];
	}

	std::cout << "A" << str[1][0] << "C"; //2�Ԗڂ�1�����ڂ��~����

	return 0;
}
