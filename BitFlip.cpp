#include "BitFlip.h"
#include "Individual.h"

Individual* BitFlip::mutate(Individual* parent, int k) {
    Individual * offspring = new Individual(parent->getString());
    
    int o_len = offspring->getLength();
    int pos = (k-1) % o_len;
    offspring->flipBit(pos);
    
    return offspring;
}