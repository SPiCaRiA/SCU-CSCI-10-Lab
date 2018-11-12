#include <iostream>

#include "lab08A1.cpp"

using namespace std;


void printItem(Item it)
{
    cout << "Name: " << it.name << endl
         << "Author/artist: " << it.author_artist << endl
         << "Price: " << it.price << endl
         << "Release date: " << it.release_date << endl
         << "Chapters/tracks: " << it.chapters_tracks << endl;
    cout << endl;
}

void initializeItem(Item& it)
{
    cout << "Enter the name: ";
    cin.getline(it.name, 256);

    cout << "Enter the author/artist: ";
    cin.getline(it.author_artist, 256);

    cout << "Enter the release date: ";
    cin.getline(it.release_date, 256);

    cout << "Enter the chapters/tracks: ";
    cin.getline(it.chapters_tracks, 256);

    cout << "Enter the price: ";
    cin >> it.price;
    cin.ignore();

    cout << endl;
}

//int main()
//{
    //Item it;

    //initializeItem(it);
    //printItem(it);
//}

