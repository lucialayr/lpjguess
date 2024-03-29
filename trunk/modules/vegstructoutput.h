///////////////////////////////////////////////////////////////////////////////////////
/// \file vegstructoutput.h
/// \brief Output module for patch based vegetation structure
///
/// \author Joerg Steinkamp
/// $Date: Thu Nov  3 11:15:37 CET 2016 $
///
///////////////////////////////////////////////////////////////////////////////////////
#ifndef LPJ_GUESS_VEGSTRUCT_OUTPUT_H
#define LPJ_GUESS_VEGSTRUCT_OUTPUT_H
#include "outputmodule.h"
#include "outputchannel.h"
#include "gutil.h"

namespace GuessOutput {

    class VegstructOutput : public OutputModule {
    public:
        VegstructOutput();
        ~VegstructOutput();
        // implemented functions inherited from OutputModule
        // (see documentation in OutputModule)
        void init();
        void outannual(Gridcell& gridcell);
        void outdaily(Gridcell& gridcell);

        void openlocalfiles(Gridcell& gridcell) {};

        void closelocalfiles(Gridcell& gridcell) {};

    private:

        // Defines all output tables
        void define_output_tables();

        xtring file_vegstruct;
        FILE *out_vegstruct;
    };
    class VegstructOutputPatch : public OutputModule {
    public:
        VegstructOutputPatch();
        ~VegstructOutputPatch();
        // implemented functions inherited from OutputModule
        // (see documentation in OutputModule)
        void init();
        void outannual(Gridcell& gridcell);
        void outdaily(Gridcell& gridcell);

        void openlocalfiles(Gridcell& gridcell) {};

        void closelocalfiles(Gridcell& gridcell) {};

    private:

        // Defines all output tables
        void define_output_tables();

        xtring file_vegstruct_patch;
        FILE *out_vegstruct_patch;
    };
}
#endif