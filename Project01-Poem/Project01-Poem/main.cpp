// Created by Kristie Nguyen on 9/9/14.
// Poem - A program that prints a poem.
// test commit

#include<iostream>
using namespace std;

int main(void)
{
    // 1. Output poem.

    // 1.1 Poem title.
    cout << "Untitled" << endl;
    cout << "by Amy D. Liskey" << endl;
    cout << endl;

    // 1.2 Poem body.
    cout << "Don't wait for tomorrow" << endl;
    cout << "    do it all today." << endl;
    cout << "If tomorrow never comes," << endl;
    cout << "    you'll never regret a day." << endl;
    cout << endl;

    // 1.3 Poem author.
    cout << "Programmed by Kristie Nguyen" << endl;
    cout << endl;
    cout << endl;

    // 2 Finish.
    // 2.1 Pause screen.
    cout << "Press ENTER to finish…" << endl;
    cin.ignore(999, '\n');
    // 2.2 Terminate program.
    return 0;
}