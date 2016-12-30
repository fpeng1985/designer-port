//
// Created by fpeng on 2016/12/30.
//

#include "QCAObject.h"

namespace hfut {
    QCAObject::QCAObject(double x=0, double y=0, double llx=0, double lly=0, double bbx=0, double bby=0)
            : x(x), y(y), WordRectangle(llx, lly, bbx, bby)
    {}
}