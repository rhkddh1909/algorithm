#include <iostream>
using namespace std;

char island[20][20];
char result[20][20];

int main() {
	int R, C;
	int count;

	int minX = 0, maxX = 0;
	int minY = 0, maxY = 0;


	//지도가 줄어야한다.

	cin >> R >> C;    //3 10

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			if (i > 0 && i <= R && j > 0 && j <= C) {
				cin >> island[i][j];
			}
			else {
				island[i][j] = '.';
			}
			result[i][j] = '.';  //바다로 초기화
		}
	}

	for (int i = 1; i <= R; i++) {      //3
		for (int j = 1; j <= C; j++) {  //10
			if (island[i][j] == 'X') {
				count = 0;  //인접한 바다의 수 초기화
				if (island[i - 1][j] == '.') {
					count++;
				}
				if (island[i][j - 1] == '.') {
					count++;
				}
				if (island[i + 1][j] == '.') {
					count++;
				}
				if (island[i][j + 1] == '.') {
					count++;
				}
				//그러면 인접한 바다의 개수
				if (count <= 2) {
					result[i][j] = 'X'; //물에 잠기지 않는다
					if (minX == 0 || minX > i) {
						minX = i;
					}
					if (maxX <= i) {
						maxX = i;
					}
					if (minY == 0 || minY > j) {
						minY = j;
					}

					if (maxY <= j) {
						maxY = j;
					}
				}
			}
		}
	}
	for (int i = minX; i <= maxX; i++) {
		for (int j = minY; j <= maxY; j++) {
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}