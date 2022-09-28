#include <iostream>
#include <string>

using namespace std;

int main() {
	const int MAX_NUMBER_OF_PROBLEMS = 1000;
	const int NUMBER_OF_FRIENDS = 3;
	int whoHasSolutions[MAX_NUMBER_OF_PROBLEMS][3];
	int numberOfProblems;

	cin >> numberOfProblems;

	for (int i = 0; i < numberOfProblems; i++) {
		for (int j = 0; j < NUMBER_OF_FRIENDS; j++) {
			cin >> whoHasSolutions[i][j];
		}
	}
	cout << whoHasSolutions[0][2];
	return 0;
}