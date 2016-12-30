//
// Created by fpeng on 2016/12/25.
//

#include "QCACell.h"

namespace hfut {

    double QCACell::DEFAULT_CELL_SIZE = 18;
    QCACellMode QCACell::DEFAULT_CELL_MODE = QCACellMode::NORMAL;
    double QCACell::DEFAULT_DOT_DIAMETER = 5;

    QCACell::QCACell(double x, double y) : QCAObject(x, y, x-DEAULT_CELL_SIZE/2, y-DEFAULT_CELL_SIZE/2,
                                                     DEFAULT_CELL_SIZE, DEFAULT_CELL_SIZE) {
            double dcx = DEFAULT_CELL_SIZE;
            double dcy = DEFAULT_CELL_SIZE;
            double ddiam = DEFAULT_DOT_DIAMETER;

            dots[0].charge =
            dots[1].charge =
            dots[2].charge =
            dots[3].charge = HALF_QCHARGE ;

            dots[0].diameter =
            dots[1].diameter =
            dots[2].diameter =
            dots[3].diameter = ddiam ;

            dots[3].x = x - (dcx / 2 - dots[3].diameter) / 2 - dots[3].diameter / 2;
            dots[3].y = y - (dcy / 2 - dots[3].diameter) / 2 - dots[3].diameter / 2;
            dots[0].x = x + (dcx / 2 - dots[0].diameter) / 2 + dots[0].diameter / 2;
            dots[0].y = y - (dcy / 2 - dots[0].diameter) / 2 - dots[0].diameter / 2;
            dots[2].x = x - (dcx / 2 - dots[2].diameter) / 2 - dots[2].diameter / 2;
            dots[2].y = y + (dcy / 2 - dots[2].diameter) / 2 + dots[2].diameter / 2;
            dots[1].x = x + (dcx / 2 - dots[1].diameter) / 2 + dots[1].diameter / 2;
            dots[1].y = y + (dcy / 2 - dots[1].diameter) / 2 + dots[1].diameter / 2;

    }
}
