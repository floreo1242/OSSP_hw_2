#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, id, team;
    cout << "이름을 입력하세요: ";
    cin >> name;
    cout << "학번을 입력하세요: ";
    cin >> id;
    cout << "팀을 입력하세요: ";
    cin >> team;
    cout << "\n<출력>\n";
    cout << "이름: " << name << "\n";
    cout << "학번: " << id << "\n";
    cout << "  팀: " << team << "\n";
    return 0;
}
