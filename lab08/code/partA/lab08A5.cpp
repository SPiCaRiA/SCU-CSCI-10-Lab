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

