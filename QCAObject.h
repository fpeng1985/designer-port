//
// Created by fpeng on 2016/12/30.
//

#ifndef DESIGNER_PORT_QCAOBJECT_H
#define DESIGNER_PORT_QCAOBJECT_H

#include "WordRectangle.h"

namespace hfut {
    //Word coordinate is double, Real coordinate is int

    class QCAObject {
    protected:
        double x;
        double y;
        WordRectangle bounding_box;
    };

}

#endif //DESIGNER_PORT_QCAOBJECT_H
