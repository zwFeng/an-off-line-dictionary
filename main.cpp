#include <iostream>
#include <cstring>
#include <cstdlib>
#include "dictionary.h"
int main() {
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "                            四六级词汇查询                             " << endl;
	cout << "-------------------7----------------------------------------------------" << endl;
	char word[100];
	int flag = 0;
	int k = 0;
	cout << "("<< ++k << ")" << endl;
	cin >> word; 
	while (word) {
		flag = 0;
		for (int i = 0; i < 3661; i++) {
			if (strcmp(word, fourth_word[i]) == 0) {
				cout << fourth_translation[i] << endl;
				flag = 1;
				break; 
			}
		}
		if (!flag) {
			for (int i = 0; i < 2089; i++) {
			    if (strcmp(word, sixth_word[i]) == 0) {
				    cout << sixth_translation[i] << endl;
				    flag = 1;
				    break; 
			    }
		    }
		}
		if (!flag) {
			cout << "词库中没有该词!" << endl;
		}
		system("pause");
		system("cls");
	    cout << "-----------------------------------------------------------------------" << endl;
 	    cout << "                            四六级词汇查询                             " << endl;
	    cout << "-----------------------------------------------------------------------" << endl;
	    cout << "("<< ++k << ")" << endl;
		cin >> word; 		
	}
	return 0;
}
