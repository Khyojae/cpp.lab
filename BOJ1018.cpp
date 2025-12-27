#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char arr[50][50];
    int n, m;
    cin >> n >> m;
    vector<int>vc;


    string str;
    for (int i = 0; i < n; i++) {
        cin >> str;
        for (int j = 0; j < str.length(); j++) {
            arr[i][j] = str[j];
        }
    }

    int count = 0;

    // 처음에 흰색인지 검정색인지 정해줘야 해서 if 걺

    if (arr[0][0] == 'W') {   // 첫 번째 색깔이 흰색
        for (int i = 0; i < n; i++) {    // 시작 좌표를 정해야 해
            for (int k = 0; k < m; k++) {
                 int count=0;
                for (int j = i; j < i + 8; j++) {
                    for (int r = k; r < k + 8; r++) {    // 8*8번 해야 해
                        if (arr[j][r] != 'W') {    // 이게 맞는지 틀렸는지 어케 아노; => 미리 세팅했잖슴
                            count++;
                        } else if (arr[j][r] != 'B') {  // i, k가 아닌 이유는 i, k가 시작점만 정해줘서
                            count++;
                        }
                    }
                }
                vc.push_back(count);
            }
        }
    } else if (arr[0][0] == 'B') {   // 첫 번째 색깔이 검정색
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < m; k++) {
                 int count=0;
                for (int j = i; j < i + 8; j++) {
                    for (int r = k; r < k + 8; r++) {
                        if (arr[j][r] != 'W') {
                            count++;
                        } else if (arr[j][r] != 'B') {
                            count++;
                        }
                    }
                }
                vc.push_back(count);
            }
        }
    }

    sort(vc.begin(),vc.end());
   cout <<  *vc.begin();
}
