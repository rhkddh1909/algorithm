#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char *arr[1001];
	char str[1001];
	cin >> str;
	int size;

	for (int i = 0; str[i]; i++) {
		arr[i] = str+i;
		size = i + 1;
	}
	for (int j = 0; j < size; j++) {
		for (int k = j+1; k < size; k++) {
			if ((int)arr[j][0] > (int)arr[k][0]) {
				char *temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
			}
			else if ((int)arr[j][0] == (int)arr[k][0]) {
				for (int a = 1; arr[j][a]; a++) {
					if ((int)arr[j][a] > (int)arr[k][a]) {
						char *temp = arr[j];
						arr[j] = arr[k];
						arr[k] = temp;
						break;
					}
					else if ((int)arr[j][a] < (int)arr[k][a]) {
						break;
					}
				}
			}
		}
	}
	for (int m = 0; m < size; m++) {
		cout << arr[m] << '\n';
		
	}
}