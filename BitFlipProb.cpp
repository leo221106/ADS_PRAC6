#include "BitFlipProb.h"
#include "Individual.h"

#include <stdlib.h>
#include <time.h>

BitFlipProb::BitFlipProb(double n_p) {
    p = n_p;
}

Individual* BitFlipProb::mutate(Individual* parent, int k) {
    srand(time(NULL));
    int probability = p * 100;

    Individual * offspring = new Individual(parent->getString());
    
    int o_len = offspring->getLength();
    for (int i = 0; i < o_len; i++) {
        int random = rand() % 100 + 1;
        if (random <= probability) {
            offspring->flipBit(i);
        }
    }
    
    return offspring;
}