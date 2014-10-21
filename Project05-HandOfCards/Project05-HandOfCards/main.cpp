// Created by Kristie Nguyen on 10/10/14.
// HandOfCards - A program that outputs an English evaluation of a hand of cards (using if statements).

#include <iostream>
using namespace std;

const int MINIMUM_LOWEST_CARD = 1;
const int MAXIMUM_HIGHEST_CARD = 13;

int main(void)
{
    // 1 Input numbers representing cards.
    // 1.1 Basic input.
    cout << "Enter 3 cards in the range 1 to 13, separated by spaces: ";
    int card1, card2, card3;
    cin >> card1 >> card2 >> card3;
    cout << endl;

    // 1.2 Format check.
    if (cin.fail())
    {
        cin.clear();
        cin.ignore(999,'\n');
        cout << endl << " Incompatible data. Press ENTER to close." << endl;
        return 1;
    }
    cin.ignore(999, '\n');

    // 1.3 Range check.
    if (card1 < MINIMUM_LOWEST_CARD || card1 > MAXIMUM_HIGHEST_CARD ||
        card2 < MINIMUM_LOWEST_CARD || card2 > MAXIMUM_HIGHEST_CARD ||
        card3 < MINIMUM_LOWEST_CARD || card3 > MAXIMUM_HIGHEST_CARD)
    {
        cout << endl << "Data out of range. Press ENTER to close." << endl;
        cin.ignore(999,'\n');
        return 2;
    }

    // 2 Process using many if statement.
    // 2.1 Declare variables.
    string equalCards;
    string pairCards;
    int smallest, median, largest;
    string highCard;
    string evaluation;
    smallest = card1;
    median = card2;
    largest = card3;
    int differenceBetweenMedianAndSmallest;
    int differenceBetweenLargestAndMedian;
    int differenceBetweenLargestAndSmallest;

    // 2.2 Assign string outputs to a case where all cards are the same.
    if (card1 == 1 && card2 == 1 && card3 == 1) equalCards = "Aces";
    else if (card1 == 2 && card2 == 2 && card3 == 2) equalCards = "twos";
    else if (card1 == 3 && card2 == 3 && card3 == 3) equalCards = "threes";
    else if (card1 == 4 && card2 == 4 && card3 == 4) equalCards = "fours";
    else if (card1 == 5 && card2 == 5 && card3 == 5) equalCards = "fives";
    else if (card1 == 6 && card2 == 6 && card3 == 6) equalCards = "sixes";
    else if (card1 == 7 && card2 == 7 && card3 == 7) equalCards = "sevens";
    else if (card1 == 8 && card2 == 8 && card3 == 8) equalCards = "eights";
    else if (card1 == 9 && card2 == 9 && card3 == 9) equalCards = "nines";
    else if (card1 == 10 && card2 == 10 && card3 == 10) equalCards = "tens";
    else if (card1 == 11 && card2 == 11 && card3 == 11) equalCards = "jacks";
    else if (card1 == 12 && card2 == 12 && card3 == 12) equalCards = "queens";
    else if (card1 == 13 && card2 == 13 && card3 == 13) equalCards = "kings";
    
    // 2.3 Assign string outputs to case where there are pairs of cards.
    if ( (card1 == 1 && card2 == 1) || (card1 == 1 && card3 == 1) || (card2 == 1 && card3 == 1) ) pairCards = "Aces";
    else if ( (card1 == 2 && card2 == 2) || (card1 == 2 && card3 == 2) | (card2 == 2 && card3 == 2) ) pairCards = "twos";
    else if ( (card1 == 3 && card2 == 3) || (card1 == 3 && card3 == 3) || (card2 == 3 && card3 == 3) ) pairCards = "threes";
    else if ( (card1 == 4 && card2 == 4) || (card1 == 4 && card3 == 4) || (card2 == 4 && card3 == 4) ) pairCards = "fours";
    else if ( (card1 == 5 && card2 == 5) || (card1 == 5 && card3 == 5) || (card2 == 1 && card3 == 5) ) pairCards = "fives";
    else if ( (card1 == 6 && card2 == 6) || (card1 == 6 && card3 == 6) || (card2 == 6 && card3 == 6) ) pairCards = "sixes";
    else if ( (card1 == 7 && card2 == 7) || (card1 == 7 && card3 == 7) || (card2 == 7 && card3 == 7) ) pairCards = "sevens";
    else if ( (card1 == 8 && card2 == 8) || (card1 == 8 && card3 == 8) || (card2 == 8 && card3 == 8) ) pairCards = "eights";
    else if ( (card1 == 9 && card2 == 9) || (card1 == 9 && card3 == 9) || (card2 == 9 && card3 == 9) ) pairCards = "nines";
    else if ( (card1 == 10 && card2 == 10) || (card1 == 10 && card3 == 10) || (card2 == 10 && card3 == 10) ) pairCards = "tens";
    else if ( (card1 == 11 && card2 == 11) || (card1 == 11 && card3 == 11) || (card2 == 11 && card3 == 11) ) pairCards = "jacks";
    else if ( (card1 == 12 && card2 == 12) || (card1 == 12 && card3 == 12) || (card2 == 12 && card3 == 12) ) pairCards = "queens";
    else if ( (card1 == 13 && card2 == 13) || (card1 == 13 && card3 == 13)|| (card2 == 13 && card3 == 13) ) pairCards = "kings";

    // 2.4 Organize the cards.
    // 2.4.1 From smallest to largest.
    if ( smallest > median )
    {
        int temporary = smallest;
        smallest = median;
        median = temporary;
    }
    if ( median > largest )
    {
        int temporary = median;
        median = largest;
        largest = temporary;
    }
    if ( smallest > median )
    {
        int temporary = smallest;
        smallest = median;
        median = temporary;
    }

    // 2.4.2 In increasing order.
    differenceBetweenMedianAndSmallest = median - smallest;
    differenceBetweenLargestAndMedian = largest - median;
    differenceBetweenLargestAndSmallest = largest - smallest;

    // 2.5 Assign a string output to a case where there is one high card.
    if (largest == 1) highCard = "an Ace";
    else if (largest == 2) highCard = "a two";
    else if (largest == 3) highCard = "a three";
    else if ( largest == 4 ) highCard = "a four";
    else if ( largest == 5 ) highCard = "a five";
    else if ( largest == 6 ) highCard = "a six";
    else if ( largest == 7 ) highCard = "a seven";
    else if ( largest == 8 ) highCard = "an eight";
    else if ( largest == 9 ) highCard = "a nine";
    else if ( largest == 10 ) highCard = "a ten";
    else if ( largest == 11 ) highCard = "a Jack";
    else if ( largest == 12 ) highCard = "a Queen";
    else if ( largest == 13 ) highCard = "a King";

    // 2.6 Assign outputs to all cases.
    if ( card1 == card2 && card1 == card3 && card2 == card3 )
    {
        evaluation = "You have three " + equalCards;
    }
    else if ( differenceBetweenMedianAndSmallest == 1
             && differenceBetweenLargestAndMedian == 1
             && differenceBetweenLargestAndSmallest == 2 )
    {
        evaluation = "You have " + highCard + "-high straight";
    }
    else if ( smallest == 1 && median == 12 && largest == 13 )
    {
        evaluation = "You have an Ace-high straight";
    }
    else if ( card1 == card2 || card1 == card3 || card2 == card3 )
    {
        evaluation = "You have a pair of " + pairCards;
    }
    else if ( smallest == 1)
    {
        evaluation = "You have an Ace";
    }
    else
    {
        evaluation = "You have " + highCard;
    }

    // 4 Output.
    cout << evaluation << "." << endl;

    // 5 Finish program.
    cout << endl << "Press ENTER to finish..." << endl;
    cin.ignore(999, '\n');
    return 0;
}
