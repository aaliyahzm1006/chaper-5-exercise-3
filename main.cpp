#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    cout << "How many hours has it traveled? ";
    cin >> hours;

    while (speed < 0 || hours < 1) {
        cout << "Invalid input. Please enter valid values." << endl;

        cout << "Enter speed: ";
        cin >> speed;

        cout << "Enter hours: ";
        cin >> hours;

    }

    cout << "\nHour\tmiles Traveled" << endl;
    cout << "______________________" << endl;

    for (int i = 1; i <= hours; i++) {
        cout << i << "\t" << speed * i << endl;
    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}