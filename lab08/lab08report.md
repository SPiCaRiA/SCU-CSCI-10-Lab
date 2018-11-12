# Lab 08 Report

## Part A

### 1.

[lab08A1.cpp](code/partA/lab08A1.cpp):

```cpp
#ifndef LAB08A1_CPP

#define LAB08A1_CPP

struct Item
{
    char name[256];
    char author_artist[256];
    double price;
    char chapters_tracks[256];
    char release_date[256];
};

#endif
```


### 2.

Psuedocode:

```
FUNCTION printItem(it OF TYPE ITEM) OF TYPE NONE
    OUTPUT "Name: ", it.name
    OUTPUT "Author/artist: ", it.author_artist
    OUTPUT "Price: ", it.price
    OUTPUT "Release date: ", it.release_date
    OUTPUT "Chapters/tracks: ", it.chapters_tracks
ENDFUNC

FUNCTION initializeItem(it OF TYPE ITEM) OF TYPE NONE
    OUTPUT "Enter the name: "
    INPUT it.name

    OUTPUT "Enter the author/artist: "
    INPUT it.author_artist

    OUTPUT "Enter the price: "
    INPUT it.price

    OUTPUT "Enter the release date: "
    INPUT it.release_date

    OUTPUT "Enter the chapters/tracks: "
    INPUT it.chapters_tracks
ENDFUNC
```


### 3.

[lab08A3.cpp](code/partA/lab08A3.cpp):

```cpp
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
```


### 4.

Psuedocode:

```
FUNCTION fillCart(a : ARRAY OF TYPE Item, size OF TYPE INTEGER) OF TYPE DOUBLE
    DECLARE total OF TYPE DOUBLE
    DECLARE instruction OF TYPE STRING

    FOREACH it IN a,
      THEN
        OUTPUT "Item: ", it.name, ", by", it.author_artist, " for $", it.price

        WHILE TRUE,
          THEN
            OUTPUT 'Would you like to "purchase", see more "details", or "pass"?'
            OUTPUT ">>"
            INTPUT instruction

            IF instruction == "pass",
              THEN
                BREAK
            ELSE IF instruction == "details",
              THEN
                printItem(it)
                CONTINUE
            ELSE IF instruction == "purchase",
              THEN
                total += it.price
                BREAK
            ENDIF
        ENDWHILE
    ENDFOREACH

    RETURN total
ENDFUNC
```


### 5.

[lab08A5.cpp](code/partA/lab08A5.cpp):

```cpp
#include <iostream>
#include "lab08A1.cpp"
#include "lab08A3.cpp"

using namespace std;


double fillCart(Item a[], int size)
{
    double total = 0;
    string instruction;

    for (int i = 0; i < size; i++) {
        cout << "Item: " << a[i].name << ", by " << a[i].author_artist << " for $" << a[i].price << endl;

        for (;;) {
            cout << "Would you like to \"purchase\", see more \"details\", or \"pass\"?" << endl << ">>";
            cin >> instruction;
            cout << endl;

            if (instruction == "pass") {
                break;
            }
            else if (instruction == "details") {
                printItem(a[i]);
                continue;
            }
            else if (instruction == "purchase") {
                total += a[i].price;
                break;
            }
        }
    }

    return total;
}

int main()
{
    Item i1, i2;
    Item a[2];
    int total_price;

    initializeItem(i1);
    initializeItem(i2);

    a[0] = i1;
    a[1] = i2;

    total_price = fillCart(a, 2);
    cout << "Total price: " << total_price << endl;
}
```

