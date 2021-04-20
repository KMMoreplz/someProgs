#include <iostream>
#include <string>

using namespace std;

//void changeReg(string f) {
//	for (int i = 0; i < f.size(); i++) {
//		if (char(f[i]) < 90 & > 65&& char(f[i]) < 159 & > 128) {
//			char(f[i]) + 32;
//	}else if(char(f[i])>97&&<122||>160&&<191)()
//}
	int main()
	{
		setlocale(LC_ALL, "Russian");
		string someText;
		cout << 123;

		for (int i = 0; i < 255; i++) {
			cout << char(i) << " " << i << endl;
		}
		string searchWord;
		cout << "Введите текст для счета, в конце необходимо вписать пробел и '^^':" << endl;
		getline(cin, someText);
		cout << "Введите слово для поиска: ";
		cin >> searchWord;
		int spaceCount = 0;
		int wordCounter = 0;
		string tempSomeText = someText;
		while (tempSomeText.size() > 2)
		{
			string findOut = tempSomeText.substr(0, tempSomeText.find(" "));
			spaceCount++;
			if (findOut == searchWord) {
				wordCounter++;
			}
			tempSomeText.erase(0, tempSomeText.find(" ") + 1);
		};
		cout << "Общее количество слов = " << spaceCount << "; Количество заданых слов = " << wordCounter << ";";
		for (int i = 0; i < 255; i++) {
			cout << char(i) << " " << i << endl;
		}
	}