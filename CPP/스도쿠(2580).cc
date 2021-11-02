#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

void dfs(int start, vector<vector<int>> map);

vector<pair<int, int>> v;
int check = 0;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> map;
	map.resize(9,vector<int>(9));
	
	for (int i = 0; i < map.size(); i++) {
		for (int j = 0; j < map.size(); j++) {
			cin >> map[i][j];
			if (map[i][j] == 0) {
				v.push_back(make_pair(i,j));
			}
		}
	}

	dfs(0, map);

	return 0;
}

void dfs(int start, vector<vector<int>> map) {
	if (check == 1) {
		return;
	}
	int x = v[start].first;
	int y = v[start].second;
	int posx, posy;
	if (x / 3 == 0) {
		posx = 0;
	}
	else if(x/3 == 1){
		posx = 3;
	}
	else {
		posx = 6;
	}
	if (y / 3 == 0) {
		posy = 0;
	}
	else if (y / 3 == 1) {
		posy = 3;
	}
	else {
		posy = 6;
	}
	vector<int> bin(10);
	int temp = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			bin[map[posx + i][posy + j]] = 1;
			bin[map[temp][y]] = 1;
			bin[map[x][temp]] = 1;
			temp++;
		}
	}
	for (int i = 1; i <= 9; i++) {
		if (bin[i] == 0) {
			map[x][y] = i;
			if (start == v.size() - 1) {
				check = 1;
				for (int i = 0; i < map.size(); i++) {
					for (int j = 0; j < map.size(); j++) {
						cout << map[i][j] << ' ';
					}
					cout << '\n';
				}
				return;
			}
			else {
				dfs(start+1, map);
			}
		}
	}
}