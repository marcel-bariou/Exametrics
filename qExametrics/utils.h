#ifndef Q_EXAMETRICS_UTILS_H
#define Q_EXAMETRICS_UTILS_H

#include <math.h>
#include <CCGeom.h> // ccvector3
#include <QString>

class Utils
{
    public:

        static bool double_equals(double a, double b, double epsilon = 0.01);

        static double frand_a_b(double a, double b);

        static QString ccVector3ToString(const CCVector3 v);
        static QString ccVector3ToString(const CCVector3d v);
        static QString ccVector3ToString(const CCVector3* v);
        /*static QString ccPVector3ToString(CCVector3* v);
        static QString ccPVector3ToString(CCVector3d* v);*/

        static CCVector3 ccVectorDoubleToFloat(CCVector3d v);
        //static CCVector3* ccPVectorDoubleToFloat(CCVector3d* v);
};


#endif
