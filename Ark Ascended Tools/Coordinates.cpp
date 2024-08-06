#include "pch.h"
#include "Coordinates.h"

// Define the extern variables
// inventory color BCF4FF RGB(188, 244, 255). 
// 
//       
int text1x = 0, text1y = 0, text2x = 0, text2y = 0;
int xfer1x = 0, xfer1y = 0, xfer2x = 0, xfer2y = 0;
int closex = 0, closey = 0, drop1x = 0, drop1y = 0;
int drop2x = 0, drop2y = 0, blackx = 0, blacky = 0;
int invcolx = 0, invcoly = 0, xferdropx = 0, xferdropy = 0, promptx = 0, prompty = 0;
int dropcolorx = 0, dropcolory = 0, servnx = 0, servny = 0, okayx = 0, okayy = 0;
int servtx = 0, servty = 0, servjx = 0, servjy = 0;
int color1x = 0, color1y = 0, color2x = 0, color2y = 0, color3x = 0, color3y = 0,
click1X = 0, click1Y = 0, click2X = 0, click2Y = 0, click3X = 0, click3Y = 0,
click4X = 0, click4Y = 0, click5X = 0, click5Y = 0, click6X = 0, click6Y = 0;
int DDJC1X = 0, DDJC1Y = 0, DDJC2X = 0, DDJC2Y = 0, CAJC1X = 0, CAJC1Y = 0, 
CAJC2X = 0, CAJC2Y = 0, CAJ1X = 0, CAJ1Y = 0, CAJ2X = 0, CAJ2Y = 0, CAJ3X = 0, CAJ3Y = 0;

void PerformMouseClick(int x, int y) {
    SetCursorPos(x, y);
    mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
    mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

void setCoordinates() {
    // Get the current screen resolution
    int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    // Check the current screen resolution and set the coordinates accordingly
    if (screenWidth == 3840 && screenHeight == 2160) {
        text1x = 467;
        text1y = 397;
        text2x = 2532;
        text2y = 394;
        xfer1x = 717;
        xfer1y = 395;
        xfer2x = 2753;
        xfer2y = 395;
        closex = 3597;
        closey = 133;
        drop1x = 810;
        drop1y = 397;
        drop2x = 2852;
        drop2y = 397;
        blackx = 3469;
        blacky = 141;
        invcolx = 2542;
        invcoly = 269;
        xferdropx = 2855;
        xferdropy = 393;
        dropcolorx = 3329;
        dropcolory = 275;
        promptx = 1880;
        prompty = 730;
        okayx = 1700;
        okayy = 1460;
        color1x = 657;
        color1y = 438;
        color2x = 950;
        color2y = 1864;
        color3x = 1960;
        color3y = 725;
        servnx = 3229;
        servny = 383;
        servtx = 1926;
        servty = 650;
        servjx = 3423;
        servjy = 1888;
        click3X = 1050;
        click3Y = 1864;
        click4X = 2123;
        click4Y = 1457;
        click5X = 337;
        click5Y = 1763;
        click6X = 1050;
        click6Y = 1108;
    }
    else if (screenWidth == 3440 && screenHeight == 1440) {
        text1x = 773;
        text1y = 262;
        text2x = 2131;
        text2y = 265;
        xfer1x = 920;
        xfer1y = 263;
        xfer2x = 2286;
        xfer2y = 261;
        closex = 2837;
        closey = 89;
        drop1x = 2131;
        drop1y = 265;
        drop2x = 2343;
        drop2y = 261;
        blackx = 3199;
        blacky = 85;
        invcolx = 2070;
        invcoly = 180;
        xferdropx = 2349;
        xferdropy = 263;
        dropcolorx = 2659;
        dropcolory = 182;
        promptx = 1603;
        prompty = 487;
        okayx = 1565;
        okayy = 971;
        color1x = 657;
        color1y = 438;
        color2x = 1072;
        color2y = 1246;
        color3x = 1641;
        color3y = 486;
        servnx = 2608;
        servny = 261;
        servtx = 1633;
        servty = 435;
        servjx = 2725;
        servjy = 1261;
        click3X = 1082;
        click3Y = 1245;
        click4X = 1866;
        click4Y = 971;
        click5X = 664;
        click5Y = 1173;
        click6X = 1142;
        click6Y = 756;
        DDJC1X = 2953;
        DDJC1Y = 421;
        DDJC2X = 2450;
        DDJC2Y = 676;
        CAJC1X = 1786;
        CAJC1Y = 238;
        CAJC2X = 2509;
        CAJC2Y = 168;
        CAJ1X = 1019;
        CAJ1Y = 392;
        CAJ2X = 1126;
        CAJ2Y = 788;
        CAJ3X = 2614;
        CAJ3Y = 197;
    }
    else if (screenWidth == 2560 && screenHeight == 1440) {
        text1x = 314;
        text1y = 262;
        text2x = 1698;
        text2y = 266;
        xfer1x = 479;
        xfer1y = 262;
        xfer2x = 1835;
        xfer2y = 260;
        closex = 2400;
        closey = 84;
        drop1x = 541;
        drop1y = 263;
        drop2x = 1907;
        drop2y = 265;
        blackx = 2316;
        blacky = 89;
        invcolx = 1631;
        invcoly = 182;
        xferdropx = 1907;
        xferdropy = 266;
        dropcolorx = 2217;
        dropcolory = 184;
        promptx = 1162;
        prompty = 487;
        okayx = 1134;
        okayy = 968;
        color1x = 219;
        color1y = 438;
        color2x = 632;
        color2y = 1241;
        color3x = 1177;
        color3y = 482;
        servnx = 2139;
        servny = 262;
        servtx = 1286;
        servty = 434;
        servjx = 2269;
        servjy = 1258;
        click3X = 619;
        click3Y = 1247;
        click4X = 1398;
        click4Y = 973;
        click5X = 222;
        click5Y = 1172;
        click6X = 713;
        click6Y = 790;
        DDJC1X = 2073;
        DDJC1Y = 420;
        DDJC2X = 1754;
        DDJC2Y = 676;
        CAJC1X = 1345;
        CAJC1Y = 238;
        CAJC2X = 2061;
        CAJC2Y = 192;
        CAJ1X = 665;
        CAJ1Y = 393;
        CAJ2X = 725;
        CAJ2Y = 788;
        CAJ3X = 2174;
        CAJ3Y = 197;
    }
    else if (screenWidth == 1920 && screenHeight == 1080) {
        text1x = 228;
        text1y = 197;
        text2x = 1272;
        text2y = 197;
        xfer1x = 357;
        xfer1y = 198;
        xfer2x = 1376;
        xfer2y = 192;
        closex = 1795;
        closey = 63;
        drop1x = 407;
        drop1y = 197;
        drop2x = 1426;
        drop2y = 197;
        blackx = 1738;
        blacky = 66;
        invcolx = 1222;
        invcoly = 135;
        xferdropx = 1425;
        xferdropy = 197;
        dropcolorx = 1665;
        dropcolory = 136;
        promptx = 869;
        prompty = 365;
        okayx = 856;
        okayy = 726;
        color1x = 759;
        color1y = 203;
        color2x = 476;
        color2y = 932;
        color3x = 937;
        color3y = 369;
        servnx = 1608;
        servny = 194;
        servtx = 954;
        servty = 326;
        servjx = 1709;
        servjy = 943;
        click3X = 469;
        click3Y = 933;
        click4X = 1070;
        click4Y = 729;
        click5X = 169;
        click5Y = 877;
        click6X = 529;
        click6Y = 582;
        DDJC1X = 1561;
        DDJC1Y = 314;
        DDJC2X = 1348;
        DDJC2Y = 514;
        CAJC1X = 1041;
        CAJC1Y = 178;
        CAJC2X = 1542;
        CAJC2Y = 144;
        CAJ1X = 516;
        CAJ1Y = 294;
        CAJ2X = 547;
        CAJ2Y = 593;
        CAJ3X = 1629;
        CAJ3Y = 147;
    }
    else if (screenWidth == 1920 && screenHeight == 1200) {
        text1x = 224;
        text1y = 258;
        text2x = 1267;
        text2y = 261;
        xfer1x = 356;
        xfer1y = 256;
        xfer2x = 1374;
        xfer2y = 258;
        closex = 1796;
        closey = 131;
        drop1x = 406;
        drop1y = 254;
        drop2x = 1422;
        drop2y = 258;
        blackx = 1718;
        blacky = 75;
        invcolx = 1222;
        invcoly = 195;
        xferdropx = 1425;
        xferdropy = 258;
        dropcolorx = 1665;
        dropcolory = 196;
        promptx = 861;
        prompty = 405;
        okayx = 838;
        okayy = 813;
        color1x = 164;
        color1y = 389;
        color2x = 421;
        color2y = 1031;
        color3x = 892;
        color3y = 406;
        servnx = 1602;
        servny = 257;
        servtx = 937;
        servty = 388;
        servjx = 1718;
        servjy = 1005;
        click3X = 478;
        click3Y = 1034;
        click4X = 1069;
        click4Y = 806;
        click5X = 170;
        click5Y = 937;
        click6X = 524;
        click6Y = 647;
    }
    else if (screenWidth == 1536 && screenHeight == 864) {
        text1x = 183;
        text1y = 158;
        text2x = 1028;
        text2y = 162;
        xfer1x = 283;
        xfer1y = 158;
        xfer2x = 1103;
        xfer2y = 157;
        closex = 1439;
        closey = 50;
        drop1x = 323;
        drop1y = 156;
        drop2x = 1142;
        drop2y = 159;
        blackx = 1390;
        blacky = 55;
        invcolx = 978;
        invcoly = 108;
        xferdropx = 1141;
        xferdropy = 157;
        dropcolorx = 1333;
        dropcolory = 109;
        promptx = 696;
        prompty = 292;
        okayx = 680;
        okayy = 580;
        color1x = 775;
        color1y = 262;
        color2x = 387;
        color2y = 744;
        color3x = 710;
        color3y = 294;
        servnx = 1279;
        servny = 156;
        servtx = 726;
        servty = 265;
        servjx = 1362;
        servjy = 754;
        click3X = 425;
        click3Y = 745;
        click4X = 857;
        click4Y = 582;
        click5X = 139;
        click5Y = 703;
        click6X = 421;
        click6Y = 454;
    }
}