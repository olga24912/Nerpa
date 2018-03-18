#ifndef NRPSMATCHER_NORMALIZEDMATCH_H
#define NRPSMATCHER_NORMALIZEDMATCH_H

#include <NRP/NRP.h>
#include <NRP/NRPGenerator.h>

namespace normalized_match {
    using namespace nrp;
    class NormalizedMatch {
    private:
        static const int CNT_GEN;
        static const double EPS;
        double score = 0;

        NRP::Match match;
    public:
        NormalizedMatch() = default;
        NormalizedMatch(NRP::Match match, NRPGenerator generator, nrpsprediction::NRPsPrediction prediction, NRP* mol);
        void print(std::ofstream& out);
        void print_short(std::ofstream& out);
        void print_short_prediction(std::ofstream& out);
        void print_csv(std::ofstream& out);

        double calcMean(std::vector<double> score);

        double calcSD(std::vector<double> score, double mean);

        bool operator < (const NormalizedMatch &b) const;
    };
}


#endif //NRPSMATCHER_NORMALIZEDMATCH_H