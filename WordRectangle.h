//
// Created by fpeng on 2016/12/30.
//

#ifndef DESIGNER_PORT_WORDRECTANGLE_H
#define DESIGNER_PORT_WORDRECTANGLE_H


namespace hfut {

    struct WordRectangle {
        double llx;
        double lly;
        double bbx;
        double bby;

        WordRectangle(double llx, double lly, double bbx, double bby) : llx(llx), lly(lly), bbx(bbx), bby(bby) {}
    };

}

#endif //DESIGNER_PORT_WORDRECTANGLE_H
