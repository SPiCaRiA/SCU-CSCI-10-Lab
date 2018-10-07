#include "lab03Butil.h"


int main()
{
    GenotypeProb offspring_geno_prob;

    offspring_geno_prob = calc_offspring_geno_prob(input_parent_geno());

    output_offspring_geno_prob(offspring_geno_prob);
    output_offspring_pheno_prob(calc_offspring_pheno_prob(offspring_geno_prob));

    return 0;
}

