#include "Rearrange.h"
#include "Individual.h"

#include <string>

Individual *Rearrange::mutate(Individual *parent, int k)
{
    std::string p_binaryString = parent->getString();

    int p_len = parent->getLength();
    int pos = (k - 1) % p_len;

    std::string o_binaryString = p_binaryString.substr(pos, p_len - pos);
    o_binaryString.append(p_binaryString.substr(0, pos));

    return new Individual(o_binaryString);
}