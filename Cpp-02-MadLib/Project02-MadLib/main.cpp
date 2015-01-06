// Created by Kristie Nguyen on 9/12/2014
// MadLib - A program takes user input and outputs a madlib.

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    // 1 Prompt.
    cout << "Please enter the following words." << endl;
    cout << "If more than one word is requested, separate them by spaces." << endl;
    cout << endl;

    // 2 Inputs for madlib.

    string yourTeachersSalutation;
    string yourTeachersName;
    cout << "Your favorite teacher's name with salutation "
	 << "(e.g. Mr. Apple or Professor Orange): ";
    cin >> yourTeachersSalutation >> yourTeachersName;
    cin.ignore(999, '\n');

    string animal;
    cout << "A small, timid animal: ";
    getline( cin, animal );

    string placeInHome;
    cout << "A place where something can get into your home: ";
    getline ( cin, placeInHome );

    string favoriteToy;
    cout << "Your favorite toy: ";
    getline ( cin, favoriteToy);

    cout << "A room in your home: ";
    string roomOne;
    getline( cin, roomOne );

    cout << "Another room in your home: ";
    string roomTwo;
    getline( cin, roomTwo);

    string favoriteSongOrAlbum;
    cout << "Name of your favorite song or album: ";
    getline (cin, favoriteSongOrAlbum );

    string favoriteDrink;
    cout << "Name of your favorite drink: ";
    getline ( cin, favoriteDrink );

    string yourBestFriend;
    cout << "First name of your best friend: ";
    cin >> yourBestFriend;
    cin.ignore(999, '\n');

    string yourSchool;
    cout << "Name of your school: ";
    getline( cin, yourSchool );

    string yourFullName;
    cout << "Your full name: ";
    getline ( cin, yourFullName );

    cout << endl;
    cout << "Are you ready to see your madlib? Press ENTER to continue...";
    cin.ignore(999, '\n');
    cout << endl;

    // 3 Outputs madlib.
    cout << "Dear " << yourTeachersSalutation << " ";
    cout << yourTeachersName << "," << endl;
    cout << endl;
    cout << "I'm sorry my homework isn't ready, but it wasn't my fault!" << endl;
    cout << endl;
    cout << "This morning, a strange " << animal << " crawled in through the ";
    cout << placeInHome << ". It sneaked into the ";
    cout << roomOne << " where my books and homework were. I grabbed my ";
    cout << favoriteToy << " and threw it at the ";
    cout << animal << " but I missed and it grabbed my homework and ran into the ";
    cout << roomTwo << ". I yelled at it real loudly, ";
    cout << "but that didn't help, so I quickly put ";
    cout << favoriteSongOrAlbum << " on my stereo and turned the ";
    cout << "volume way up, hoping to scare it away. ";
    cout << "Instead, it started to hop around like it was dancing! ";
    cout << "It hopped so wildly that it knocked a glass of ";
    cout << favoriteDrink << " off the coffee table and spilled it all over ";
    cout << "my homework. I guess the " << animal << " really liked the taste of ";
    cout << favoriteDrink << "." << endl;
    cout << endl;
    cout << "So, that's why my homework isn't ready... that strange ";
    cout << animal << " ate it! I think a similar thing happened to ";
    cout << yourBestFriend << " recently, so it must be a common problem here at ";
    cout << yourSchool << "." << endl;
    cout << endl;
    cout << "Sincerely," << endl;
    cout << yourFullName << endl;
    cout << endl;

    // 3. Finish up.
    cout << "Press ENTER to finish...";
    cin.ignore(999,'\n');
    return 0;
}