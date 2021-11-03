#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int map[100][100] = { {0,}, };
int main()
{
	vector<pair<int,int>> q;
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int x, y;
	int posx, posy, d;
	int clean = 0;
	cin >> x >> y >> posx >> posy >>d;
	
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> map[i][j];
		}
	}
	int check = 0;
	while (1) {

		if (map[posx][posy] == 0) {
			map[posx][posy] = 2;
			clean++;
		}
		if (check == 4) {
			check = 0;
			if (d == 0) {
				if (map[posx+1][posy] == 1) {
					break;
				}
				else {
					posx++;
				}
			}
			else if (d == 1) {
				if (map[posx][posy-1] == 1) {
					break;
				}
				else {
					posy--;
				}
			}
			else if (d == 2) {
				if (map[posx - 1][posy] == 1) {
					break;
				}
				else {
					posx--;
				}
			}
			else if (d == 3) {
				if (map[posx][posy+1] == 1) {
					break;
				}
				else {
					posy++;
				}
			}
		}
		else {
			if (d == 0) {
				
				if (posy != 1) {
					if (map[posx][posy - 1] == 0) {
						posy--;
						check = 0;
					}
					else {
						check++;
					}
				}
				else {
					check++;
				}
				//if (check != 4) {
					d = 3;
				//}
			}
			else if (d == 1) {
				if (posx != 1) {
					if (map[posx - 1][posy] == 0) {
						posx--;
						check = 0;
					}
					else {
						check++;
					}
				}
				else {
					check++;
				}
				//if (check != 4) {
					d = 0;
				//}
			}
			else if (d == 2) {
				if (posy != y-2) {
					if (map[posx][posy + 1] == 0) {
						posy++;
						check = 0;
					}
					else {
						check++;
					}
				}
				else {
					check++;
				}
				//if (check != 4) {
					d = 1;
				//}
			}
			else if (d == 3) {
				if (posx != x-2) {
					if (map[posx + 1][posy] == 0) {
						posx++;
						check = 0;
					}
					else {
						check++;
					}
				}
				else {
					check++;
				}
				//if (check != 4) {
					d = 2;
				//}
			}
		}
	}

	cout << clean;

	return 0;
}
