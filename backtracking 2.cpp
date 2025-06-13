#include <iostream>
using namespace std;

bool issafe(int** arr, int x, int y, int n) {
    if (x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

bool ratinMaze(int** arr, int x, int y, int n, int** solArr) {
    if (x == n - 1 && y == n - 1) {
        solArr[x][y] = 1;
        return true;
    }

    if (issafe(arr, x, y, n)) {
        solArr[x][y] = 1;

        // Move down
        if (ratinMaze(arr, x + 1, y, n, solArr)) {
            return true;
        }

        // Move right
        if (ratinMaze(arr, x, y + 1, n, solArr)) {
            return true;
        }

        // Backtrack
        solArr[x][y] = 0;
        return false;
    }

    return false;
}

int main() {
    int n;
    cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for (int i = 0; i < n; i++) {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solArr[i][j] = 0;
        }
    }

    if (ratinMaze(arr, 0, 0, n, solArr)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "No solution exists" << endl;
    }

    // Free memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] solArr[i];
    }
    delete[] arr;
    delete[] solArr;

    return 0;
}

