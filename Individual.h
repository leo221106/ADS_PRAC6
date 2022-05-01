#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual {
    private:
        std::string binaryString;
        int length;

    public:
        Individual(int n_length);
        Individual(std::string n_binaryString);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
};

#endif