#ifndef BITFLIP_H
#define BITFLIP_H

#include "Individual.h"
#include "Mutator.h"

class BitFlip : public Mutator {
    public:
        virtual Individual* mutate(Individual* parent, int k); 
};

#endif