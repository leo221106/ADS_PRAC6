#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Individual.h"
#include "Mutator.h"

class BitFlipProb : public Mutator {
    private:
        double p;

    public:
        BitFlipProb(double n_p);
        virtual Individual* mutate(Individual* parent, int k); 
};

#endif