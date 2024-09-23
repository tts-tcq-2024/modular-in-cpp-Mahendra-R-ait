#include <ColorPair.hpp>
#include <iostream>
#include <sstring>

ColorPair obj_colorpair;

std::string obj_colorpair.ToString() 
{
                std::string colorPairStr = MajorColorNames[majorColor];
                colorPairStr += " ";
                colorPairStr += MinorColorNames[minorColor];
                return colorPairStr;
}
ColorPair GetColorFromPairNumber(int pairNumber) 
{
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minorColor =
            (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(majorColor, minorColor);
}

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) 
{
        return major * numberOfMinorColors + minor + 1;
}
