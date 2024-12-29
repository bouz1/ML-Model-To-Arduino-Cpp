

const int Nv = 10;
const int dimX = 4;

float base_score =   18476.805 ;
float learning_rate = 1 ;

/////// Xy ////// 
const float X [] PROGMEM  = {0.0, 116.0, 6.0, 86802.0, 0.0, 120.0, 6.0, 30707.0, 0.0, 95.0, 6.0, 51915.0, 0.0, 110.0, 6.0, 44972.0, 0.0, 125.0, 6.0, 85500.0, 1.0, 176.0, 6.0, 98918.0, 1.0, 190.0, 6.0, 69119.0, 1.0, 131.0, 6.0, 38157.0, 1.0, 150.0, 6.0, 112374.0, 1.0, 150.0, 6.0, 93524.0};

const float y[] PROGMEM  = {19074.861328125, 22590.43359375, 18458.25390625, 20624.408203125, 20219.4453125, 29240.26171875, 32525.0, 27160.859375, 25408.60546875, 26429.5546875};



////////////////// TREES ////////////////////////////
////////////////////////////////////////////////////

////////////////// TREE 0
float tree0(float X[]) {
if (X[1] < 129) {
    if (X[1] < 91) {
        if (X[2] < 6) {
            return -905.217285;
        } else {
            return -422.910553;
        }
    } else {
        if (X[3] < 47435) {
            return 442.025391;
        } else {
            return -22.4555092;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[3] < 84687) {
            return 948.198547;
        } else {
            return 342.00119;
        }
    } else {
        if (X[3] < 136640) {
            return 1401.38916;
        } else {
            return 803.22821;
        }
    }
}
}


////////////////// TREE 1
float tree1(float X[]) {
if (X[1] < 129) {
    if (X[1] < 91) {
        if (X[3] < 94579) {
            return -367.03537;
        } else {
            return -785.1203;
        }
    } else {
        if (X[3] < 88055) {
            return 263.169556;
        } else {
            return -180.46492;
        }
    }
} else {
    if (X[0] < 1) {
        if (X[3] < 85868) {
            return 681.843323;
        } else {
            return 161.013351;
        }
    } else {
        if (X[3] < 73310) {
            return 1192.49292;
        } else {
            return 817.805359;
        }
    }
}
}


////////////////// TREE 2
float tree2(float X[]) {
if (X[1] < 129) {
    if (X[1] < 91) {
        if (X[2] < 6) {
            return -748.32489;
        } else {
            return -339.305328;
        }
    } else {
        if (X[3] < 78999) {
            return 258.834747;
        } else {
            return -128.868317;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[3] < 84687) {
            return 759.0755;
        } else {
            return 260.796021;
        }
    } else {
        if (X[3] < 150030) {
            return 1155.68872;
        } else {
            return 547.637085;
        }
    }
}
}


////////////////// TREE 3
float tree3(float X[]) {
if (X[1] < 150) {
    if (X[1] < 115) {
        if (X[2] < 6) {
            return -624.546997;
        } else {
            return -108.509277;
        }
    } else {
        if (X[3] < 50416) {
            return 629.192261;
        } else {
            return 132.664719;
        }
    }
} else {
    if (X[3] < 111300) {
        if (X[0] < 1) {
            return 732.261292;
        } else {
            return 1021.88525;
        }
    } else {
        if (X[1] < 186) {
            return 248.380966;
        } else {
            return 814.958252;
        }
    }
}
}


////////////////// TREE 4
float tree4(float X[]) {
if (X[1] < 129) {
    if (X[1] < 99) {
        if (X[3] < 99228) {
            return -248.054398;
        } else {
            return -573.781677;
        }
    } else {
        if (X[3] < 37634) {
            return 426.207336;
        } else {
            return 4.47929859;
        }
    }
} else {
    if (X[0] < 1) {
        if (X[2] < 6) {
            return -159.480225;
        } else {
            return 414.124237;
        }
    } else {
        if (X[2] < 6) {
            return 342.531891;
        } else {
            return 814.811218;
        }
    }
}
}


////////////////// TREE 5
float tree5(float X[]) {
if (X[1] < 150) {
    if (X[1] < 100) {
        if (X[3] < 18640) {
            return 93.6870117;
        } else {
            return -329.287445;
        }
    } else {
        if (X[3] < 51691) {
            return 413.239594;
        } else {
            return 29.45825;
        }
    }
} else {
    if (X[3] < 111300) {
        if (X[1] < 177) {
            return 666.044067;
        } else {
            return 906.530579;
        }
    } else {
        if (X[1] < 177) {
            return 118.257118;
        } else {
            return 601.654419;
        }
    }
}
}


////////////////// TREE 6
float tree6(float X[]) {
if (X[0] < 1) {
    if (X[1] < 115) {
        if (X[3] < 19258) {
            return 255.865845;
        } else {
            return -246.556427;
        }
    } else {
        if (X[3] < 48742) {
            return 440.449799;
        } else {
            return 70.7444687;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[3] < 75313) {
            return 556.847351;
        } else {
            return 249.476563;
        }
    } else {
        if (X[3] < 176320) {
            return 821.91864;
        } else {
            return 105.448875;
        }
    }
}
}


////////////////// TREE 7
float tree7(float X[]) {
if (X[1] < 150) {
    if (X[2] < 6) {
        if (X[1] < 144) {
            return -404.839844;
        } else {
            return 692.31073;
        }
    } else {
        if (X[1] < 100) {
            return -182.209427;
        } else {
            return 196.255798;
        }
    }
} else {
    if (X[3] < 135520) {
        if (X[1] < 186) {
            return 560.316284;
        } else {
            return 815.177979;
        }
    } else {
        if (X[1] < 248) {
            return 57.3622704;
        } else {
            return 724.447388;
        }
    }
}
}


////////////////// TREE 8
float tree8(float X[]) {
if (X[0] < 1) {
    if (X[1] < 115) {
        if (X[3] < 69399) {
            return -47.9175453;
        } else {
            return -340.508636;
        }
    } else {
        if (X[3] < 48742) {
            return 365.506195;
        } else {
            return 44.8437881;
        }
    }
} else {
    if (X[1] < 121) {
        if (X[1] < 114) {
            return 67.20681;
        } else {
            return 300.822815;
        }
    } else {
        if (X[2] < 6) {
            return 171.724014;
        } else {
            return 569.842712;
        }
    }
}
}


////////////////// TREE 9
float tree9(float X[]) {
if (X[1] < 150) {
    if (X[2] < 6) {
        if (X[1] < 144) {
            return -354.103333;
        } else {
            return 626.78595;
        }
    } else {
        if (X[1] < 91) {
            return -196.618866;
        } else {
            return 149.369171;
        }
    }
} else {
    if (X[3] < 111300) {
        if (X[1] < 177) {
            return 462.522278;
        } else {
            return 627.379883;
        }
    } else {
        if (X[1] < 186) {
            return 68.9318619;
        } else {
            return 460.963715;
        }
    }
}
}


////////////////// TREE 10
float tree10(float X[]) {
if (X[0] < 1) {
    if (X[2] < 6) {
        if (X[1] < 121) {
            return -394.905487;
        } else {
            return -148.333252;
        }
    } else {
        if (X[1] < 99) {
            return -169.53801;
        } else {
            return 123.437492;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[3] < 75313) {
            return 403.716888;
        } else {
            return 142.976532;
        }
    } else {
        if (X[3] < 176320) {
            return 567.755676;
        } else {
            return 0.710503519;
        }
    }
}
}


////////////////// TREE 11
float tree11(float X[]) {
if (X[1] < 129) {
    if (X[3] < 100504) {
        if (X[1] < 95) {
            return -153.604172;
        } else {
            return 100.797989;
        }
    } else {
        if (X[1] < 115) {
            return -322.02652;
        } else {
            return -117.660721;
        }
    }
} else {
    if (X[2] < 6) {
        if (X[3] < 53526) {
            return 529.182251;
        } else {
            return -81.1568146;
        }
    } else {
        if (X[1] < 177) {
            return 284.972321;
        } else {
            return 512.473755;
        }
    }
}
}


////////////////// TREE 12
float tree12(float X[]) {
if (X[0] < 1) {
    if (X[1] < 150) {
        if (X[3] < 34775) {
            return 138.004227;
        } else {
            return -111.208855;
        }
    } else {
        if (X[3] < 114862) {
            return 344.607819;
        } else {
            return -52.3850365;
        }
    }
} else {
    if (X[1] < 114) {
        if (X[3] < 16430) {
            return 263.10083;
        } else {
            return -13.8887739;
        }
    } else {
        if (X[3] < 73310) {
            return 447.457916;
        } else {
            return 229.095261;
        }
    }
}
}


////////////////// TREE 13
float tree13(float X[]) {
if (X[0] < 1) {
    if (X[2] < 6) {
        if (X[1] < 185) {
            return -257.197357;
        } else {
            return 635.063416;
        }
    } else {
        if (X[1] < 99) {
            return -137.647354;
        } else {
            return 94.7321167;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[3] < 100504) {
            return 276.769684;
        } else {
            return -4.93018675;
        }
    } else {
        if (X[3] < 176320) {
            return 433.407623;
        } else {
            return -40.1252098;
        }
    }
}
}


////////////////// TREE 14
float tree14(float X[]) {
if (X[1] < 121) {
    if (X[3] < 121713) {
        if (X[1] < 95) {
            return -135.948166;
        } else {
            return 55.5394096;
        }
    } else {
        if (X[3] < 147419) {
            return -230.220261;
        } else {
            return -421.956635;
        }
    }
} else {
    if (X[2] < 6) {
        if (X[3] < 54609) {
            return 330.06955;
        } else {
            return -84.5553055;
        }
    } else {
        if (X[0] < 1) {
            return 159.446335;
        } else {
            return 331.360046;
        }
    }
}
}


////////////////// TREE 15
float tree15(float X[]) {
if (X[1] < 150) {
    if (X[3] < 36387) {
        if (X[1] < 120) {
            return 59.1445732;
        } else {
            return 408.227295;
        }
    } else {
        if (X[1] < 115) {
            return -154.233124;
        } else {
            return 20.386467;
        }
    }
} else {
    if (X[3] < 84687) {
        if (X[1] < 151) {
            return 459.926819;
        } else {
            return 305.553619;
        }
    } else {
        if (X[1] < 301) {
            return 114.066765;
        } else {
            return 798.669861;
        }
    }
}
}


////////////////// TREE 16
float tree16(float X[]) {
if (X[1] < 150) {
    if (X[2] < 6) {
        if (X[1] < 144) {
            return -234.05162;
        } else {
            return 629.921875;
        }
    } else {
        if (X[0] < 1) {
            return -9.80228138;
        } else {
            return 173.870453;
        }
    }
} else {
    if (X[3] < 135520) {
        if (X[1] < 190) {
            return 241.505371;
        } else {
            return 398.059143;
        }
    } else {
        if (X[1] < 301) {
            return -52.7873726;
        } else {
            return 720.400085;
        }
    }
}
}


////////////////// TREE 17
float tree17(float X[]) {
if (X[1] < 115) {
    if (X[3] < 19258) {
        if (X[1] < 102) {
            return 103.056351;
        } else {
            return 449.839417;
        }
    } else {
        if (X[3] < 147419) {
            return -98.188652;
        } else {
            return -392.181488;
        }
    }
} else {
    if (X[3] < 84687) {
        if (X[1] < 150) {
            return 137.613815;
        } else {
            return 291.338135;
        }
    } else {
        if (X[1] < 177) {
            return -29.8781414;
        } else {
            return 223.005615;
        }
    }
}
}


////////////////// TREE 18
float tree18(float X[]) {
if (X[0] < 1) {
    if (X[3] < 19258) {
        if (X[1] < 102) {
            return 76.2122345;
        } else {
            return 424.276764;
        }
    } else {
        if (X[1] < 115) {
            return -115.717773;
        } else {
            return 31.5423317;
        }
    }
} else {
    if (X[2] < 6) {
        if (X[3] < 52111) {
            return 384.724823;
        } else {
            return -73.4017334;
        }
    } else {
        if (X[1] < 186) {
            return 167.440353;
        } else {
            return 347.201233;
        }
    }
}
}


////////////////// TREE 19
float tree19(float X[]) {
if (X[0] < 1) {
    if (X[3] < 88664) {
        if (X[1] < 75) {
            return -202.547134;
        } else {
            return 69.159874;
        }
    } else {
        if (X[1] < 140) {
            return -159.980881;
        } else {
            return 29.2930393;
        }
    }
} else {
    if (X[3] < 74735) {
        if (X[1] < 116) {
            return -6.51921606;
        } else {
            return 248.365829;
        }
    } else {
        if (X[1] < 301) {
            return 72.3780441;
        } else {
            return 644.655029;
        }
    }
}
}


////////////////// TREE 20
float tree20(float X[]) {
if (X[1] < 150) {
    if (X[3] < 36387) {
        if (X[1] < 98) {
            return -49.1424789;
        } else {
            return 222.067169;
        }
    } else {
        if (X[3] < 121713) {
            return -16.6450653;
        } else {
            return -181.011475;
        }
    }
} else {
    if (X[3] < 160775) {
        if (X[1] < 151) {
            return 272.26767;
        } else {
            return 145.197571;
        }
    } else {
        if (X[1] < 211) {
            return -258.961212;
        } else {
            return 161.274765;
        }
    }
}
}


////////////////// TREE 21
float tree21(float X[]) {
if (X[1] < 116) {
    if (X[3] < 19258) {
        if (X[1] < 111) {
            return 190.115891;
        } else {
            return -376.259338;
        }
    } else {
        if (X[3] < 147419) {
            return -73.7798386;
        } else {
            return -309.777771;
        }
    }
} else {
    if (X[3] < 51049) {
        if (X[0] < 1) {
            return 139.690628;
        } else {
            return 255.580429;
        }
    } else {
        if (X[1] < 177) {
            return 1.38512683;
        } else {
            return 213.800568;
        }
    }
}
}


////////////////// TREE 22
float tree22(float X[]) {
if (X[0] < 1) {
    if (X[2] < 6) {
        if (X[1] < 185) {
            return -162.896835;
        } else {
            return 456.17926;
        }
    } else {
        if (X[1] < 75) {
            return -187.395996;
        } else {
            return 32.6905327;
        }
    }
} else {
    if (X[2] < 6) {
        if (X[2] < 5) {
            return 283.326874;
        } else {
            return -100.831139;
        }
    } else {
        if (X[1] < 224) {
            return 130.059875;
        } else {
            return 456.048981;
        }
    }
}
}


////////////////// TREE 23
float tree23(float X[]) {
if (X[1] < 116) {
    if (X[3] < 18898) {
        if (X[1] < 102) {
            return 69.115181;
        } else {
            return 360.191254;
        }
    } else {
        if (X[3] < 160775) {
            return -67.307785;
        } else {
            return -339.690399;
        }
    }
} else {
    if (X[3] < 51049) {
        if (X[3] < 12128) {
            return 388.919952;
        } else {
            return 158.623734;
        }
    } else {
        if (X[1] < 177) {
            return -2.94373608;
        } else {
            return 179.659164;
        }
    }
}
}


////////////////// TREE 24
float tree24(float X[]) {
if (X[2] < 6) {
    if (X[1] < 275) {
        if (X[3] < 53526) {
            return 134.270538;
        } else {
            return -146.289948;
        }
    } else {
        if (X[1] < 300) {
            return 163.122742;
        } else {
            return 462.617157;
        }
    }
} else {
    if (X[1] < 121) {
        if (X[1] < 75) {
            return -153.90686;
        } else {
            return 13.2303305;
        }
    } else {
        if (X[1] < 235) {
            return 104.811363;
        } else {
            return 434.368164;
        }
    }
}
}


////////////////// TREE 25
float tree25(float X[]) {
if (X[0] < 1) {
    if (X[3] < 47435) {
        if (X[1] < 75) {
            return -129.141769;
        } else {
            return 94.377037;
        }
    } else {
        if (X[1] < 163) {
            return -60.5038147;
        } else {
            return 222.891144;
        }
    }
} else {
    if (X[3] < 112161) {
        if (X[1] < 114) {
            return -16.6061535;
        } else {
            return 134.151276;
        }
    } else {
        if (X[1] < 220) {
            return -64.6401291;
        } else {
            return 207.654587;
        }
    }
}
}


////////////////// TREE 26
float tree26(float X[]) {
if (X[2] < 6) {
    if (X[1] < 275) {
        if (X[3] < 53526) {
            return 114.053368;
        } else {
            return -129.713531;
        }
    } else {
        if (X[1] < 300) {
            return 133.44194;
        } else {
            return 402.8862;
        }
    }
} else {
    if (X[1] < 116) {
        if (X[3] < 18898) {
            return 126.244072;
        } else {
            return -49.4582596;
        }
    } else {
        if (X[3] < 120902) {
            return 97.2498016;
        } else {
            return -48.3276329;
        }
    }
}
}


////////////////// TREE 27
float tree27(float X[]) {
if (X[1] < 150) {
    if (X[3] < 33036) {
        if (X[1] < 95) {
            return -52.7514038;
        } else {
            return 159.27475;
        }
    } else {
        if (X[1] < 145) {
            return -27.8486214;
        } else {
            return -379.966858;
        }
    }
} else {
    if (X[3] < 160775) {
        if (X[1] < 151) {
            return 204.494476;
        } else {
            return 60.4564323;
        }
    } else {
        if (X[1] < 211) {
            return -238.378128;
        } else {
            return 93.4865112;
        }
    }
}
}


////////////////// TREE 28
float tree28(float X[]) {
if (X[3] < 100504) {
    if (X[1] < 102) {
        if (X[3] < 14967) {
            return 128.258774;
        } else {
            return -58.7581749;
        }
    } else {
        if (X[3] < 27382) {
            return 155.899429;
        } else {
            return 55.7866325;
        }
    }
} else {
    if (X[1] < 186) {
        if (X[1] < 184) {
            return -69.9600143;
        } else {
            return -526.11322;
        }
    } else {
        if (X[3] < 180425) {
            return 174.709106;
        } else {
            return -150.548447;
        }
    }
}
}


////////////////// TREE 29
float tree29(float X[]) {
if (X[2] < 6) {
    if (X[1] < 275) {
        if (X[3] < 53526) {
            return 96.0213547;
        } else {
            return -112.15731;
        }
    } else {
        if (X[1] < 300) {
            return 105.244789;
        } else {
            return 349.531097;
        }
    }
} else {
    if (X[1] < 184) {
        if (X[3] < 13090) {
            return 207.78714;
        } else {
            return 15.5279875;
        }
    } else {
        if (X[1] < 235) {
            return 136.667252;
        } else {
            return 353.302002;
        }
    }
}
}


////////////////// TREE 30
float tree30(float X[]) {
if (X[0] < 1) {
    if (X[3] < 19258) {
        if (X[1] < 102) {
            return 6.61376572;
        } else {
            return 246.286911;
        }
    } else {
        if (X[1] < 150) {
            return -39.361412;
        } else {
            return 59.05373;
        }
    }
} else {
    if (X[3] < 132499) {
        if (X[1] < 114) {
            return -33.4199066;
        } else {
            return 90.0249557;
        }
    } else {
        if (X[1] < 301) {
            return -83.0079117;
        } else {
            return 359.625397;
        }
    }
}
}


////////////////// TREE 31
float tree31(float X[]) {
if (X[3] < 124431) {
    if (X[1] < 116) {
        if (X[3] < 18898) {
            return 83.8043213;
        } else {
            return -37.930584;
        }
    } else {
        if (X[2] < 6) {
            return -64.6366196;
        } else {
            return 67.0490417;
        }
    }
} else {
    if (X[1] < 218) {
        if (X[1] < 151) {
            return -65.9778214;
        } else {
            return -216.582321;
        }
    } else {
        if (X[2] < 6) {
            return 71.8470764;
        } else {
            return 328.588318;
        }
    }
}
}


////////////////// TREE 32
float tree32(float X[]) {
if (X[1] < 83) {
    if (X[3] < 65317) {
        if (X[1] < 75) {
            return -95.8542938;
        } else {
            return 81.1137085;
        }
    } else {
        if (X[3] < 138000) {
            return -150.040115;
        } else {
            return -277.279297;
        }
    }
} else {
    if (X[3] < 51049) {
        if (X[1] < 120) {
            return 33.1687317;
        } else {
            return 100.313011;
        }
    } else {
        if (X[1] < 177) {
            return -24.2699642;
        } else {
            return 109.329216;
        }
    }
}
}


////////////////// TREE 33
float tree33(float X[]) {
if (X[3] < 100504) {
    if (X[1] < 102) {
        if (X[1] < 70) {
            return -130.88385;
        } else {
            return -12.944499;
        }
    } else {
        if (X[3] < 12128) {
            return 210.359619;
        } else {
            return 45.5508118;
        }
    }
} else {
    if (X[1] < 220) {
        if (X[3] < 160775) {
            return -40.5786705;
        } else {
            return -134.928833;
        }
    } else {
        if (X[2] < 6) {
            return 52.9443855;
        } else {
            return 277.184845;
        }
    }
}
}


////////////////// TREE 34
float tree34(float X[]) {
if (X[2] < 6) {
    if (X[1] < 275) {
        if (X[3] < 53526) {
            return 79.2992554;
        } else {
            return -87.6649399;
        }
    } else {
        if (X[3] < 59108) {
            return -38.3246117;
        } else {
            return 252.719727;
        }
    }
} else {
    if (X[1] < 184) {
        if (X[3] < 13090) {
            return 153.590027;
        } else {
            return 8.23299313;
        }
    } else {
        if (X[1] < 235) {
            return 99.5451965;
        } else {
            return 261.113495;
        }
    }
}
}


////////////////// TREE 35
float tree35(float X[]) {
if (X[1] < 83) {
    if (X[3] < 65317) {
        if (X[1] < 75) {
            return -79.9660263;
        } else {
            return 73.2278366;
        }
    } else {
        if (X[2] < 6) {
            return -106.668129;
        } else {
            return -208.280472;
        }
    }
} else {
    if (X[3] < 51049) {
        if (X[1] < 160) {
            return 73.9418182;
        } else {
            return -2.52033639;
        }
    } else {
        if (X[1] < 177) {
            return -21.2688408;
        } else {
            return 89.0972748;
        }
    }
}
}


////////////////// TREE 36
float tree36(float X[]) {
if (X[3] < 123597) {
    if (X[1] < 114) {
        if (X[1] < 111) {
            return -6.52948141;
        } else {
            return -211.573395;
        }
    } else {
        if (X[2] < 6) {
            return -57.3800735;
        } else {
            return 47.9092522;
        }
    }
} else {
    if (X[1] < 218) {
        if (X[1] < 151) {
            return -41.3518295;
        } else {
            return -192.746246;
        }
    } else {
        if (X[1] < 240) {
            return 366.945801;
        } else {
            return 73.4832306;
        }
    }
}
}


////////////////// TREE 37
float tree37(float X[]) {
if (X[0] < 1) {
    if (X[3] < 19258) {
        if (X[1] < 102) {
            return -11.8612604;
        } else {
            return 181.453461;
        }
    } else {
        if (X[1] < 150) {
            return -31.8925476;
        } else {
            return 44.1077423;
        }
    }
} else {
    if (X[1] < 151) {
        if (X[1] < 150) {
            return 35.838028;
        } else {
            return 164.332245;
        }
    } else {
        if (X[1] < 177) {
            return -201.863998;
        } else {
            return 68.618988;
        }
    }
}
}


////////////////// TREE 38
float tree38(float X[]) {
if (X[3] < 85868) {
    if (X[1] < 102) {
        if (X[3] < 3370) {
            return 275.35257;
        } else {
            return -31.1713047;
        }
    } else {
        if (X[1] < 105) {
            return 217.757675;
        } else {
            return 34.9569206;
        }
    }
} else {
    if (X[1] < 301) {
        if (X[3] < 180425) {
            return -23.9579506;
        } else {
            return -140.432632;
        }
    } else {
        if (X[3] < 93750) {
            return 42.0916672;
        } else {
            return 262.231567;
        }
    }
}
}


////////////////// TREE 39
float tree39(float X[]) {
if (X[2] < 6) {
    if (X[1] < 300) {
        if (X[3] < 53526) {
            return 68.3180466;
        } else {
            return -68.5583801;
        }
    } else {
        if (X[3] < 59108) {
            return -44.789196;
        } else {
            return 284.626312;
        }
    }
} else {
    if (X[1] < 184) {
        if (X[1] < 160) {
            return 17.8423519;
        } else {
            return -54.4361267;
        }
    } else {
        if (X[1] < 192) {
            return 134.789169;
        } else {
            return 41.8965225;
        }
    }
}
}


////////////////// TREE 40
float tree40(float X[]) {
if (X[1] < 83) {
    if (X[3] < 65317) {
        if (X[1] < 75) {
            return -67.6615906;
        } else {
            return 70.651001;
        }
    } else {
        if (X[2] < 6) {
            return -80.6764221;
        } else {
            return -181.805298;
        }
    }
} else {
    if (X[3] < 43763) {
        if (X[1] < 160) {
            return 70.3571625;
        } else {
            return -41.0585442;
        }
    } else {
        if (X[1] < 177) {
            return -17.158783;
        } else {
            return 71.0037155;
        }
    }
}
}


////////////////// TREE 41
float tree41(float X[]) {
if (X[1] < 150) {
    if (X[1] < 145) {
        if (X[1] < 144) {
            return -4.09468412;
        } else {
            return 707.682617;
        }
    } else {
        if (X[3] < 47829) {
            return -562.020874;
        } else {
            return -145.848373;
        }
    }
} else {
    if (X[1] < 151) {
        if (X[3] < 163169) {
            return 141.854828;
        } else {
            return -227.599564;
        }
    } else {
        if (X[1] < 177) {
            return -124.667076;
        } else {
            return 46.1059799;
        }
    }
}
}


////////////////// TREE 42
float tree42(float X[]) {
if (X[3] < 93750) {
    if (X[1] < 116) {
        if (X[1] < 111) {
            return 1.96636868;
        } else {
            return -148.327438;
        }
    } else {
        if (X[1] < 135) {
            return 70.5502472;
        } else {
            return 14.5036793;
        }
    }
} else {
    if (X[1] < 235) {
        if (X[1] < 151) {
            return -18.1804504;
        } else {
            return -97.1773911;
        }
    } else {
        if (X[2] < 6) {
            return 9.00416088;
        } else {
            return 213.128159;
        }
    }
}
}


////////////////// TREE 43
float tree43(float X[]) {
if (X[0] < 1) {
    if (X[3] < 14140) {
        if (X[1] < 117) {
            return 51.7649727;
        } else {
            return 296.690399;
        }
    } else {
        if (X[1] < 150) {
            return -26.0859871;
        } else {
            return 36.5791855;
        }
    }
} else {
    if (X[3] < 29056) {
        if (X[1] < 114) {
            return -65.7597961;
        } else {
            return 153.286102;
        }
    } else {
        if (X[3] < 180425) {
            return 21.3689423;
        } else {
            return -144.823227;
        }
    }
}
}


////////////////// TREE 44
float tree44(float X[]) {
if (X[3] < 124431) {
    if (X[1] < 210) {
        if (X[1] < 205) {
            return 10.3955421;
        } else {
            return -597.686707;
        }
    } else {
        if (X[3] < 81820) {
            return 295.155273;
        } else {
            return 49.7565269;
        }
    }
} else {
    if (X[1] < 144) {
        if (X[1] < 131) {
            return -57.3508492;
        } else {
            return -172.468781;
        }
    } else {
        if (X[1] < 151) {
            return 178.166611;
        } else {
            return -92.0241547;
        }
    }
}
}


////////////////// TREE 45
float tree45(float X[]) {
if (X[2] < 6) {
    if (X[1] < 300) {
        if (X[1] < 151) {
            return -29.897562;
        } else {
            return -118.429192;
        }
    } else {
        if (X[3] < 59108) {
            return -71.6791687;
        } else {
            return 250.183823;
        }
    }
} else {
    if (X[1] < 75) {
        if (X[1] < 73) {
            return -63.672493;
        } else {
            return -253.709946;
        }
    } else {
        if (X[1] < 210) {
            return 12.6150303;
        } else {
            return 136.869751;
        }
    }
}
}


////////////////// TREE 46
float tree46(float X[]) {
if (X[3] < 85868) {
    if (X[1] < 150) {
        if (X[1] < 140) {
            return 20.7681828;
        } else {
            return -192.443268;
        }
    } else {
        if (X[1] < 160) {
            return 124.030479;
        } else {
            return 11.2857809;
        }
    }
} else {
    if (X[1] < 235) {
        if (X[1] < 151) {
            return -13.5370808;
        } else {
            return -72.9430847;
        }
    } else {
        if (X[1] < 241) {
            return 249.018967;
        } else {
            return 57.6490593;
        }
    }
}
}


////////////////// TREE 47
float tree47(float X[]) {
if (X[1] < 83) {
    if (X[1] < 69) {
        if (X[3] < 46099) {
            return -153.616074;
        } else {
            return -250.479492;
        }
    } else {
        if (X[3] < 63405) {
            return -12.3729486;
        } else {
            return -95.4052658;
        }
    }
} else {
    if (X[3] < 43763) {
        if (X[1] < 160) {
            return 55.0188293;
        } else {
            return -49.3992424;
        }
    } else {
        if (X[1] < 177) {
            return -15.9968405;
        } else {
            return 59.3410835;
        }
    }
}
}


////////////////// TREE 48
float tree48(float X[]) {
if (X[1] < 122) {
    if (X[3] < 147419) {
        if (X[1] < 70) {
            return -82.8851624;
        } else {
            return -2.6033659;
        }
    } else {
        if (X[3] < 228649) {
            return -118.615395;
        } else {
            return -316.973511;
        }
    }
} else {
    if (X[1] < 132) {
        if (X[3] < 204516) {
            return 110.184044;
        } else {
            return 1042.94666;
        }
    } else {
        if (X[1] < 150) {
            return -78.8153381;
        } else {
            return 24.7712669;
        }
    }
}
}


////////////////// TREE 49
float tree49(float X[]) {
if (X[0] < 1) {
    if (X[1] < 195) {
        if (X[1] < 192) {
            return -10.0131969;
        } else {
            return -347.24234;
        }
    } else {
        if (X[3] < 81820) {
            return 336.382782;
        } else {
            return 63.4438171;
        }
    }
} else {
    if (X[1] < 160) {
        if (X[3] < 104762) {
            return 62.3788719;
        } else {
            return -40.4858437;
        }
    } else {
        if (X[1] < 177) {
            return -211.921173;
        } else {
            return 38.9762383;
        }
    }
}
}


////////////////// TREE 50
float tree50(float X[]) {
if (X[3] < 13090) {
    if (X[1] < 165) {
        if (X[1] < 117) {
            return 52.3622856;
        } else {
            return 159.492355;
        }
    } else {
        if (X[0] < 1) {
            return 148.332626;
        } else {
            return -380.517059;
        }
    }
} else {
    if (X[1] < 70) {
        if (X[3] < 26494) {
            return -220.455032;
        } else {
            return -31.1016026;
        }
    } else {
        if (X[1] < 71) {
            return 350.804169;
        } else {
            return 1.25908303;
        }
    }
}
}


////////////////// TREE 51
float tree51(float X[]) {
if (X[2] < 6) {
    if (X[1] < 151) {
        if (X[1] < 144) {
            return -52.2329674;
        } else {
            return 216.684525;
        }
    } else {
        if (X[3] < 81820) {
            return 139.492798;
        } else {
            return -187.455704;
        }
    }
} else {
    if (X[1] < 114) {
        if (X[1] < 111) {
            return -4.53708696;
        } else {
            return -193.054092;
        }
    } else {
        if (X[3] < 133380) {
            return 23.9228115;
        } else {
            return -44.4565468;
        }
    }
}
}


////////////////// TREE 52
float tree52(float X[]) {
if (X[1] < 210) {
    if (X[1] < 205) {
        if (X[3] < 123597) {
            return 6.45359421;
        } else {
            return -37.8161507;
        }
    } else {
        if (X[0] < 1) {
            return -13.995574;
        } else {
            return -845.212585;
        }
    }
} else {
    if (X[3] < 81820) {
        if (X[1] < 326) {
            return 273.556122;
        } else {
            return -90.1070328;
        }
    } else {
        if (X[1] < 301) {
            return -1.7174772;
        } else {
            return 162.045425;
        }
    }
}
}


////////////////// TREE 53
float tree53(float X[]) {
if (X[3] < 180425) {
    if (X[1] < 210) {
        if (X[1] < 205) {
            return 2.10675216;
        } else {
            return -577.184326;
        }
    } else {
        if (X[3] < 155771) {
            return 71.9047241;
        } else {
            return 350.850006;
        }
    }
} else {
    if (X[2] < 5) {
        if (X[1] < 125) {
            return 730.282898;
        } else {
            return -540.518982;
        }
    } else {
        if (X[1] < 129) {
            return -220.457809;
        } else {
            return -50.6209679;
        }
    }
}
}


////////////////// TREE 54
float tree54(float X[]) {
if (X[3] < 13090) {
    if (X[1] < 165) {
        if (X[1] < 117) {
            return 47.1829605;
        } else {
            return 140.599655;
        }
    } else {
        if (X[0] < 1) {
            return 139.291901;
        } else {
            return -352.674225;
        }
    }
} else {
    if (X[0] < 1) {
        if (X[1] < 163) {
            return -16.8320007;
        } else {
            return 62.8014221;
        }
    } else {
        if (X[1] < 151) {
            return 38.9477196;
        } else {
            return -11.6178064;
        }
    }
}
}


////////////////// TREE 55
float tree55(float X[]) {
if (X[1] < 83) {
    if (X[1] < 69) {
        if (X[3] < 46099) {
            return -116.74025;
        } else {
            return -208.955841;
        }
    } else {
        if (X[3] < 65317) {
            return -5.77877522;
        } else {
            return -75.2013321;
        }
    }
} else {
    if (X[2] < 6) {
        if (X[2] < 5) {
            return 63.9228821;
        } else {
            return -43.2790642;
        }
    } else {
        if (X[1] < 184) {
            return 5.26364994;
        } else {
            return 54.1216202;
        }
    }
}
}


////////////////// TREE 56
float tree56(float X[]) {
if (X[3] < 13090) {
    if (X[1] < 165) {
        if (X[1] < 85) {
            return -16.6095142;
        } else {
            return 97.6725006;
        }
    } else {
        if (X[0] < 1) {
            return 132.064163;
        } else {
            return -326.835632;
        }
    }
} else {
    if (X[1] < 150) {
        if (X[1] < 145) {
            return -4.20229292;
        } else {
            return -327.254639;
        }
    } else {
        if (X[1] < 151) {
            return 85.6308289;
        } else {
            return -13.7320118;
        }
    }
}
}


////////////////// TREE 57
float tree57(float X[]) {
if (X[1] < 258) {
    if (X[3] < 180425) {
        if (X[1] < 75) {
            return -50.1008148;
        } else {
            return 4.25508976;
        }
    } else {
        if (X[2] < 5) {
            return 260.016449;
        } else {
            return -121.163879;
        }
    }
} else {
    if (X[3] < 132499) {
        if (X[1] < 326) {
            return 217.825241;
        } else {
            return -40.1935272;
        }
    } else {
        if (X[1] < 301) {
            return -66.67099;
        } else {
            return 133.901443;
        }
    }
}
}


////////////////// TREE 58
float tree58(float X[]) {
if (X[3] < 84687) {
    if (X[1] < 184) {
        if (X[1] < 165) {
            return 10.8917704;
        } else {
            return -78.9565201;
        }
    } else {
        if (X[1] < 192) {
            return 156.634232;
        } else {
            return -18.8918819;
        }
    }
} else {
    if (X[1] < 301) {
        if (X[1] < 151) {
            return -5.58965683;
        } else {
            return -51.3324471;
        }
    } else {
        if (X[3] < 95057) {
            return -17.4957027;
        } else {
            return 141.507431;
        }
    }
}
}


////////////////// TREE 59
float tree59(float X[]) {
if (X[1] < 122) {
    if (X[3] < 147419) {
        if (X[1] < 117) {
            return 0.708668232;
        } else {
            return -43.837513;
        }
    } else {
        if (X[1] < 117) {
            return -78.802269;
        } else {
            return -261.684235;
        }
    }
} else {
    if (X[1] < 132) {
        if (X[3] < 204516) {
            return 92.4033279;
        } else {
            return 895.066406;
        }
    } else {
        if (X[1] < 150) {
            return -72.1227264;
        } else {
            return 16.5947685;
        }
    }
}
}


////////////////// TREE 60
float tree60(float X[]) {
if (X[1] < 210) {
    if (X[1] < 205) {
        if (X[1] < 69) {
            return -133.331802;
        } else {
            return 0.929789722;
        }
    } else {
        if (X[0] < 1) {
            return 18.4065113;
        } else {
            return -724.804626;
        }
    }
} else {
    if (X[3] < 81820) {
        if (X[1] < 326) {
            return 233.207321;
        } else {
            return -82.8429718;
        }
    } else {
        if (X[3] < 88055) {
            return -154.788208;
        } else {
            return 38.3064079;
        }
    }
}
}


////////////////// TREE 61
float tree61(float X[]) {
if (X[1] < 102) {
    if (X[1] < 101) {
        if (X[3] < 3370) {
            return 210.403305;
        } else {
            return -12.5196161;
        }
    } else {
        if (X[3] < 83568) {
            return -79.3035355;
        } else {
            return -379.971558;
        }
    }
} else {
    if (X[1] < 105) {
        if (X[3] < 23600) {
            return 607.253479;
        } else {
            return 8.73578167;
        }
    } else {
        if (X[1] < 114) {
            return -45.3367958;
        } else {
            return 7.38816404;
        }
    }
}
}


////////////////// TREE 62
float tree62(float X[]) {
if (X[2] < 6) {
    if (X[3] < 43763) {
        if (X[1] < 85) {
            return -34.7181053;
        } else {
            return -309.381714;
        }
    } else {
        if (X[3] < 53526) {
            return 142.473434;
        } else {
            return -31.9694767;
        }
    }
} else {
    if (X[1] < 114) {
        if (X[1] < 111) {
            return -2.28348494;
        } else {
            return -173.109299;
        }
    } else {
        if (X[1] < 135) {
            return 33.4213333;
        } else {
            return -0.6701805;
        }
    }
}
}


////////////////// TREE 63
float tree63(float X[]) {
if (X[0] < 1) {
    if (X[1] < 195) {
        if (X[1] < 192) {
            return -7.45087147;
        } else {
            return -328.996582;
        }
    } else {
        if (X[3] < 81820) {
            return 271.287903;
        } else {
            return 40.1349602;
        }
    }
} else {
    if (X[1] < 140) {
        if (X[1] < 122) {
            return -9.66212368;
        } else {
            return 105.243408;
        }
    } else {
        if (X[1] < 150) {
            return -197.652084;
        } else {
            return 12.0519323;
        }
    }
}
}


////////////////// TREE 64
float tree64(float X[]) {
if (X[3] < 180425) {
    if (X[1] < 177) {
        if (X[1] < 165) {
            return 2.6370821;
        } else {
            return -189.365158;
        }
    } else {
        if (X[3] < 48185) {
            return -50.3734055;
        } else {
            return 64.1034927;
        }
    }
} else {
    if (X[3] < 184913) {
        if (X[1] < 70) {
            return 47.0586929;
        } else {
            return -243.377518;
        }
    } else {
        if (X[1] < 117) {
            return -140.419708;
        } else {
            return 30.4583492;
        }
    }
}
}


////////////////// TREE 65
float tree65(float X[]) {
if (X[3] < 51049) {
    if (X[1] < 165) {
        if (X[1] < 163) {
            return 19.0433617;
        } else {
            return 625.617554;
        }
    } else {
        if (X[1] < 171) {
            return -344.930756;
        } else {
            return -9.1198616;
        }
    }
} else {
    if (X[1] < 177) {
        if (X[1] < 174) {
            return -11.9446764;
        } else {
            return -416.029877;
        }
    } else {
        if (X[1] < 181) {
            return 162.447708;
        } else {
            return -8.85122871;
        }
    }
}
}


////////////////// TREE 66
float tree66(float X[]) {
if (X[1] < 75) {
    if (X[3] < 24558) {
        if (X[3] < 16430) {
            return 14.08356;
        } else {
            return -196.95108;
        }
    } else {
        if (X[1] < 73) {
            return -10.5468588;
        } else {
            return -199.214157;
        }
    }
} else {
    if (X[3] < 28267) {
        if (X[1] < 160) {
            return 54.3015938;
        } else {
            return -73.3674316;
        }
    } else {
        if (X[1] < 150) {
            return -12.9607668;
        } else {
            return 17.5124989;
        }
    }
}
}


////////////////// TREE 67
float tree67(float X[]) {
if (X[1] < 69) {
    if (X[3] < 46099) {
        if (X[3] < 37050) {
            return -141.429062;
        } else {
            return 47.4829521;
        }
    } else {
        if (X[3] < 72922) {
            return -257.66571;
        } else {
            return -115.068581;
        }
    }
} else {
    if (X[1] < 160) {
        if (X[1] < 150) {
            return -4.19083452;
        } else {
            return 67.8061905;
        }
    } else {
        if (X[1] < 163) {
            return -239.562363;
        } else {
            return 8.75650311;
        }
    }
}
}


////////////////// TREE 68
float tree68(float X[]) {
if (X[3] < 84687) {
    if (X[1] < 184) {
        if (X[1] < 165) {
            return 8.470994;
        } else {
            return -69.9485168;
        }
    } else {
        if (X[1] < 192) {
            return 136.07341;
        } else {
            return -22.053627;
        }
    }
} else {
    if (X[1] < 151) {
        if (X[1] < 144) {
            return -16.172636;
        } else {
            return 69.5130157;
        }
    } else {
        if (X[1] < 170) {
            return -314.457733;
        } else {
            return -8.70202732;
        }
    }
}
}


////////////////// TREE 69
float tree69(float X[]) {
if (X[1] < 210) {
    if (X[1] < 205) {
        if (X[1] < 192) {
            return 1.23983061;
        } else {
            return -76.2234192;
        }
    } else {
        if (X[0] < 1) {
            return -5.3187499;
        } else {
            return -664.104797;
        }
    }
} else {
    if (X[3] < 81820) {
        if (X[1] < 326) {
            return 205.196167;
        } else {
            return -80.9324265;
        }
    } else {
        if (X[3] < 88055) {
            return -148.252609;
        } else {
            return 27.8354034;
        }
    }
}
}


////////////////// TREE 70
float tree70(float X[]) {
if (X[1] < 69) {
    if (X[3] < 46099) {
        if (X[3] < 37050) {
            return -129.135406;
        } else {
            return 42.5805817;
        }
    } else {
        if (X[3] < 72922) {
            return -241.135361;
        } else {
            return -103.512917;
        }
    }
} else {
    if (X[3] < 180425) {
        if (X[3] < 170800) {
            return 1.09284627;
        } else {
            return 131.865829;
        }
    } else {
        if (X[2] < 5) {
            return 210.058304;
        } else {
            return -80.1691971;
        }
    }
}
}


////////////////// TREE 71
float tree71(float X[]) {
if (X[3] < 6871) {
    if (X[3] < 5865) {
        if (X[1] < 84) {
            return 154.163345;
        } else {
            return 6.30243015;
        }
    } else {
        if (X[0] < 1) {
            return 493.107819;
        } else {
            return 27.0143776;
        }
    }
} else {
    if (X[1] < 75) {
        if (X[3] < 24558) {
            return -113.752617;
        } else {
            return -14.8707657;
        }
    } else {
        if (X[3] < 43763) {
            return 15.7636976;
        } else {
            return -4.31932211;
        }
    }
}
}


////////////////// TREE 72
float tree72(float X[]) {
if (X[1] < 258) {
    if (X[1] < 160) {
        if (X[1] < 150) {
            return -4.95119476;
        } else {
            return 57.7893944;
        }
    } else {
        if (X[1] < 163) {
            return -209.05278;
        } else {
            return 4.28527689;
        }
    }
} else {
    if (X[3] < 132499) {
        if (X[1] < 326) {
            return 170.176346;
        } else {
            return -44.9012871;
        }
    } else {
        if (X[1] < 259) {
            return 339.443054;
        } else {
            return -25.5539341;
        }
    }
}
}


////////////////// TREE 73
float tree73(float X[]) {
if (X[3] < 85868) {
    if (X[1] < 184) {
        if (X[1] < 165) {
            return 8.19498158;
        } else {
            return -68.6289368;
        }
    } else {
        if (X[1] < 192) {
            return 117.791504;
        } else {
            return -19.4380474;
        }
    }
} else {
    if (X[1] < 117) {
        if (X[1] < 113) {
            return -16.6119766;
        } else {
            return 70.2198105;
        }
    } else {
        if (X[1] < 121) {
            return -167.004227;
        } else {
            return -8.59976101;
        }
    }
}
}


////////////////// TREE 74
float tree74(float X[]) {
if (X[1] < 210) {
    if (X[1] < 205) {
        if (X[1] < 192) {
            return 1.05999506;
        } else {
            return -68.0647354;
        }
    } else {
        if (X[0] < 1) {
            return -3.73906255;
        } else {
            return -605.412842;
        }
    }
} else {
    if (X[3] < 81820) {
        if (X[1] < 326) {
            return 182.931671;
        } else {
            return -69.7952194;
        }
    } else {
        if (X[1] < 235) {
            return -58.4112549;
        } else {
            return 39.8782654;
        }
    }
}
}


////////////////// TREE 75
float tree75(float X[]) {
if (X[1] < 102) {
    if (X[1] < 101) {
        if (X[1] < 100) {
            return -8.40025425;
        } else {
            return 136.908554;
        }
    } else {
        if (X[3] < 83568) {
            return -74.9171371;
        } else {
            return -339.531647;
        }
    }
} else {
    if (X[1] < 105) {
        if (X[3] < 23600) {
            return 540.219849;
        } else {
            return 10.2597542;
        }
    } else {
        if (X[1] < 109) {
            return -160.727661;
        } else {
            return 1.72999537;
        }
    }
}
}


////////////////// TREE 76
float tree76(float X[]) {
if (X[1] < 132) {
    if (X[1] < 129) {
        if (X[1] < 117) {
            return -0.0926888213;
        } else {
            return -32.1690788;
        }
    } else {
        if (X[1] < 131) {
            return 284.055756;
        } else {
            return 72.9452133;
        }
    }
} else {
    if (X[1] < 150) {
        if (X[1] < 145) {
            return -35.8705254;
        } else {
            return -294.250641;
        }
    } else {
        if (X[1] < 151) {
            return 56.7433968;
        } else {
            return -11.2345762;
        }
    }
}
}


////////////////// TREE 77
float tree77(float X[]) {
if (X[1] < 69) {
    if (X[3] < 46099) {
        if (X[3] < 37050) {
            return -112.666893;
        } else {
            return 40.564537;
        }
    } else {
        if (X[3] < 72922) {
            return -223.78894;
        } else {
            return -90.4124756;
        }
    }
} else {
    if (X[3] < 150030) {
        if (X[1] < 132) {
            return 9.43666935;
        } else {
            return -6.49700546;
        }
    } else {
        if (X[1] < 211) {
            return -43.3833084;
        } else {
            return 87.0162354;
        }
    }
}
}


////////////////// TREE 78
float tree78(float X[]) {
if (X[1] < 177) {
    if (X[1] < 165) {
        if (X[1] < 163) {
            return -2.35870862;
        } else {
            return 323.682281;
        }
    } else {
        if (X[3] < 103348) {
            return -259.392792;
        } else {
            return 62.5810852;
        }
    }
} else {
    if (X[1] < 180) {
        if (X[3] < 69399) {
            return 287.136536;
        } else {
            return 61.8540764;
        }
    } else {
        if (X[2] < 6) {
            return -94.9458847;
        } else {
            return 18.863802;
        }
    }
}
}


////////////////// TREE 79
float tree79(float X[]) {
if (X[0] < 1) {
    if (X[1] < 163) {
        if (X[1] < 161) {
            return -5.76264048;
        } else {
            return -463.103485;
        }
    } else {
        if (X[1] < 165) {
            return 659.851807;
        } else {
            return -41.8874702;
        }
    }
} else {
    if (X[1] < 140) {
        if (X[1] < 122) {
            return -8.3631649;
        } else {
            return 91.2393417;
        }
    } else {
        if (X[1] < 150) {
            return -169.363632;
        } else {
            return 6.78812265;
        }
    }
}
}


////////////////// TREE 80
float tree80(float X[]) {
if (X[1] < 258) {
    if (X[3] < 180425) {
        if (X[3] < 170800) {
            return -0.56173259;
        } else {
            return 115.910194;
        }
    } else {
        if (X[1] < 145) {
            return 22.1926308;
        } else {
            return -155.749435;
        }
    }
} else {
    if (X[3] < 132499) {
        if (X[1] < 326) {
            return 149.730927;
        } else {
            return -34.5185814;
        }
    } else {
        if (X[1] < 259) {
            return 315.437836;
        } else {
            return -24.7834854;
        }
    }
}
}


////////////////// TREE 81
float tree81(float X[]) {
if (X[1] < 210) {
    if (X[1] < 205) {
        if (X[1] < 192) {
            return 0.84129858;
        } else {
            return -59.9653931;
        }
    } else {
        if (X[0] < 1) {
            return -0.850781262;
        } else {
            return -548.983337;
        }
    }
} else {
    if (X[3] < 81820) {
        if (X[1] < 326) {
            return 164.708755;
        } else {
            return -57.0050774;
        }
    } else {
        if (X[3] < 151250) {
            return -22.7619953;
        } else {
            return 76.2792969;
        }
    }
}
}


////////////////// TREE 82
float tree82(float X[]) {
if (X[1] < 190) {
    if (X[1] < 160) {
        if (X[1] < 150) {
            return -4.33427954;
        } else {
            return 47.7478142;
        }
    } else {
        if (X[1] < 163) {
            return -178.395447;
        } else {
            return -3.79318047;
        }
    }
} else {
    if (X[1] < 192) {
        if (X[3] < 59388) {
            return 221.851425;
        } else {
            return 46.926651;
        }
    } else {
        if (X[1] < 208) {
            return -93.9226837;
        } else {
            return 35.6339111;
        }
    }
}
}


////////////////// TREE 83
float tree83(float X[]) {
if (X[1] < 132) {
    if (X[1] < 129) {
        if (X[1] < 117) {
            return 0.483122557;
        } else {
            return -28.9020672;
        }
    } else {
        if (X[1] < 131) {
            return 252.786407;
        } else {
            return 61.2497444;
        }
    }
} else {
    if (X[1] < 150) {
        if (X[3] < 176320) {
            return -67.0499344;
        } else {
            return 382.314667;
        }
    } else {
        if (X[1] < 151) {
            return 47.5998726;
        } else {
            return -9.59797573;
        }
    }
}
}


////////////////// TREE 84
float tree84(float X[]) {
if (X[3] < 150030) {
    if (X[1] < 75) {
        if (X[1] < 73) {
            return -21.6940517;
        } else {
            return -196.527679;
        }
    } else {
        if (X[1] < 132) {
            return 11.0869637;
        } else {
            return -5.59464455;
        }
    }
} else {
    if (X[3] < 151250) {
        if (X[1] < 131) {
            return -56.3849449;
        } else {
            return -271.627808;
        }
    } else {
        if (X[1] < 121) {
            return -76.0409546;
        } else {
            return 13.6949816;
        }
    }
}
}


////////////////// TREE 85
float tree85(float X[]) {
if (X[1] < 177) {
    if (X[1] < 174) {
        if (X[1] < 171) {
            return -1.58210456;
        } else {
            return 783.363281;
        }
    } else {
        if (X[3] < 18143) {
            return 494.025635;
        } else {
            return -367.777618;
        }
    }
} else {
    if (X[1] < 180) {
        if (X[3] < 69399) {
            return 260.474731;
        } else {
            return 56.9782104;
        }
    } else {
        if (X[2] < 6) {
            return -86.8780212;
        } else {
            return 17.9870911;
        }
    }
}
}


////////////////// TREE 86
float tree86(float X[]) {
if (X[1] < 190) {
    if (X[1] < 181) {
        if (X[1] < 177) {
            return -2.69386888;
        } else {
            return 37.07827;
        }
    } else {
        if (X[3] < 66225) {
            return 117.87484;
        } else {
            return -362.636902;
        }
    }
} else {
    if (X[1] < 192) {
        if (X[3] < 158010) {
            return 58.5629654;
        } else {
            return 366.874908;
        }
    } else {
        if (X[1] < 208) {
            return -83.6545715;
        } else {
            return 35.4977417;
        }
    }
}
}


////////////////// TREE 87
float tree87(float X[]) {
if (X[3] < 6871) {
    if (X[3] < 5865) {
        if (X[1] < 84) {
            return 143.054733;
        } else {
            return -6.95163727;
        }
    } else {
        if (X[0] < 1) {
            return 457.757172;
        } else {
            return 18.6549892;
        }
    }
} else {
    if (X[1] < 70) {
        if (X[3] < 24558) {
            return -152.804291;
        } else {
            return -3.8315742;
        }
    } else {
        if (X[1] < 71) {
            return 329.93869;
        } else {
            return -0.519652903;
        }
    }
}
}


////////////////// TREE 88
float tree88(float X[]) {
if (X[1] < 301) {
    if (X[3] < 180425) {
        if (X[3] < 170800) {
            return -0.379991114;
        } else {
            return 111.850174;
        }
    } else {
        if (X[1] < 145) {
            return 19.2083626;
        } else {
            return -125.704979;
        }
    }
} else {
    if (X[3] < 70954) {
        if (X[3] < 55480) {
            return -80.649025;
        } else {
            return -16.8899746;
        }
    } else {
        if (X[2] < 6) {
            return 172.688934;
        } else {
            return 53.1957474;
        }
    }
}
}


////////////////// TREE 89
float tree89(float X[]) {
if (X[1] < 69) {
    if (X[3] < 46099) {
        if (X[3] < 37050) {
            return -94.2703781;
        } else {
            return 40.6768723;
        }
    } else {
        if (X[3] < 72922) {
            return -206.078003;
        } else {
            return -78.0497665;
        }
    }
} else {
    if (X[1] < 132) {
        if (X[1] < 129) {
            return -3.64537168;
        } else {
            return 86.065361;
        }
    } else {
        if (X[1] < 150) {
            return -48.8073235;
        } else {
            return 7.41883183;
        }
    }
}
}


////////////////// TREE 90
float tree90(float X[]) {
if (X[1] < 190) {
    if (X[1] < 161) {
        if (X[1] < 150) {
            return -3.07544994;
        } else {
            return 34.9743195;
        }
    } else {
        if (X[1] < 163) {
            return -303.962494;
        } else {
            return -4.08231115;
        }
    }
} else {
    if (X[1] < 192) {
        if (X[3] < 59388) {
            return 194.489548;
        } else {
            return 34.3467255;
        }
    } else {
        if (X[1] < 208) {
            return -75.9968872;
        } else {
            return 31.1760807;
        }
    }
}
}


////////////////// TREE 91
float tree91(float X[]) {
if (X[3] < 150030) {
    if (X[3] < 148655) {
        if (X[1] < 259) {
            return 0.587694407;
        } else {
            return 65.4117584;
        }
    } else {
        if (X[1] < 230) {
            return 159.435226;
        } else {
            return -307.991028;
        }
    }
} else {
    if (X[3] < 151250) {
        if (X[1] < 105) {
            return 15.3671589;
        } else {
            return -218.713791;
        }
    } else {
        if (X[1] < 121) {
            return -69.7117996;
        } else {
            return 14.5168505;
        }
    }
}
}


////////////////// TREE 92
float tree92(float X[]) {
if (X[1] < 132) {
    if (X[1] < 129) {
        if (X[1] < 117) {
            return 1.53326821;
        } else {
            return -25.7373695;
        }
    } else {
        if (X[1] < 131) {
            return 219.710159;
        } else {
            return 46.3343124;
        }
    }
} else {
    if (X[1] < 150) {
        if (X[1] < 145) {
            return -19.3508148;
        } else {
            return -248.492554;
        }
    } else {
        if (X[3] < 23600) {
            return -74.3269653;
        } else {
            return 14.001277;
        }
    }
}
}


////////////////// TREE 93
float tree93(float X[]) {
if (X[3] < 85868) {
    if (X[3] < 80183) {
        if (X[3] < 78428) {
            return 3.31131721;
        } else {
            return -115.999977;
        }
    } else {
        if (X[1] < 126) {
            return -40.1126366;
        } else {
            return 146.72699;
        }
    }
} else {
    if (X[1] < 117) {
        if (X[1] < 115) {
            return -9.54227734;
        } else {
            return 66.8852615;
        }
    } else {
        if (X[1] < 121) {
            return -139.068161;
        } else {
            return -8.66176224;
        }
    }
}
}


////////////////// TREE 94
float tree94(float X[]) {
if (X[3] < 13090) {
    if (X[1] < 165) {
        if (X[1] < 132) {
            return 13.9601431;
        } else {
            return 122.812454;
        }
    } else {
        if (X[0] < 1) {
            return 137.690048;
        } else {
            return -230.901718;
        }
    }
} else {
    if (X[3] < 17711) {
        if (X[1] < 117) {
            return -0.43938756;
        } else {
            return -100.674568;
        }
    } else {
        if (X[3] < 18898) {
            return 111.056961;
        } else {
            return -1.11209929;
        }
    }
}
}


////////////////// TREE 95
float tree95(float X[]) {
if (X[1] < 102) {
    if (X[1] < 101) {
        if (X[3] < 3370) {
            return 175.211441;
        } else {
            return -4.27603292;
        }
    } else {
        if (X[3] < 83568) {
            return -67.8781357;
        } else {
            return -307.615936;
        }
    }
} else {
    if (X[1] < 105) {
        if (X[3] < 23600) {
            return 485.731598;
        } else {
            return 10.3875875;
        }
    } else {
        if (X[1] < 109) {
            return -143.639938;
        } else {
            return 0.836579502;
        }
    }
}
}


////////////////// TREE 96
float tree96(float X[]) {
if (X[3] < 204516) {
    if (X[1] < 69) {
        if (X[3] < 46099) {
            return -48.4375992;
        } else {
            return -108.789268;
        }
    } else {
        if (X[1] < 151) {
            return 3.94367576;
        } else {
            return -9.27199745;
        }
    }
} else {
    if (X[2] < 5) {
        if (X[1] < 125) {
            return 597.688721;
        } else {
            return -547.923645;
        }
    } else {
        if (X[1] < 185) {
            return -195.906586;
        } else {
            return -10.0948048;
        }
    }
}
}


////////////////// TREE 97
float tree97(float X[]) {
if (X[2] < 6) {
    if (X[1] < 151) {
        if (X[1] < 144) {
            return -18.8460751;
        } else {
            return 166.97963;
        }
    } else {
        if (X[3] < 66569) {
            return 129.141174;
        } else {
            return -131.549652;
        }
    }
} else {
    if (X[1] < 114) {
        if (X[1] < 111) {
            return 0.0370761119;
        } else {
            return -159.577927;
        }
    } else {
        if (X[1] < 135) {
            return 22.7252769;
        } else {
            return -1.66812992;
        }
    }
}
}


////////////////// TREE 98
float tree98(float X[]) {
if (X[1] < 190) {
    if (X[1] < 181) {
        if (X[1] < 177) {
            return -2.41079879;
        } else {
            return 33.0683708;
        }
    } else {
        if (X[3] < 66225) {
            return 106.888123;
        } else {
            return -321.485138;
        }
    }
} else {
    if (X[3] < 23292) {
        if (X[1] < 204) {
            return -200.401901;
        } else {
            return 246.570999;
        }
    } else {
        if (X[3] < 25557) {
            return 391.210022;
        } else {
            return 22.5618801;
        }
    }
}
}


////////////////// TREE 99
float tree99(float X[]) {
if (X[1] < 132) {
    if (X[1] < 129) {
        if (X[2] < 5) {
            return 67.2528915;
        } else {
            return -4.22500849;
        }
    } else {
        if (X[3] < 55480) {
            return 125.454178;
        } else {
            return -0.75947547;
        }
    }
} else {
    if (X[1] < 150) {
        if (X[3] < 176320) {
            return -50.4777794;
        } else {
            return 346.403595;
        }
    } else {
        if (X[3] < 23600) {
            return -66.9801254;
        } else {
            return 12.834815;
        }
    }
}
}



////////////////// XGBOOST MODEL //////////////////
///////////////////////////////////////////////////
float XGBpred(float X[]){
float out = 0;
out+= tree0(X);
out+= tree1(X);
out+= tree2(X);
out+= tree3(X);
out+= tree4(X);
out+= tree5(X);
out+= tree6(X);
out+= tree7(X);
out+= tree8(X);
out+= tree9(X);
out+= tree10(X);
out+= tree11(X);
out+= tree12(X);
out+= tree13(X);
out+= tree14(X);
out+= tree15(X);
out+= tree16(X);
out+= tree17(X);
out+= tree18(X);
out+= tree19(X);
out+= tree20(X);
out+= tree21(X);
out+= tree22(X);
out+= tree23(X);
out+= tree24(X);
out+= tree25(X);
out+= tree26(X);
out+= tree27(X);
out+= tree28(X);
out+= tree29(X);
out+= tree30(X);
out+= tree31(X);
out+= tree32(X);
out+= tree33(X);
out+= tree34(X);
out+= tree35(X);
out+= tree36(X);
out+= tree37(X);
out+= tree38(X);
out+= tree39(X);
out+= tree40(X);
out+= tree41(X);
out+= tree42(X);
out+= tree43(X);
out+= tree44(X);
out+= tree45(X);
out+= tree46(X);
out+= tree47(X);
out+= tree48(X);
out+= tree49(X);
out+= tree50(X);
out+= tree51(X);
out+= tree52(X);
out+= tree53(X);
out+= tree54(X);
out+= tree55(X);
out+= tree56(X);
out+= tree57(X);
out+= tree58(X);
out+= tree59(X);
out+= tree60(X);
out+= tree61(X);
out+= tree62(X);
out+= tree63(X);
out+= tree64(X);
out+= tree65(X);
out+= tree66(X);
out+= tree67(X);
out+= tree68(X);
out+= tree69(X);
out+= tree70(X);
out+= tree71(X);
out+= tree72(X);
out+= tree73(X);
out+= tree74(X);
out+= tree75(X);
out+= tree76(X);
out+= tree77(X);
out+= tree78(X);
out+= tree79(X);
out+= tree80(X);
out+= tree81(X);
out+= tree82(X);
out+= tree83(X);
out+= tree84(X);
out+= tree85(X);
out+= tree86(X);
out+= tree87(X);
out+= tree88(X);
out+= tree89(X);
out+= tree90(X);
out+= tree91(X);
out+= tree92(X);
out+= tree93(X);
out+= tree94(X);
out+= tree95(X);
out+= tree96(X);
out+= tree97(X);
out+= tree98(X);
out+= tree99(X);

out = out+base_score;
return out;}



void setup() {
Serial.begin(115200);
}

void loop() {
unsigned long timestart;
unsigned long timeend;
float Xi[dimX];
float yc;


Serial.println("Cal_Ardui,Expected,Delta_time(us)");
for (int l=0;l<Nv;l++){
for(int j = 0; j<dimX;j++){
Xi[j]=pgm_read_float_near(&X[l*dimX+j]);
}
timestart=micros();
yc=XGBpred(Xi);
timeend=micros();
Serial.print(yc);
Serial.print(",");
Serial.print(pgm_read_float_near(&y[l]),6);
Serial.print(",");
Serial.println(timeend-timestart);
}
Serial.println("====The End=====");
while(1);
}
