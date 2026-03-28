#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>

using namespace std;

int main() {
	char word[101];
	int alpha[27] = { 0 };
	char k[27] = { 'a', 'b', 'c', 'd', 'e', 'f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v'
		,'w','x','y','z' };
	cin >> word;
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	int length = strlen(word)
		;
	for (int i = length; i >= 0; i--) {
		for (int n = 26; n >= 0; n--) {
			if (word[i] == k[n]) {
				alpha[n] = i;
			}
		}
	}
	for (int j = 0; j < 26; j++) {
		cout << alpha[j] << " ";
	}

}