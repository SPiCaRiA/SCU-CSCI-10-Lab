#ifndef LAB03BUTIL_H
#define LAB03BUTIL_H

#include <string>

struct PhenotypeProb
{
    int yellow;
    int green;
};

struct GenotypeProb
{
    int prob_gg;
    int prob_GG;
    int prob_Gg;
};

struct ParentGenotype
{
    std::string p1;
    std::string p2;
};

struct ProbPrompt
{
    int prob;
    std::string prompt;
};


void output_offspring_geno_prob(GenotypeProb genoprob);

void output_offspring_pheno_prob(PhenotypeProb phenoprob);

ParentGenotype input_parent_geno();

GenotypeProb calc_offspring_geno_prob(ParentGenotype parentgeno);

PhenotypeProb calc_offspring_pheno_prob(GenotypeProb genoprob);

#endif

