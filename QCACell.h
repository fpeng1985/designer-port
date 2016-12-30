//
// Created by fpeng on 2016/12/25.
//

#ifndef DESIGNER_PORT_QCACELL_H
#define DESIGNER_PORT_QCACELL_H

#include <array>
#include <string>

#include "QCAObject.h"

namespace hfut {

    inline int clock_inc(int clock) {
        return (clock+1)%4;
    }

    inline int clock_dec(int clock) {
        return clock==0 ? 3 : clock-1;
    }

    enum class QCACellMode {
        NORMAL,
        CROSSOVER,
        VERTICAL
    };

    enum class QCACellFunction {
        NORMAL,
        INPUT,
        OUTPUT,
        FIXED,
        LAST_FUNCTION
    };

    struct QCACellDot {
        double x;//!< A dot's absolute world x coordinate
        double y;//!< A dot's absolute world y coordinate
        double diameter;//!< A dot's diameter
        double charge;//!< A dot's charge
        double spin;//!< Quantum spin of charge within dot
        double potential;//!< Electrostatic potential induced by all other cells on this dot
    };

    class QCACell : public QCAObject {
    protected:
        int id;
        std::string label;
        int clock ;
        QCACellMode mode ;
        QCACellFunction function;
        std::array<QCACellDot, 4> dots;

        static double DEFAULT_CELL_SIZE;
        static QCACellMode DEFAULT_CELL_MODE;
        static double DEFAULT_DOT_DIAMETER;
    };
};


#endif //DESIGNER_PORT_QCACELL_H
