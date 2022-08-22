#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	const int L_MAX = 200;
	int massif[L_MAX];
	int second_massif[L_MAX];
	int L;
	cout << "| enter massif leight (L_MAX = 200): ";
	cin >> L;
	for (int i = 0; i <= L; i++) {
		massif[i] = rand() % 10;		// ot 0 do 9
	}
	cout << "\n|  first massif: ";
	for (int i = 0; i < L; i++) {
		cout << massif[i] << " ";
	}
	for (int i = 0; i < L; i++) {
		if (massif[i] == 0) {
			for (int del = i; del <= L; del++) {
				massif[del] = massif[del+1];
			}
			}
		}

	int chet = 0;
	for (int i3 = 0; i3 < L; i3++) {
		second_massif[chet] = massif[i3];
		if (massif[i3] % 2 == 0) {
			chet++;
			second_massif[chet] = massif[(i3 - 1)] + 2;
		}
		chet++;
	}


	cout << "\n| second massif: ";
	for (int v = 0; v < L; v++) {
		cout << second_massif[v] << " ";
	}
}