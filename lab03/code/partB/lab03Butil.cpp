#include <iostream>
#include <string>

#include "lab03Butil.h"

using namespace std;


string input_string(string prompt)
{
    string input;

    cout << prompt;
    cin >> input;

    return input;
}

void output_prob(ProbPrompt probprompt)
{
    cout << "Probability of " << probprompt.prompt << ": " << probprompt.prob << endl;
}

void output_offspring_geno_prob(GenotypeProb genoprob)
{
    output_prob({ genoprob.prob_gg, "gg" });
    output_prob({ genoprob.prob_GG, "GG" });
    output_prob({ genoprob.prob_Gg, "Gg" });

    cout << endl;
}

void output_offspring_pheno_prob(PhenotypeProb phenoprob)
{
    output_prob({ phenoprob.green, "green" });
    output_prob({ phenoprob.yellow, "yellow" });

    cout << endl;
}

bool is_valid_geno(string geno)
{
    if (geno.size() != 2) {
        return false;
    }
    else if (!(geno[0] == 'g' ||
               geno[0] == 'G')) {
        return false;
    }
    else if (!(geno[1] == 'g' ||
              geno[1] == 'G')) {
        return false;
    }

    return true;
}

ParentGenotype input_parent_geno()
{
    string geno1, geno2;

    geno1 = input_string("Enter genotype of parent1: ");

    while (!is_valid_geno(geno1)) {
        geno1 = input_string("Invalid! Re-input: ");
    }

    geno2 = input_string("Enter genotype of parent2: ");
    while (!is_valid_geno(geno2)) {
        geno2 = input_string("Invalid! Re-input: ");
    }

    cout << endl;

    return { geno1, geno2 };
}

GenotypeProb calc_offspring_geno_prob(ParentGenotype parentgeno)
{
    int prob_gg, prob_GG, prob_Gg;
    prob_gg = prob_GG = prob_Gg = 0;

    // GG GG
    if (parentgeno.p1 == "GG" && parentgeno.p2 == "GG") {
        prob_GG = 100;
    }
    // gg gg
    else if (parentgeno.p1 == "gg" && parentgeno.p2 == "gg") {
        prob_gg = 100;
    }
    // Gg Gg
    else if ((parentgeno.p1 == "Gg" || parentgeno.p1 == "gG") &&
             (parentgeno.p2 == "Gg" || parentgeno.p2 == "gG")) {
        prob_GG = prob_gg = 25;
        prob_Gg = 50;
    }
    // GG gg
    else if ((parentgeno.p1 == "GG" && parentgeno.p2 == "gg") ||
             (parentgeno.p2 == "GG" && parentgeno.p1 == "gg")) {
        prob_Gg = 100;
    }
    // GG Gg
    else if ((parentgeno.p1 == "GG" && (parentgeno.p2 == "Gg" || parentgeno.p2 == "gG")) ||
             (parentgeno.p2 == "GG" && (parentgeno.p1 == "Gg" || parentgeno.p1 == "gG"))) {
        prob_GG = prob_Gg = 50;
    }
    // gg Gg
    else if ((parentgeno.p1 == "gg" && (parentgeno.p2 == "Gg" || parentgeno.p2 == "gG")) ||
             (parentgeno.p2 == "gg" && (parentgeno.p1 == "Gg" || parentgeno.p1 == "gG"))) {
        prob_gg = prob_Gg = 50;
    }

    return { prob_gg, prob_GG, prob_Gg };
}

PhenotypeProb calc_offspring_pheno_prob(GenotypeProb genoprob)
{
    return { genoprob.prob_gg, genoprob.prob_GG + genoprob.prob_Gg };
}

