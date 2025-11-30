#include <iostream>
#include <cmath>

using namespace std;

// 2차원 배열 선언
char arr[1023][2047];

// 함수 전방 선언
void odd(int x, int y, int siz);
void even(int x, int y, int siz);

// N이 홀수일 때: 역삼각형(🔻) 그리는 함수
void odd(int x, int y, int siz) {
    if (siz == 1) {
        arr[y][x] = '*';
        return;
    }

    int height = pow(2, siz) - 1;
    
    // 빗변 그리기
    for (int i = 0; i < height; i++) {
        arr[y + i][x - i] = '*';
        arr[y + i][x + i] = '*';
    }

    // 밑변 그리기
    int bottom_y = y + height - 1;
    int left_end = x - (height - 1);
    int right_end = x + (height - 1);
    for (int i = left_end; i <= right_end; i++) {
        arr[bottom_y][i] = '*';
    }

    // 안쪽에 그릴 N-1 정삼각형의 시작 좌표 계산
    int next_y = y + pow(2, siz - 2);
    // [최종 수정] 이 부분이 (pow(2, siz - 2) - 1)이 아니라 pow(2, siz - 2) 였습니다.
    int next_x = x - pow(2, siz - 2); 
    
    even(next_x, next_y, siz - 1);
}

// N이 짝수일 때: 정삼각형(🔺) 그리는 함수
void even(int x, int y, int siz) {
    int height = pow(2, siz) - 1;

    // 윗변 그리기
    int top_y = y;
    int left_end = x;
    int right_end = x + (2 * height - 2);
    for (int i = left_end; i <= right_end; i++) {
        arr[top_y][i] = '*';
    }
    
    // 빗변 그리기
    for (int i = 0; i < height; i++) {
        arr[y + i][x + i] = '*';
        arr[y + i][x + (2 * height - 2) - i] = '*';
    }

    // 안쪽에 그릴 N-1 역삼각형의 시작 좌표 계산
    int next_y = y + pow(2, siz - 2);
    // [최종 수정] 가장 정확한 중앙 좌표 계산법
    int next_x = x + (height - 1);

    odd(next_x, next_y, siz - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int height = pow(2, n) - 1;
    // [최종 수정] 너비 계산
    int width = 2 * height - 1;

    // 배열을 공백으로 초기화
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            arr[i][j] = ' ';
        }
    }

    // N의 홀짝에 따라 올바른 시작점에서 함수 호출
    if (n % 2 != 0) { // 홀수
        odd(width / 2, 0, n);
    } else { // 짝수
        even(0, 0, n);
    }
    
    // 최종 결과 출력
    for (int i = 0; i < height; i++) {
        // [최종 수정] 출력 너비 최적화
        int print_width = 0;
        if (n % 2 != 0) { // 홀수 N
            print_width = (width / 2) + i + 1;
        } else { // 짝수 N
            print_width = width - i;
        }

        for (int j = 0; j < print_width; j++) {
            cout << arr[i][j];
        }
        cout << '\n';
    }

    return 0;
}