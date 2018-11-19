#include <iostream>
#include <fstream>

using namespace std;


double average(double arr[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++) {
        total = total + arr[i];
    }

    return total / size;
}

int main()
{
    double average_score, scores[100];
    ifstream score_file("psycho-round2-scores2.txt");
    ofstream output_file("output.txt");
    int i = 0;

    while (score_file >> scores[i++]) {
    }

    average_score = average(scores, i + 1);

    output_file << "Average: " << average_score << endl
         << "Number of scores: " << i + 1 << endl;

    score_file.close();
    output_file.close();
}

