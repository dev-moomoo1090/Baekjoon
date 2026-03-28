#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <string>
#include <set>
#include <queue>

using namespace std;

int main() {
	queue<int> Deck;
	int inp; cin >> inp;
	for (int i = 1; i <= inp; i++) {
		Deck.push(i);
	}
	int temp = 1;
	while (Deck.front() != Deck.back()) {
		Deck.pop();
		temp = Deck.front();
		Deck.pop();
		Deck.push(temp);
	}

	cout << temp;
}