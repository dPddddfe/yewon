#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    int score;
    string name;
};

// 성적 내림차순 정렬 기준
bool compare(Student a, Student b) {
    return a.score > b.score;
}

int main() {
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].score >> students[i].name;
    }

    // 정렬
    sort(students.begin(), students.end(), compare);

    // 출력
    for (int i = 0; i < N; i++) {
        cout << i + 1 << "> " << students[i].score << " " << students[i].name << endl;
    }

    return 0;
}