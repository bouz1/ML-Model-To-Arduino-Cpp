
    const int Nv = 10;
const int dimX = 4;

/////// Xy ////// 
const float X [] PROGMEM  = {0.0, 116.0, 6.0, 86802.0, 0.0, 120.0, 6.0, 30707.0, 0.0, 95.0, 6.0, 51915.0, 0.0, 110.0, 6.0, 44972.0, 0.0, 125.0, 6.0, 85500.0, 1.0, 176.0, 6.0, 98918.0, 1.0, 190.0, 6.0, 69119.0, 1.0, 131.0, 6.0, 38157.0, 1.0, 150.0, 6.0, 112374.0, 1.0, 150.0, 6.0, 93524.0};

const float y[] PROGMEM  = {20222.404296875, 24689.107421875, 16387.3046875, 19894.634765625, 20383.296875, 25561.638671875, 34748.60546875, 29990.771484375, 26085.880859375, 28298.818359375} ;


    float base_score =  22734.895 ;
float learning_rate = 1 ;

////////////////// TREE_1
float tree0 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [1] <91) goto node3 ; else goto node4 ; 
node3: if (X [2] <6) goto node7 ; else goto node8 ; 
node7: return -1327.776 ;
node8: return -847.925293 ;
node4: if (X [3] <47435) goto node9 ; else goto node10 ; 
node9: return 16.9516125 ;
node10: return -447.89151 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [3] <84687) goto node11 ; else goto node12 ; 
node11: return 522.810547 ;
node12: return -83.0994797 ;
node6: if (X [3] <136640) goto node13 ; else goto node14 ; 
node13: return 976.259216 ;
node14: return 381.593597 ;
}
////////////////// TREE_2
float tree1 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [1] <91) goto node3 ; else goto node4 ; 
node3: if (X [3] <94579) goto node7 ; else goto node8 ; 
node7: return -749.606384 ;
node8: return -1166.15125 ;
node4: if (X [3] <88055) goto node9 ; else goto node10 ; 
node9: return -119.785545 ;
node10: return -563.037476 ;
node2: if (X [0] <1) goto node5 ; else goto node6 ; 
node5: if (X [3] <85868) goto node11 ; else goto node12 ; 
node11: return 299.289886 ;
node12: return -221.144485 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return 473.187408 ;
node14: return 852.569763 ;
}
////////////////// TREE_3
float tree2 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [1] <91) goto node3 ; else goto node4 ; 
node3: if (X [3] <68208) goto node7 ; else goto node8 ; 
node7: return -644.163696 ;
node8: return -983.550232 ;
node4: if (X [3] <43335) goto node9 ; else goto node10 ; 
node9: return 47.0564041 ;
node10: return -362.220795 ;
node2: if (X [0] <1) goto node5 ; else goto node6 ; 
node5: if (X [3] <49168) goto node11 ; else goto node12 ; 
node11: return 417.703857 ;
node12: return -80.3207397 ;
node6: if (X [3] <73310) goto node13 ; else goto node14 ; 
node13: return 748.98822 ;
node14: return 369.277069 ;
}
////////////////// TREE_4
float tree3 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <115) goto node3 ; else goto node4 ; 
node3: if (X [2] <6) goto node7 ; else goto node8 ; 
node7: return -945.427917 ;
node8: return -417.599457 ;
node4: if (X [3] <50416) goto node9 ; else goto node10 ; 
node9: return 316.597656 ;
node10: return -174.414963 ;
node2: if (X [3] <111300) goto node5 ; else goto node6 ; 
node5: if (X [1] <177) goto node11 ; else goto node12 ; 
node11: return 512.067932 ;
node12: return 774.911316 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -143.642242 ;
node14: return 403.110016 ;
}
////////////////// TREE_5
float tree4 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [1] <99) goto node3 ; else goto node4 ; 
node3: if (X [2] <6) goto node7 ; else goto node8 ; 
node7: return -896.710388 ;
node8: return -534.145874 ;
node4: if (X [3] <96000) goto node9 ; else goto node10 ; 
node9: return -57.4784508 ;
node10: return -467.17099 ;
node2: if (X [0] <1) goto node5 ; else goto node6 ; 
node5: if (X [2] <6) goto node11 ; else goto node12 ; 
node11: return -426.621735 ;
node12: return 148.683716 ;
node6: if (X [3] <74735) goto node13 ; else goto node14 ; 
node13: return 621.765198 ;
node14: return 298.917175 ;
}
////////////////// TREE_6
float tree5 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <100) goto node3 ; else goto node4 ; 
node3: if (X [3] <18640) goto node7 ; else goto node8 ; 
node7: return -159.596298 ;
node8: return -580.149902 ;
node4: if (X [3] <51691) goto node9 ; else goto node10 ; 
node9: return 161.581528 ;
node10: return -221.553452 ;
node2: if (X [3] <135520) goto node5 ; else goto node6 ; 
node5: if (X [1] <177) goto node11 ; else goto node12 ; 
node11: return 370.54538 ;
node12: return 639.958435 ;
node6: if (X [1] <248) goto node13 ; else goto node14 ; 
node13: return -153.291565 ;
node14: return 581.634338 ;
}
////////////////// TREE_7
float tree6 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <115) goto node3 ; else goto node4 ; 
node3: if (X [2] <6) goto node7 ; else goto node8 ; 
node7: return -737.498718 ;
node8: return -311.936676 ;
node4: if (X [3] <46099) goto node9 ; else goto node10 ; 
node9: return 281.370697 ;
node10: return -121.337151 ;
node2: if (X [3] <111300) goto node5 ; else goto node6 ; 
node5: if (X [1] <177) goto node11 ; else goto node12 ; 
node11: return 385.369812 ;
node12: return 590.537048 ;
node6: if (X [1] <186) goto node13 ; else goto node14 ; 
node13: return -102.38372 ;
node14: return 384.857513 ;
}
////////////////// TREE_8
float tree7 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [1] <99) goto node3 ; else goto node4 ; 
node3: if (X [3] <69013) goto node7 ; else goto node8 ; 
node7: return -389.265717 ;
node8: return -626.606567 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -495.537109 ;
node10: return -32.7577324 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [3] <75313) goto node11 ; else goto node12 ; 
node11: return 320.653717 ;
node12: return 11.2704992 ;
node6: if (X [2] <6) goto node13 ; else goto node14 ; 
node13: return 122.131851 ;
node14: return 574.912537 ;
}
////////////////// TREE_9
float tree8 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [2] <6) goto node3 ; else goto node4 ; 
node3: if (X [3] <111300) goto node7 ; else goto node8 ; 
node7: return -456.445313 ;
node8: return -657.511353 ;
node4: if (X [1] <91) goto node9 ; else goto node10 ; 
node9: return -393.385742 ;
node10: return -83.3712616 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [1] <144) goto node11 ; else goto node12 ; 
node11: return -477.899628 ;
node12: return 2.61445212 ;
node6: if (X [0] <1) goto node13 ; else goto node14 ; 
node13: return 103.060646 ;
node14: return 382.251923 ;
}
////////////////// TREE_10
float tree9 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [0] <1) goto node3 ; else goto node4 ; 
node3: if (X [3] <88055) goto node7 ; else goto node8 ; 
node7: return -137.518829 ;
node8: return -388.547607 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -363.815765 ;
node10: return 149.403397 ;
node2: if (X [3] <135520) goto node5 ; else goto node6 ; 
node5: if (X [1] <186) goto node11 ; else goto node12 ; 
node11: return 296.929779 ;
node12: return 531.43811 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return -138.01384 ;
node14: return 822.786316 ;
}
////////////////// TREE_11
float tree10 ( float X[] ) {
node0: if (X [1] <129) goto node1 ; else goto node2 ; 
node1: if (X [1] <91) goto node3 ; else goto node4 ; 
node3: if (X [3] <19258) goto node7 ; else goto node8 ; 
node7: return -114.883865 ;
node8: return -410.989319 ;
node4: if (X [3] <36740) goto node9 ; else goto node10 ; 
node9: return 120.18457 ;
node10: return -176.362091 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [3] <53526) goto node11 ; else goto node12 ; 
node11: return 407.690002 ;
node12: return -223.388947 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return 156.394119 ;
node14: return 412.702362 ;
}
////////////////// TREE_12
float tree11 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [1] <115) goto node3 ; else goto node4 ; 
node3: if (X [3] <19258) goto node7 ; else goto node8 ; 
node7: return 117.349731 ;
node8: return -322.746216 ;
node4: if (X [3] <48742) goto node9 ; else goto node10 ; 
node9: return 166.156769 ;
node10: return -107.196716 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [3] <100504) goto node11 ; else goto node12 ; 
node11: return 205.012848 ;
node12: return -130.820084 ;
node6: if (X [3] <176320) goto node13 ; else goto node14 ; 
node13: return 383.895111 ;
node14: return -212.20665 ;
}
////////////////// TREE_13
float tree12 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [2] <6) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -420.160065 ;
node8: return 614.057617 ;
node4: if (X [1] <114) goto node9 ; else goto node10 ; 
node9: return -186.663315 ;
node10: return 41.7510338 ;
node2: if (X [3] <84687) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return 444.24054 ;
node12: return 283.707825 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -87.1999969 ;
node14: return 227.722153 ;
}
////////////////// TREE_14
float tree13 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [1] <99) goto node3 ; else goto node4 ; 
node3: if (X [3] <147419) goto node7 ; else goto node8 ; 
node7: return -263.5802 ;
node8: return -620.679443 ;
node4: if (X [3] <47829) goto node9 ; else goto node10 ; 
node9: return 118.832458 ;
node10: return -137.746094 ;
node2: if (X [3] <74735) goto node5 ; else goto node6 ; 
node5: if (X [1] <114) goto node11 ; else goto node12 ; 
node11: return -50.524395 ;
node12: return 298.542572 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return 54.4850273 ;
node14: return 744.760193 ;
}
////////////////// TREE_15
float tree14 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [2] <6) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -362.185638 ;
node8: return 571.71875 ;
node4: if (X [1] <114) goto node9 ; else goto node10 ; 
node9: return -153.494049 ;
node10: return 34.2002411 ;
node2: if (X [3] <160775) goto node5 ; else goto node6 ; 
node5: if (X [3] <84687) goto node11 ; else goto node12 ; 
node11: return 280.516693 ;
node12: return 113.840897 ;
node6: if (X [1] <248) goto node13 ; else goto node14 ; 
node13: return -314.456512 ;
node14: return 236.162216 ;
}
////////////////// TREE_16
float tree15 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <88664) goto node3 ; else goto node4 ; 
node3: if (X [1] <98) goto node7 ; else goto node8 ; 
node7: return -197.24614 ;
node8: return 30.3257904 ;
node4: if (X [1] <140) goto node9 ; else goto node10 ; 
node9: return -278.75058 ;
node10: return -57.2545586 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [3] <52111) goto node11 ; else goto node12 ; 
node11: return 363.10788 ;
node12: return -151.862183 ;
node6: if (X [1] <186) goto node13 ; else goto node14 ; 
node13: return 136.340988 ;
node14: return 355.746918 ;
}
////////////////// TREE_17
float tree16 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <121713) goto node3 ; else goto node4 ; 
node3: if (X [1] <150) goto node7 ; else goto node8 ; 
node7: return -87.1920853 ;
node8: return 165.158478 ;
node4: if (X [1] <121) goto node9 ; else goto node10 ; 
node9: return -362.16806 ;
node10: return -152.570053 ;
node2: if (X [3] <111300) goto node5 ; else goto node6 ; 
node5: if (X [1] <114) goto node11 ; else goto node12 ; 
node11: return -52.2597618 ;
node12: return 196.61853 ;
node6: if (X [1] <186) goto node13 ; else goto node14 ; 
node13: return -132.943039 ;
node14: return 170.136765 ;
}
////////////////// TREE_18
float tree17 ( float X[] ) {
node0: if (X [1] <116) goto node1 ; else goto node2 ; 
node1: if (X [3] <19258) goto node3 ; else goto node4 ; 
node3: if (X [1] <102) goto node7 ; else goto node8 ; 
node7: return 36.6058884 ;
node8: return 410.008606 ;
node4: if (X [3] <147419) goto node9 ; else goto node10 ; 
node9: return -165.963928 ;
node10: return -461.350739 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [1] <275) goto node11 ; else goto node12 ; 
node11: return -181.167038 ;
node12: return 412.269257 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return 60.1687279 ;
node14: return 237.142532 ;
}
////////////////// TREE_19
float tree18 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <19258) goto node3 ; else goto node4 ; 
node3: if (X [1] <102) goto node7 ; else goto node8 ; 
node7: return 15.5253496 ;
node8: return 369.714111 ;
node4: if (X [1] <115) goto node9 ; else goto node10 ; 
node9: return -181.648026 ;
node10: return -31.5031033 ;
node2: if (X [3] <74735) goto node5 ; else goto node6 ; 
node5: if (X [1] <116) goto node11 ; else goto node12 ; 
node11: return -24.9567471 ;
node12: return 205.598663 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return 16.5955982 ;
node14: return 596.048584 ;
}
////////////////// TREE_20
float tree19 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [3] <36387) goto node3 ; else goto node4 ; 
node3: if (X [1] <98) goto node7 ; else goto node8 ; 
node7: return -100.001534 ;
node8: return 181.742355 ;
node4: if (X [3] <121713) goto node9 ; else goto node10 ; 
node9: return -77.5963211 ;
node10: return -246.032394 ;
node2: if (X [3] <160775) goto node5 ; else goto node6 ; 
node5: if (X [1] <210) goto node11 ; else goto node12 ; 
node11: return 127.151161 ;
node12: return 349.80835 ;
node6: if (X [1] <248) goto node13 ; else goto node14 ; 
node13: return -285.014893 ;
node14: return 171.246017 ;
}
////////////////// TREE_21
float tree20 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <85868) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -256.486145 ;
node8: return 13.5727892 ;
node4: if (X [1] <177) goto node9 ; else goto node10 ; 
node9: return -164.22731 ;
node10: return 294.32019 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [3] <52111) goto node11 ; else goto node12 ; 
node11: return 299.174774 ;
node12: return -145.900406 ;
node6: if (X [1] <190) goto node13 ; else goto node14 ; 
node13: return 88.6770782 ;
node14: return 249.143295 ;
}
////////////////// TREE_22
float tree21 ( float X[] ) {
node0: if (X [1] <121) goto node1 ; else goto node2 ; 
node1: if (X [3] <121713) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -224.061569 ;
node8: return -25.4846134 ;
node4: if (X [3] <147419) goto node9 ; else goto node10 ; 
node9: return -191.409821 ;
node10: return -347.315613 ;
node2: if (X [2] <6) goto node5 ; else goto node6 ; 
node5: if (X [3] <54609) goto node11 ; else goto node12 ; 
node11: return 171.839508 ;
node12: return -146.59494 ;
node6: if (X [1] <224) goto node13 ; else goto node14 ; 
node13: return 88.9796219 ;
node14: return 411.913818 ;
}
////////////////// TREE_23
float tree22 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [3] <33036) goto node3 ; else goto node4 ; 
node3: if (X [1] <95) goto node7 ; else goto node8 ; 
node7: return -88.7567368 ;
node8: return 167.34079 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -200.660339 ;
node10: return -60.9114189 ;
node2: if (X [3] <160775) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return 207.281647 ;
node12: return 74.0566483 ;
node6: if (X [1] <211) goto node13 ; else goto node14 ; 
node13: return -283.177826 ;
node14: return 44.2177124 ;
}
////////////////// TREE_24
float tree23 ( float X[] ) {
node0: if (X [1] <116) goto node1 ; else goto node2 ; 
node1: if (X [3] <19258) goto node3 ; else goto node4 ; 
node3: if (X [1] <111) goto node7 ; else goto node8 ; 
node7: return 151.486252 ;
node8: return -395.660309 ;
node4: if (X [3] <147419) goto node9 ; else goto node10 ; 
node9: return -108.092751 ;
node10: return -308.811035 ;
node2: if (X [3] <84687) goto node5 ; else goto node6 ; 
node5: if (X [1] <150) goto node11 ; else goto node12 ; 
node11: return 49.9264603 ;
node12: return 149.641647 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -83.6236496 ;
node14: return 100.904182 ;
}
////////////////// TREE_25
float tree24 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <19258) goto node3 ; else goto node4 ; 
node3: if (X [1] <102) goto node7 ; else goto node8 ; 
node7: return 8.9335289 ;
node8: return 287.427124 ;
node4: if (X [1] <116) goto node9 ; else goto node10 ; 
node9: return -116.586205 ;
node10: return -20.9838543 ;
node2: if (X [3] <111300) goto node5 ; else goto node6 ; 
node5: if (X [3] <29056) goto node11 ; else goto node12 ; 
node11: return 195.825867 ;
node12: return 76.4180374 ;
node6: if (X [1] <220) goto node13 ; else goto node14 ; 
node13: return -89.9502411 ;
node14: return 193.051971 ;
}
////////////////// TREE_26
float tree25 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <275) goto node3 ; else goto node4 ; 
node3: if (X [3] <53526) goto node7 ; else goto node8 ; 
node7: return 100.450035 ;
node8: return -170.525635 ;
node4: if (X [1] <300) goto node9 ; else goto node10 ; 
node9: return 94.4042435 ;
node10: return 402.21225 ;
node2: if (X [1] <116) goto node5 ; else goto node6 ; 
node5: if (X [3] <18898) goto node11 ; else goto node12 ; 
node11: return 101.682213 ;
node12: return -81.8163605 ;
node6: if (X [3] <120902) goto node13 ; else goto node14 ; 
node13: return 73.2678986 ;
node14: return -70.0705795 ;
}
////////////////// TREE_27
float tree26 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <50416) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -165.924484 ;
node8: return 50.9531097 ;
node4: if (X [1] <163) goto node9 ; else goto node10 ; 
node9: return -88.3358078 ;
node10: return 204.183792 ;
node2: if (X [3] <68208) goto node5 ; else goto node6 ; 
node5: if (X [1] <114) goto node11 ; else goto node12 ; 
node11: return -53.3475227 ;
node12: return 131.50087 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return 3.08924842 ;
node14: return 415.3125 ;
}
////////////////// TREE_28
float tree27 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <218) goto node3 ; else goto node4 ; 
node3: if (X [3] <53526) goto node7 ; else goto node8 ; 
node7: return 84.3450546 ;
node8: return -158.82608 ;
node4: if (X [3] <180425) goto node9 ; else goto node10 ; 
node9: return 184.031479 ;
node10: return -177.413315 ;
node2: if (X [1] <102) goto node5 ; else goto node6 ; 
node5: if (X [3] <14967) goto node11 ; else goto node12 ; 
node11: return 105.416138 ;
node12: return -92.3614578 ;
node6: if (X [3] <27382) goto node13 ; else goto node14 ; 
node13: return 143.853134 ;
node14: return 23.7092915 ;
}
////////////////// TREE_29
float tree28 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <14140) goto node3 ; else goto node4 ; 
node3: if (X [1] <117) goto node7 ; else goto node8 ; 
node7: return 113.882286 ;
node8: return 409.907318 ;
node4: if (X [1] <70) goto node9 ; else goto node10 ; 
node9: return -212.320786 ;
node10: return -34.6448708 ;
node2: if (X [3] <132499) goto node5 ; else goto node6 ; 
node5: if (X [1] <177) goto node11 ; else goto node12 ; 
node11: return 37.5500603 ;
node12: return 135.048218 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return -107.627808 ;
node14: return 355.715271 ;
}
////////////////// TREE_30
float tree29 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <218) goto node3 ; else goto node4 ; 
node3: if (X [3] <53526) goto node7 ; else goto node8 ; 
node7: return 73.1205444 ;
node8: return -139.950256 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 499.932526 ;
node10: return 36.2355003 ;
node2: if (X [1] <184) goto node5 ; else goto node6 ; 
node5: if (X [3] <13090) goto node11 ; else goto node12 ; 
node11: return 191.543442 ;
node12: return -4.73658943 ;
node6: if (X [1] <235) goto node13 ; else goto node14 ; 
node13: return 114.138023 ;
node14: return 342.047791 ;
}
////////////////// TREE_31
float tree30 ( float X[] ) {
node0: if (X [3] <100504) goto node1 ; else goto node2 ; 
node1: if (X [1] <102) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -139.293289 ;
node8: return -27.4081116 ;
node4: if (X [3] <12128) goto node9 ; else goto node10 ; 
node9: return 238.859665 ;
node10: return 39.5709686 ;
node2: if (X [1] <186) goto node5 ; else goto node6 ; 
node5: if (X [1] <184) goto node11 ; else goto node12 ; 
node11: return -82.1439667 ;
node12: return -526.505127 ;
node6: if (X [3] <180425) goto node13 ; else goto node14 ; 
node13: return 157.834213 ;
node14: return -218.792648 ;
}
////////////////// TREE_32
float tree31 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <145) goto node3 ; else goto node4 ; 
node3: if (X [3] <51691) goto node7 ; else goto node8 ; 
node7: return 45.4978523 ;
node8: return -58.1501732 ;
node4: if (X [3] <47829) goto node9 ; else goto node10 ; 
node9: return -576.710754 ;
node10: return -182.116043 ;
node2: if (X [1] <151) goto node5 ; else goto node6 ; 
node5: if (X [3] <160775) goto node11 ; else goto node12 ; 
node11: return 167.402557 ;
node12: return -194.982513 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -155.28862 ;
node14: return 79.6795425 ;
}
////////////////// TREE_33
float tree32 ( float X[] ) {
node0: if (X [1] <114) goto node1 ; else goto node2 ; 
node1: if (X [3] <18898) goto node3 ; else goto node4 ; 
node3: if (X [1] <111) goto node7 ; else goto node8 ; 
node7: return 93.6453247 ;
node8: return -384.2388 ;
node4: if (X [3] <176320) goto node9 ; else goto node10 ; 
node9: return -61.0803032 ;
node10: return -336.024506 ;
node2: if (X [3] <84687) goto node5 ; else goto node6 ; 
node5: if (X [3] <12128) goto node11 ; else goto node12 ; 
node11: return 242.663361 ;
node12: return 47.1922722 ;
node6: if (X [1] <235) goto node13 ; else goto node14 ; 
node13: return -37.2881165 ;
node14: return 168.201462 ;
}
////////////////// TREE_34
float tree33 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <300) goto node3 ; else goto node4 ; 
node3: if (X [3] <53526) goto node7 ; else goto node8 ; 
node7: return 54.1376839 ;
node8: return -104.761841 ;
node4: if (X [3] <59108) goto node9 ; else goto node10 ; 
node9: return -53.3250008 ;
node10: return 331.17746 ;
node2: if (X [1] <75) goto node5 ; else goto node6 ; 
node5: if (X [1] <73) goto node11 ; else goto node12 ; 
node11: return -120.82589 ;
node12: return -315.810455 ;
node6: if (X [1] <184) goto node13 ; else goto node14 ; 
node13: return 10.9013395 ;
node14: return 113.265953 ;
}
////////////////// TREE_35
float tree34 ( float X[] ) {
node0: if (X [3] <124431) goto node1 ; else goto node2 ; 
node1: if (X [1] <150) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -2.35832047 ;
node8: return -387.264526 ;
node4: if (X [1] <151) goto node9 ; else goto node10 ; 
node9: return 138.970856 ;
node10: return 26.8608093 ;
node2: if (X [1] <218) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return -58.0667801 ;
node12: return -226.273544 ;
node6: if (X [2] <6) goto node13 ; else goto node14 ; 
node13: return 20.4778652 ;
node14: return 268.58136 ;
}
////////////////// TREE_36
float tree35 ( float X[] ) {
node0: if (X [1] <83) goto node1 ; else goto node2 ; 
node1: if (X [3] <65317) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -101.663315 ;
node8: return 68.626503 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -112.893898 ;
node10: return -222.333908 ;
node2: if (X [3] <51049) goto node5 ; else goto node6 ; 
node5: if (X [1] <165) goto node11 ; else goto node12 ; 
node11: return 67.8440094 ;
node12: return -27.8600769 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -36.616436 ;
node14: return 91.4031601 ;
}
////////////////// TREE_37
float tree36 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <300) goto node3 ; else goto node4 ; 
node3: if (X [3] <53526) goto node7 ; else goto node8 ; 
node7: return 44.1116905 ;
node8: return -88.4248123 ;
node4: if (X [3] <59108) goto node9 ; else goto node10 ; 
node9: return -57.6542969 ;
node10: return 291.17453 ;
node2: if (X [1] <102) goto node5 ; else goto node6 ; 
node5: if (X [3] <3370) goto node11 ; else goto node12 ; 
node11: return 261.94574 ;
node12: return -53.4618645 ;
node6: if (X [3] <43763) goto node13 ; else goto node14 ; 
node13: return 71.0982971 ;
node14: return 6.68685913 ;
}
////////////////// TREE_38
float tree37 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [3] <19258) goto node3 ; else goto node4 ; 
node3: if (X [1] <102) goto node7 ; else goto node8 ; 
node7: return -23.279686 ;
node8: return 177.460251 ;
node4: if (X [1] <195) goto node9 ; else goto node10 ; 
node9: return -31.1063671 ;
node10: return 380.998627 ;
node2: if (X [3] <180425) goto node5 ; else goto node6 ; 
node5: if (X [3] <29415) goto node11 ; else goto node12 ; 
node11: return 108.609612 ;
node12: return 24.574091 ;
node6: if (X [1] <259) goto node13 ; else goto node14 ; 
node13: return -239.315994 ;
node14: return 75.4967194 ;
}
////////////////// TREE_39
float tree38 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <144) goto node3 ; else goto node4 ; 
node3: if (X [1] <132) goto node7 ; else goto node8 ; 
node7: return -58.9970589 ;
node8: return -197.303665 ;
node4: if (X [1] <145) goto node9 ; else goto node10 ; 
node9: return 731.873779 ;
node10: return -40.4198265 ;
node2: if (X [1] <116) goto node5 ; else goto node6 ; 
node5: if (X [1] <111) goto node11 ; else goto node12 ; 
node11: return -15.9212618 ;
node12: return -152.789139 ;
node6: if (X [1] <235) goto node13 ; else goto node14 ; 
node13: return 23.5683193 ;
node14: return 239.247437 ;
}
////////////////// TREE_40
float tree39 ( float X[] ) {
node0: if (X [3] <100504) goto node1 ; else goto node2 ; 
node1: if (X [1] <102) goto node3 ; else goto node4 ; 
node3: if (X [3] <3370) goto node7 ; else goto node8 ; 
node7: return 241.38475 ;
node8: return -40.229866 ;
node4: if (X [1] <105) goto node9 ; else goto node10 ; 
node9: return 172.357391 ;
node10: return 23.0346489 ;
node2: if (X [1] <186) goto node5 ; else goto node6 ; 
node5: if (X [1] <184) goto node11 ; else goto node12 ; 
node11: return -49.7476234 ;
node12: return -463.570953 ;
node6: if (X [3] <180425) goto node13 ; else goto node14 ; 
node13: return 106.567497 ;
node14: return -194.32988 ;
}
////////////////// TREE_41
float tree40 ( float X[] ) {
node0: if (X [3] <84687) goto node1 ; else goto node2 ; 
node1: if (X [1] <120) goto node3 ; else goto node4 ; 
node3: if (X [1] <118) goto node7 ; else goto node8 ; 
node7: return -14.7888947 ;
node8: return -540.480896 ;
node4: if (X [1] <135) goto node9 ; else goto node10 ; 
node9: return 99.9512253 ;
node10: return 16.7571545 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return -24.3304749 ;
node12: return -279.162537 ;
node6: if (X [2] <6) goto node13 ; else goto node14 ; 
node13: return -140.143753 ;
node14: return 98.4421921 ;
}
////////////////// TREE_42
float tree41 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <145) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -10.7569637 ;
node8: return 673.403137 ;
node4: if (X [3] <47829) goto node9 ; else goto node10 ; 
node9: return -507.739258 ;
node10: return -135.060303 ;
node2: if (X [1] <151) goto node5 ; else goto node6 ; 
node5: if (X [3] <163169) goto node11 ; else goto node12 ; 
node11: return 130.85498 ;
node12: return -200.650482 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -134.942078 ;
node14: return 45.9268608 ;
}
////////////////// TREE_43
float tree42 ( float X[] ) {
node0: if (X [1] <83) goto node1 ; else goto node2 ; 
node1: if (X [3] <65317) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -76.1138382 ;
node8: return 77.873085 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -76.1724701 ;
node10: return -183.476013 ;
node2: if (X [3] <51049) goto node5 ; else goto node6 ; 
node5: if (X [1] <165) goto node11 ; else goto node12 ; 
node11: return 53.4775658 ;
node12: return -43.7764091 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -26.9337616 ;
node14: return 69.0862274 ;
}
////////////////// TREE_44
float tree43 ( float X[] ) {
node0: if (X [3] <13090) goto node1 ; else goto node2 ; 
node1: if (X [1] <165) goto node3 ; else goto node4 ; 
node3: if (X [1] <117) goto node7 ; else goto node8 ; 
node7: return 67.210434 ;
node8: return 202.663376 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 145.036728 ;
node10: return -386.585175 ;
node2: if (X [0] <1) goto node5 ; else goto node6 ; 
node5: if (X [1] <195) goto node11 ; else goto node12 ; 
node11: return -21.5235348 ;
node12: return 330.766724 ;
node6: if (X [3] <180425) goto node13 ; else goto node14 ; 
node13: return 25.5440712 ;
node14: return -167.728027 ;
}
////////////////// TREE_45
float tree44 ( float X[] ) {
node0: if (X [3] <124431) goto node1 ; else goto node2 ; 
node1: if (X [1] <114) goto node3 ; else goto node4 ; 
node3: if (X [1] <111) goto node7 ; else goto node8 ; 
node7: return -8.42216206 ;
node8: return -207.781036 ;
node4: if (X [2] <6) goto node9 ; else goto node10 ; 
node9: return -59.4994278 ;
node10: return 28.3560066 ;
node2: if (X [1] <301) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return -27.8104591 ;
node12: return -132.455856 ;
node6: if (X [3] <160775) goto node13 ; else goto node14 ; 
node13: return 230.701706 ;
node14: return 32.8039703 ;
}
////////////////// TREE_46
float tree45 ( float X[] ) {
node0: if (X [1] <83) goto node1 ; else goto node2 ; 
node1: if (X [1] <69) goto node3 ; else goto node4 ; 
node3: if (X [3] <46099) goto node7 ; else goto node8 ; 
node7: return -157.037949 ;
node8: return -241.149704 ;
node4: if (X [3] <63405) goto node9 ; else goto node10 ; 
node9: return -18.8822517 ;
node10: return -101.390953 ;
node2: if (X [3] <33036) goto node5 ; else goto node6 ; 
node5: if (X [1] <160) goto node11 ; else goto node12 ; 
node11: return 74.5898666 ;
node12: return -84.1615677 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -23.7687035 ;
node14: return 30.3065987 ;
}
////////////////// TREE_47
float tree46 ( float X[] ) {
node0: if (X [1] <210) goto node1 ; else goto node2 ; 
node1: if (X [1] <205) goto node3 ; else goto node4 ; 
node3: if (X [3] <100504) goto node7 ; else goto node8 ; 
node7: return 9.13844395 ;
node8: return -34.0732384 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return -40.7065086 ;
node10: return -881.252747 ;
node2: if (X [3] <81820) goto node5 ; else goto node6 ; 
node5: if (X [1] <326) goto node11 ; else goto node12 ; 
node11: return 301.734711 ;
node12: return -70.144043 ;
node6: if (X [1] <301) goto node13 ; else goto node14 ; 
node13: return 8.23145199 ;
node14: return 186.804886 ;
}
////////////////// TREE_48
float tree47 ( float X[] ) {
node0: if (X [3] <13090) goto node1 ; else goto node2 ; 
node1: if (X [1] <165) goto node3 ; else goto node4 ; 
node3: if (X [1] <117) goto node7 ; else goto node8 ; 
node7: return 54.83741 ;
node8: return 172.192123 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 140.118271 ;
node10: return -351.924866 ;
node2: if (X [1] <70) goto node5 ; else goto node6 ; 
node5: if (X [3] <26494) goto node11 ; else goto node12 ; 
node11: return -220.562164 ;
node12: return -51.1565704 ;
node6: if (X [1] <71) goto node13 ; else goto node14 ; 
node13: return 346.602142 ;
node14: return -0.944997311 ;
}
////////////////// TREE_49
float tree48 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [3] <43763) goto node3 ; else goto node4 ; 
node3: if (X [1] <85) goto node7 ; else goto node8 ; 
node7: return -46.5940437 ;
node8: return -327.597504 ;
node4: if (X [3] <53526) goto node9 ; else goto node10 ; 
node9: return 145.802124 ;
node10: return -48.6404305 ;
node2: if (X [1] <235) goto node5 ; else goto node6 ; 
node5: if (X [3] <180425) goto node11 ; else goto node12 ; 
node11: return 5.89780712 ;
node12: return -197.629776 ;
node6: if (X [3] <132499) goto node13 ; else goto node14 ; 
node13: return 211.478714 ;
node14: return 68.2431641 ;
}
////////////////// TREE_50
float tree49 ( float X[] ) {
node0: if (X [1] <121) goto node1 ; else goto node2 ; 
node1: if (X [3] <147419) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -66.9412231 ;
node8: return -2.85788798 ;
node4: if (X [3] <228649) goto node9 ; else goto node10 ; 
node9: return -114.362877 ;
node10: return -335.031891 ;
node2: if (X [1] <132) goto node5 ; else goto node6 ; 
node5: if (X [3] <204516) goto node11 ; else goto node12 ; 
node11: return 105.844704 ;
node12: return 1053.2843 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -86.1332245 ;
node14: return 22.299263 ;
}
////////////////// TREE_51
float tree50 ( float X[] ) {
node0: if (X [1] <210) goto node1 ; else goto node2 ; 
node1: if (X [1] <205) goto node3 ; else goto node4 ; 
node3: if (X [3] <84687) goto node7 ; else goto node8 ; 
node7: return 9.99278927 ;
node8: return -22.597456 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return -39.8095055 ;
node10: return -805.164246 ;
node2: if (X [3] <81820) goto node5 ; else goto node6 ; 
node5: if (X [1] <326) goto node11 ; else goto node12 ; 
node11: return 270.260986 ;
node12: return -69.3397446 ;
node6: if (X [1] <235) goto node13 ; else goto node14 ; 
node13: return -63.1496658 ;
node14: return 80.7825241 ;
}
////////////////// TREE_52
float tree51 ( float X[] ) {
node0: if (X [3] <13090) goto node1 ; else goto node2 ; 
node1: if (X [1] <165) goto node3 ; else goto node4 ; 
node3: if (X [1] <85) goto node7 ; else goto node8 ; 
node7: return -25.5094566 ;
node8: return 116.261536 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 131.202835 ;
node10: return -326.826019 ;
node2: if (X [0] <1) goto node5 ; else goto node6 ; 
node5: if (X [1] <195) goto node11 ; else goto node12 ; 
node11: return -16.2211647 ;
node12: return 269.790161 ;
node6: if (X [1] <151) goto node13 ; else goto node14 ; 
node13: return 41.9396744 ;
node14: return -16.6689739 ;
}
////////////////// TREE_53
float tree52 ( float X[] ) {
node0: if (X [1] <75) goto node1 ; else goto node2 ; 
node1: if (X [1] <73) goto node3 ; else goto node4 ; 
node3: if (X [1] <69) goto node7 ; else goto node8 ; 
node7: return -154.279419 ;
node8: return -36.1196518 ;
node4: return -233.858566 ;
node2: if (X [3] <28267) goto node5 ; else goto node6 ; 
node5: if (X [1] <160) goto node9 ; else goto node10 ; 
node9: return 71.9953842 ;
node10: return -91.9502716 ;
node6: if (X [1] <177) goto node11 ; else goto node12 ; 
node11: return -13.2278814 ;
node12: return 44.0603104 ;
}
////////////////// TREE_54
float tree53 ( float X[] ) {
node0: if (X [3] <180425) goto node1 ; else goto node2 ; 
node1: if (X [1] <210) goto node3 ; else goto node4 ; 
node3: if (X [1] <205) goto node7 ; else goto node8 ; 
node7: return 0.331331283 ;
node8: return -567 ;
node4: if (X [3] <81820) goto node9 ; else goto node10 ; 
node9: return 208.81929 ;
node10: return 58.2408447 ;
node2: if (X [2] <5) goto node5 ; else goto node6 ; 
node5: if (X [1] <125) goto node11 ; else goto node12 ; 
node11: return 726.961731 ;
node12: return -545.318237 ;
node6: if (X [1] <129) goto node13 ; else goto node14 ; 
node13: return -220.742706 ;
node14: return -53.9486694 ;
}
////////////////// TREE_55
float tree54 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <151) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -49.9823112 ;
node8: return 220.594833 ;
node4: if (X [3] <66569) goto node9 ; else goto node10 ; 
node9: return 179.660583 ;
node10: return -164.369339 ;
node2: if (X [1] <184) goto node5 ; else goto node6 ; 
node5: if (X [1] <161) goto node11 ; else goto node12 ; 
node11: return 8.22608566 ;
node12: return -61.9347 ;
node6: if (X [1] <192) goto node13 ; else goto node14 ; 
node13: return 108.869621 ;
node14: return -3.58425903 ;
}
////////////////// TREE_56
float tree55 ( float X[] ) {
node0: if (X [1] <121) goto node1 ; else goto node2 ; 
node1: if (X [3] <147419) goto node3 ; else goto node4 ; 
node3: if (X [1] <75) goto node7 ; else goto node8 ; 
node7: return -54.2380066 ;
node8: return -2.90142345 ;
node4: if (X [1] <117) goto node9 ; else goto node10 ; 
node9: return -87.0122223 ;
node10: return -272.250854 ;
node2: if (X [1] <132) goto node5 ; else goto node6 ; 
node5: if (X [3] <204516) goto node11 ; else goto node12 ; 
node11: return 93.4781418 ;
node12: return 927.417969 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -77.7876816 ;
node14: return 19.2164173 ;
}
////////////////// TREE_57
float tree56 ( float X[] ) {
node0: if (X [1] <210) goto node1 ; else goto node2 ; 
node1: if (X [1] <205) goto node3 ; else goto node4 ; 
node3: if (X [3] <123597) goto node7 ; else goto node8 ; 
node7: return 4.01605844 ;
node8: return -34.5823059 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return -21.3212242 ;
node10: return -691.257996 ;
node2: if (X [3] <81820) goto node5 ; else goto node6 ; 
node5: if (X [1] <326) goto node11 ; else goto node12 ; 
node11: return 217.677521 ;
node12: return -92.1895523 ;
node6: if (X [1] <235) goto node13 ; else goto node14 ; 
node13: return -62.0293465 ;
node14: return 71.7373657 ;
}
////////////////// TREE_58
float tree57 ( float X[] ) {
node0: if (X [1] <114) goto node1 ; else goto node2 ; 
node1: if (X [1] <111) goto node3 ; else goto node4 ; 
node3: if (X [3] <21014) goto node7 ; else goto node8 ; 
node7: return 67.677803 ;
node8: return -19.4744129 ;
node4: if (X [3] <37634) goto node9 ; else goto node10 ; 
node9: return -368.966187 ;
node10: return -80.1749649 ;
node2: if (X [1] <160) goto node5 ; else goto node6 ; 
node5: if (X [1] <150) goto node11 ; else goto node12 ; 
node11: return 0.0760003924 ;
node12: return 86.4834671 ;
node6: if (X [1] <163) goto node13 ; else goto node14 ; 
node13: return -251.678223 ;
node14: return 7.47833014 ;
}
////////////////// TREE_59
float tree58 ( float X[] ) {
node0: if (X [3] <180425) goto node1 ; else goto node2 ; 
node1: if (X [1] <190) goto node3 ; else goto node4 ; 
node3: if (X [1] <160) goto node7 ; else goto node8 ; 
node7: return 5.26418734 ;
node8: return -50.4802666 ;
node4: if (X [1] <192) goto node9 ; else goto node10 ; 
node9: return 121.449059 ;
node10: return -1.52786374 ;
node2: if (X [2] <5) goto node5 ; else goto node6 ; 
node5: if (X [1] <125) goto node11 ; else goto node12 ; 
node11: return 622.05011 ;
node12: return -498.145264 ;
node6: if (X [3] <228649) goto node13 ; else goto node14 ; 
node13: return -69.0317612 ;
node14: return -264.643036 ;
}
////////////////// TREE_60
float tree59 ( float X[] ) {
node0: if (X [1] <102) goto node1 ; else goto node2 ; 
node1: if (X [1] <101) goto node3 ; else goto node4 ; 
node3: if (X [1] <100) goto node7 ; else goto node8 ; 
node7: return -18.0048637 ;
node8: return 157.726166 ;
node4: if (X [3] <83568) goto node9 ; else goto node10 ; 
node9: return -72.9322052 ;
node10: return -361.300262 ;
node2: if (X [1] <105) goto node5 ; else goto node6 ; 
node5: if (X [3] <23600) goto node11 ; else goto node12 ; 
node11: return 612.496399 ;
node12: return 12.4541111 ;
node6: if (X [1] <109) goto node13 ; else goto node14 ; 
node13: return -187.611618 ;
node14: return 3.28413582 ;
}
////////////////// TREE_61
float tree60 ( float X[] ) {
node0: if (X [3] <51049) goto node1 ; else goto node2 ; 
node1: if (X [1] <165) goto node3 ; else goto node4 ; 
node3: if (X [1] <163) goto node7 ; else goto node8 ; 
node7: return 21.5604839 ;
node8: return 640.218445 ;
node4: if (X [1] <171) goto node9 ; else goto node10 ; 
node9: return -351.955872 ;
node10: return -17.438158 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [1] <151) goto node11 ; else goto node12 ; 
node11: return -5.62016535 ;
node12: return -169.311737 ;
node6: if (X [1] <181) goto node13 ; else goto node14 ; 
node13: return 173.463043 ;
node14: return 2.47334361 ;
}
////////////////// TREE_62
float tree61 ( float X[] ) {
node0: if (X [1] <150) goto node1 ; else goto node2 ; 
node1: if (X [1] <145) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -4.55316496 ;
node8: return 640.811523 ;
node4: if (X [3] <47829) goto node9 ; else goto node10 ; 
node9: return -457.987396 ;
node10: return -104.147118 ;
node2: if (X [1] <151) goto node5 ; else goto node6 ; 
node5: if (X [3] <163169) goto node11 ; else goto node12 ; 
node11: return 93.4723892 ;
node12: return -184.30838 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -95.7770615 ;
node14: return 22.5284023 ;
}
////////////////// TREE_63
float tree62 ( float X[] ) {
node0: if (X [1] <75) goto node1 ; else goto node2 ; 
node1: if (X [3] <24558) goto node3 ; else goto node4 ; 
node3: if (X [3] <16430) goto node7 ; else goto node8 ; 
node7: return -3.48194122 ;
node8: return -192.29483 ;
node4: if (X [1] <69) goto node9 ; else goto node10 ; 
node9: return -122.360008 ;
node10: return -9.58675957 ;
node2: if (X [3] <43763) goto node5 ; else goto node6 ; 
node5: if (X [1] <165) goto node11 ; else goto node12 ; 
node11: return 38.2283173 ;
node12: return -64.4405212 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -15.2519045 ;
node14: return 40.5669823 ;
}
////////////////// TREE_64
float tree63 ( float X[] ) {
node0: if (X [3] <180425) goto node1 ; else goto node2 ; 
node1: if (X [1] <210) goto node3 ; else goto node4 ; 
node3: if (X [1] <205) goto node7 ; else goto node8 ; 
node7: return 0.313649982 ;
node8: return -476.294586 ;
node4: if (X [3] <155771) goto node9 ; else goto node10 ; 
node9: return 57.2049065 ;
node10: return 295.899139 ;
node2: if (X [2] <5) goto node5 ; else goto node6 ; 
node5: if (X [1] <125) goto node11 ; else goto node12 ; 
node11: return 574.057434 ;
node12: return -463.459534 ;
node6: if (X [3] <228649) goto node13 ; else goto node14 ; 
node13: return -63.8332481 ;
node14: return -237.301254 ;
}
////////////////// TREE_65
float tree64 ( float X[] ) {
node0: if (X [1] <114) goto node1 ; else goto node2 ; 
node1: if (X [1] <111) goto node3 ; else goto node4 ; 
node3: if (X [1] <102) goto node7 ; else goto node8 ; 
node7: return -20.5344009 ;
node8: return 31.8237 ;
node4: if (X [3] <40332) goto node9 ; else goto node10 ; 
node9: return -312.140411 ;
node10: return -54.3342972 ;
node2: if (X [1] <132) goto node5 ; else goto node6 ; 
node5: if (X [1] <129) goto node11 ; else goto node12 ; 
node11: return 0.617000818 ;
node12: return 118.671791 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -67.2966232 ;
node14: return 14.4791536 ;
}
////////////////// TREE_66
float tree65 ( float X[] ) {
node0: if (X [3] <84687) goto node1 ; else goto node2 ; 
node1: if (X [1] <150) goto node3 ; else goto node4 ; 
node3: if (X [1] <140) goto node7 ; else goto node8 ; 
node7: return 11.0017204 ;
node8: return -155.241913 ;
node4: if (X [3] <80183) goto node9 ; else goto node10 ; 
node9: return 24.2807369 ;
node10: return 281.451874 ;
node2: if (X [1] <117) goto node5 ; else goto node6 ; 
node5: if (X [1] <115) goto node11 ; else goto node12 ; 
node11: return -23.7601662 ;
node12: return 83.3160629 ;
node6: if (X [1] <121) goto node13 ; else goto node14 ; 
node13: return -163.676559 ;
node14: return -13.1439762 ;
}
////////////////// TREE_67
float tree66 ( float X[] ) {
node0: if (X [1] <75) goto node1 ; else goto node2 ; 
node1: if (X [1] <73) goto node3 ; else goto node4 ; 
node3: if (X [3] <24558) goto node7 ; else goto node8 ; 
node7: return -94.2971649 ;
node8: return -14.8819504 ;
node4: return -203.030746 ;
node2: if (X [3] <28267) goto node5 ; else goto node6 ; 
node5: if (X [1] <160) goto node9 ; else goto node10 ; 
node9: return 53.3000565 ;
node10: return -74.3904648 ;
node6: if (X [1] <150) goto node11 ; else goto node12 ; 
node11: return -11.9577494 ;
node12: return 14.8170109 ;
}
////////////////// TREE_68
float tree67 ( float X[] ) {
node0: if (X [1] <160) goto node1 ; else goto node2 ; 
node1: if (X [1] <150) goto node3 ; else goto node4 ; 
node3: if (X [1] <145) goto node7 ; else goto node8 ; 
node7: return -0.558964789 ;
node8: return -257.015472 ;
node4: if (X [3] <163169) goto node9 ; else goto node10 ; 
node9: return 75.0089874 ;
node10: return -164.348358 ;
node2: if (X [1] <163) goto node5 ; else goto node6 ; 
node5: if (X [1] <161) goto node11 ; else goto node12 ; 
node11: return -33.2696457 ;
node12: return -375.217224 ;
node6: if (X [1] <165) goto node13 ; else goto node14 ; 
node13: return 329.209869 ;
node14: return -12.5087576 ;
}
////////////////// TREE_69
float tree68 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <151) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -32.1898422 ;
node8: return 183.657791 ;
node4: if (X [3] <66569) goto node9 ; else goto node10 ; 
node9: return 152.816422 ;
node10: return -153.163605 ;
node2: if (X [1] <116) goto node5 ; else goto node6 ; 
node5: if (X [1] <111) goto node11 ; else goto node12 ; 
node11: return -4.10238171 ;
node12: return -111.526772 ;
node6: if (X [1] <135) goto node13 ; else goto node14 ; 
node13: return 32.3270531 ;
node14: return -0.590524852 ;
}
////////////////// TREE_70
float tree69 ( float X[] ) {
node0: if (X [1] <235) goto node1 ; else goto node2 ; 
node1: if (X [1] <192) goto node3 ; else goto node4 ; 
node3: if (X [1] <190) goto node7 ; else goto node8 ; 
node7: return -2.3927362 ;
node8: return 92.6865158 ;
node4: if (X [1] <208) goto node9 ; else goto node10 ; 
node9: return -129.15535 ;
node10: return 20.5134506 ;
node2: if (X [1] <240) goto node5 ; else goto node6 ; 
node5: if (X [2] <5) goto node11 ; else goto node12 ; 
node11: return -113.464165 ;
node12: return 411.237762 ;
node6: if (X [3] <140381) goto node13 ; else goto node14 ; 
node13: return 105.586891 ;
node14: return -28.0401363 ;
}
////////////////// TREE_71
float tree70 ( float X[] ) {
node0: if (X [3] <84687) goto node1 ; else goto node2 ; 
node1: if (X [1] <129) goto node3 ; else goto node4 ; 
node3: if (X [1] <125) goto node7 ; else goto node8 ; 
node7: return -4.93259096 ;
node8: return -118.662071 ;
node4: if (X [1] <135) goto node9 ; else goto node10 ; 
node9: return 130.772385 ;
node10: return 5.1710062 ;
node2: if (X [1] <117) goto node5 ; else goto node6 ; 
node5: if (X [1] <113) goto node11 ; else goto node12 ; 
node11: return -19.1789551 ;
node12: return 72.4243011 ;
node6: if (X [1] <121) goto node13 ; else goto node14 ; 
node13: return -148.613113 ;
node14: return -12.7346153 ;
}
////////////////// TREE_72
float tree71 ( float X[] ) {
node0: if (X [1] <235) goto node1 ; else goto node2 ; 
node1: if (X [1] <160) goto node3 ; else goto node4 ; 
node3: if (X [1] <150) goto node7 ; else goto node8 ; 
node7: return -4.53480101 ;
node8: return 58.2536011 ;
node4: if (X [1] <163) goto node9 ; else goto node10 ; 
node9: return -186.789627 ;
node10: return -3.66261792 ;
node2: if (X [1] <240) goto node5 ; else goto node6 ; 
node5: if (X [2] <5) goto node11 ; else goto node12 ; 
node11: return -107.154198 ;
node12: return 378.029114 ;
node6: if (X [3] <140381) goto node13 ; else goto node14 ; 
node13: return 96.1015167 ;
node14: return -24.0699329 ;
}
////////////////// TREE_73
float tree72 ( float X[] ) {
node0: if (X [1] <69) goto node1 ; else goto node2 ; 
node1: if (X [3] <46099) goto node3 ; else goto node4 ; 
node3: if (X [3] <37050) goto node7 ; else goto node8 ; 
node7: return -132.086288 ;
node8: return 24.7484112 ;
node4: if (X [3] <72922) goto node9 ; else goto node10 ; 
node9: return -269.102539 ;
node10: return -95.3689651 ;
node2: if (X [3] <180425) goto node5 ; else goto node6 ; 
node5: if (X [1] <210) goto node11 ; else goto node12 ; 
node11: return 0.324702024 ;
node12: return 61.5896912 ;
node6: if (X [3] <184913) goto node13 ; else goto node14 ; 
node13: return -208.440338 ;
node14: return -23.9260216 ;
}
////////////////// TREE_74
float tree73 ( float X[] ) {
node0: if (X [3] <84687) goto node1 ; else goto node2 ; 
node1: if (X [1] <184) goto node3 ; else goto node4 ; 
node3: if (X [1] <165) goto node7 ; else goto node8 ; 
node7: return 8.82905865 ;
node8: return -82.3245087 ;
node4: if (X [1] <192) goto node9 ; else goto node10 ; 
node9: return 137.707214 ;
node10: return -29.3568859 ;
node2: if (X [1] <117) goto node5 ; else goto node6 ; 
node5: if (X [1] <115) goto node11 ; else goto node12 ; 
node11: return -15.2146177 ;
node12: return 68.3807983 ;
node6: if (X [1] <121) goto node13 ; else goto node14 ; 
node13: return -133.281631 ;
node14: return -12.7513981 ;
}
////////////////// TREE_75
float tree74 ( float X[] ) {
node0: if (X [1] <69) goto node1 ; else goto node2 ; 
node1: if (X [3] <46099) goto node3 ; else goto node4 ; 
node3: if (X [3] <37050) goto node7 ; else goto node8 ; 
node7: return -120.582329 ;
node8: return 21.870369 ;
node4: if (X [3] <72922) goto node9 ; else goto node10 ; 
node9: return -251.750977 ;
node10: return -85.5392761 ;
node2: if (X [3] <51049) goto node5 ; else goto node6 ; 
node5: if (X [1] <120) goto node11 ; else goto node12 ; 
node11: return -11.1233969 ;
node12: return 32.1370621 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -13.1134968 ;
node14: return 31.954483 ;
}
////////////////// TREE_76
float tree75 ( float X[] ) {
node0: if (X [1] <160) goto node1 ; else goto node2 ; 
node1: if (X [1] <154) goto node3 ; else goto node4 ; 
node3: if (X [1] <151) goto node7 ; else goto node8 ; 
node7: return 4.24958563 ;
node8: return -362.17868 ;
node4: if (X [3] <71953) goto node9 ; else goto node10 ; 
node9: return 273.627563 ;
node10: return -170.377777 ;
node2: if (X [1] <163) goto node5 ; else goto node6 ; 
node5: if (X [1] <161) goto node11 ; else goto node12 ; 
node11: return -13.9104309 ;
node12: return -318.208435 ;
node6: if (X [1] <165) goto node13 ; else goto node14 ; 
node13: return 299.129486 ;
node14: return -13.4399967 ;
}
////////////////// TREE_77
float tree76 ( float X[] ) {
node0: if (X [3] <204516) goto node1 ; else goto node2 ; 
node1: if (X [1] <210) goto node3 ; else goto node4 ; 
node3: if (X [1] <205) goto node7 ; else goto node8 ; 
node7: return 0.304078341 ;
node8: return -468.376068 ;
node4: if (X [3] <81820) goto node9 ; else goto node10 ; 
node9: return 140.79866 ;
node10: return 19.1270733 ;
node2: if (X [2] <5) goto node5 ; else goto node6 ; 
node5: if (X [1] <125) goto node11 ; else goto node12 ; 
node11: return 537.694031 ;
node12: return -419.872284 ;
node6: if (X [1] <185) goto node13 ; else goto node14 ; 
node13: return -223.473755 ;
node14: return -46.2172813 ;
}
////////////////// TREE_78
float tree77 ( float X[] ) {
node0: if (X [1] <160) goto node1 ; else goto node2 ; 
node1: if (X [1] <150) goto node3 ; else goto node4 ; 
node3: if (X [1] <145) goto node7 ; else goto node8 ; 
node7: return 0.281897724 ;
node8: return -234.196808 ;
node4: if (X [3] <163169) goto node9 ; else goto node10 ; 
node9: return 59.8653145 ;
node10: return -158.101151 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [0] <1) goto node11 ; else goto node12 ; 
node11: return 25.2546062 ;
node12: return -170.00061 ;
node6: if (X [1] <180) goto node13 ; else goto node14 ; 
node13: return 179.913101 ;
node14: return -0.697781503 ;
}
////////////////// TREE_79
float tree78 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [1] <151) goto node3 ; else goto node4 ; 
node3: if (X [1] <144) goto node7 ; else goto node8 ; 
node7: return -25.2286739 ;
node8: return 163.675095 ;
node4: if (X [3] <66569) goto node9 ; else goto node10 ; 
node9: return 123.620415 ;
node10: return -138.048691 ;
node2: if (X [1] <102) goto node5 ; else goto node6 ; 
node5: if (X [3] <163169) goto node11 ; else goto node12 ; 
node11: return -16.2146988 ;
node12: return -299.716431 ;
node6: if (X [1] <105) goto node13 ; else goto node14 ; 
node13: return 120.526489 ;
node14: return 4.28905821 ;
}
////////////////// TREE_80
float tree79 ( float X[] ) {
node0: if (X [1] <235) goto node1 ; else goto node2 ; 
node1: if (X [1] <192) goto node3 ; else goto node4 ; 
node3: if (X [1] <190) goto node7 ; else goto node8 ; 
node7: return -1.78156877 ;
node8: return 75.3402481 ;
node4: if (X [1] <208) goto node9 ; else goto node10 ; 
node9: return -110.11454 ;
node10: return 12.6750631 ;
node2: if (X [1] <240) goto node5 ; else goto node6 ; 
node5: if (X [2] <5) goto node11 ; else goto node12 ; 
node11: return -99.1832047 ;
node12: return 353.010376 ;
node6: if (X [2] <6) goto node13 ; else goto node14 ; 
node13: return -14.8834915 ;
node14: return 84.3707733 ;
}
////////////////// TREE_81
float tree80 ( float X[] ) {
node0: if (X [3] <13090) goto node1 ; else goto node2 ; 
node1: if (X [1] <165) goto node3 ; else goto node4 ; 
node3: if (X [1] <132) goto node7 ; else goto node8 ; 
node7: return 25.20228 ;
node8: return 127.530151 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 162.980087 ;
node10: return -245.611725 ;
node2: if (X [3] <17711) goto node5 ; else goto node6 ; 
node5: if (X [1] <117) goto node11 ; else goto node12 ; 
node11: return -4.96977282 ;
node12: return -104.68914 ;
node6: if (X [3] <18898) goto node13 ; else goto node14 ; 
node13: return 121.474709 ;
node14: return -1.49031126 ;
}
////////////////// TREE_82
float tree81 ( float X[] ) {
node0: if (X [1] <301) goto node1 ; else goto node2 ; 
node1: if (X [1] <160) goto node3 ; else goto node4 ; 
node3: if (X [1] <154) goto node7 ; else goto node8 ; 
node7: return 1.90135515 ;
node8: return 184.904724 ;
node4: if (X [1] <163) goto node9 ; else goto node10 ; 
node9: return -147.446884 ;
node10: return -0.92929852 ;
node2: if (X [3] <70954) goto node5 ; else goto node6 ; 
node5: return -143.251572 ;
node6: if (X [2] <6) goto node11 ; else goto node12 ; 
node11: return 206.753464 ;
node12: return 72.9286423 ;
}
////////////////// TREE_83
float tree82 ( float X[] ) {
node0: if (X [1] <69) goto node1 ; else goto node2 ; 
node1: if (X [3] <46099) goto node3 ; else goto node4 ; 
node3: if (X [3] <37050) goto node7 ; else goto node8 ; 
node7: return -108.31604 ;
node8: return 21.0885601 ;
node4: if (X [3] <72922) goto node9 ; else goto node10 ; 
node9: return -234.117661 ;
node10: return -76.2015915 ;
node2: if (X [3] <150030) goto node5 ; else goto node6 ; 
node5: if (X [1] <132) goto node11 ; else goto node12 ; 
node11: return 8.52065849 ;
node12: return -5.62432909 ;
node6: if (X [3] <151250) goto node13 ; else goto node14 ; 
node13: return -192.236618 ;
node14: return -16.9458275 ;
}
////////////////// TREE_84
float tree83 ( float X[] ) {
node0: if (X [1] <75) goto node1 ; else goto node2 ; 
node1: if (X [1] <73) goto node3 ; else goto node4 ; 
node3: if (X [3] <24558) goto node7 ; else goto node8 ; 
node7: return -80.6807175 ;
node8: return -5.75326824 ;
node4: return -181.956467 ;
node2: if (X [3] <28267) goto node5 ; else goto node6 ; 
node5: if (X [3] <24899) goto node9 ; else goto node10 ; 
node9: return 4.4881978 ;
node10: return 96.8272858 ;
node6: if (X [1] <150) goto node11 ; else goto node12 ; 
node11: return -9.01438713 ;
node12: return 10.8723907 ;
}
////////////////// TREE_85
float tree84 ( float X[] ) {
node0: if (X [1] <258) goto node1 ; else goto node2 ; 
node1: if (X [1] <161) goto node3 ; else goto node4 ; 
node3: if (X [1] <150) goto node7 ; else goto node8 ; 
node7: return -3.20077825 ;
node8: return 39.0340996 ;
node4: if (X [1] <163) goto node9 ; else goto node10 ; 
node9: return -263.02066 ;
node10: return -2.73329616 ;
node2: if (X [3] <132499) goto node5 ; else goto node6 ; 
node5: if (X [1] <326) goto node11 ; else goto node12 ; 
node11: return 155.814697 ;
node12: return -81.2155151 ;
node6: if (X [1] <313) goto node13 ; else goto node14 ; 
node13: return -52.3091812 ;
node14: return 176.506882 ;
}
////////////////// TREE_86
float tree85 ( float X[] ) {
node0: if (X [2] <6) goto node1 ; else goto node2 ; 
node1: if (X [3] <43763) goto node3 ; else goto node4 ; 
node3: if (X [1] <85) goto node7 ; else goto node8 ; 
node7: return -11.8327932 ;
node8: return -326.920837 ;
node4: if (X [1] <151) goto node9 ; else goto node10 ; 
node9: return 4.24079084 ;
node10: return -70.1433334 ;
node2: if (X [1] <70) goto node5 ; else goto node6 ; 
node5: if (X [3] <24558) goto node11 ; else goto node12 ; 
node11: return -124.879578 ;
node12: return -20.2091351 ;
node6: if (X [1] <71) goto node13 ; else goto node14 ; 
node13: return 335.144623 ;
node14: return 3.22726607 ;
}
////////////////// TREE_87
float tree86 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [1] <195) goto node3 ; else goto node4 ; 
node3: if (X [1] <192) goto node7 ; else goto node8 ; 
node7: return -5.47865534 ;
node8: return -304.144745 ;
node4: if (X [3] <81820) goto node9 ; else goto node10 ; 
node9: return 268.621429 ;
node10: return 33.401432 ;
node2: if (X [1] <140) goto node5 ; else goto node6 ; 
node5: if (X [1] <121) goto node11 ; else goto node12 ; 
node11: return -5.07378864 ;
node12: return 100.205742 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -180.495163 ;
node14: return 2.33473444 ;
}
////////////////// TREE_88
float tree87 ( float X[] ) {
node0: if (X [1] <235) goto node1 ; else goto node2 ; 
node1: if (X [1] <192) goto node3 ; else goto node4 ; 
node3: if (X [1] <190) goto node7 ; else goto node8 ; 
node7: return -1.57431114 ;
node8: return 67.9538727 ;
node4: if (X [3] <160775) goto node9 ; else goto node10 ; 
node9: return -36.7351799 ;
node10: return -210.587158 ;
node2: if (X [1] <240) goto node5 ; else goto node6 ; 
node5: if (X [2] <5) goto node11 ; else goto node12 ; 
node11: return -90.2723618 ;
node12: return 328.767548 ;
node6: if (X [2] <6) goto node13 ; else goto node14 ; 
node13: return -14.1424437 ;
node14: return 68.1469421 ;
}
////////////////// TREE_89
float tree88 ( float X[] ) {
node0: if (X [3] <84687) goto node1 ; else goto node2 ; 
node1: if (X [3] <80183) goto node3 ; else goto node4 ; 
node3: if (X [3] <78428) goto node7 ; else goto node8 ; 
node7: return 4.15350676 ;
node8: return -117.867935 ;
node4: if (X [1] <158) goto node9 ; else goto node10 ; 
node9: return 2.09993577 ;
node10: return 323.076843 ;
node2: if (X [1] <117) goto node5 ; else goto node6 ; 
node5: if (X [1] <113) goto node11 ; else goto node12 ; 
node11: return -10.6332273 ;
node12: return 62.4601936 ;
node6: if (X [1] <121) goto node13 ; else goto node14 ; 
node13: return -117.913574 ;
node14: return -11.2396421 ;
}
////////////////// TREE_90
float tree89 ( float X[] ) {
node0: if (X [1] <132) goto node1 ; else goto node2 ; 
node1: if (X [1] <129) goto node3 ; else goto node4 ; 
node3: if (X [3] <6871) goto node7 ; else goto node8 ; 
node7: return 64.1566238 ;
node8: return -5.91211939 ;
node4: if (X [1] <131) goto node9 ; else goto node10 ; 
node9: return 265.117889 ;
node10: return 48.5618324 ;
node2: if (X [1] <150) goto node5 ; else goto node6 ; 
node5: if (X [3] <176320) goto node11 ; else goto node12 ; 
node11: return -57.2241325 ;
node12: return 362.191986 ;
node6: if (X [1] <151) goto node13 ; else goto node14 ; 
node13: return 44.1087151 ;
node14: return -11.5936813 ;
}
////////////////// TREE_91
float tree90 ( float X[] ) {
node0: if (X [3] <180425) goto node1 ; else goto node2 ; 
node1: if (X [3] <170800) goto node3 ; else goto node4 ; 
node3: if (X [3] <166986) goto node7 ; else goto node8 ; 
node7: return 0.778414607 ;
node8: return -190.213013 ;
node4: if (X [1] <140) goto node9 ; else goto node10 ; 
node9: return -20.4592686 ;
node10: return 216.469971 ;
node2: if (X [3] <184913) goto node5 ; else goto node6 ; 
node5: if (X [1] <70) goto node11 ; else goto node12 ; 
node11: return 78.9511261 ;
node12: return -192.829712 ;
node6: if (X [1] <117) goto node13 ; else goto node14 ; 
node13: return -108.162437 ;
node14: return 35.4820061 ;
}
////////////////// TREE_92
float tree91 ( float X[] ) {
node0: if (X [1] <69) goto node1 ; else goto node2 ; 
node1: if (X [3] <46099) goto node3 ; else goto node4 ; 
node3: if (X [3] <42952) goto node7 ; else goto node8 ; 
node7: return -86.591835 ;
node8: return 32.2617188 ;
node4: if (X [3] <72922) goto node9 ; else goto node10 ; 
node9: return -216.030075 ;
node10: return -66.4374084 ;
node2: if (X [1] <132) goto node5 ; else goto node6 ; 
node5: if (X [1] <129) goto node11 ; else goto node12 ; 
node11: return -3.06983542 ;
node12: return 79.0784302 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -41.7826614 ;
node14: return 5.23258448 ;
}
////////////////// TREE_93
float tree92 ( float X[] ) {
node0: if (X [1] <301) goto node1 ; else goto node2 ; 
node1: if (X [1] <161) goto node3 ; else goto node4 ; 
node3: if (X [0] <1) goto node7 ; else goto node8 ; 
node7: return -5.48146677 ;
node8: return 23.5907745 ;
node4: if (X [1] <163) goto node9 ; else goto node10 ; 
node9: return -238.822632 ;
node10: return -1.04671955 ;
node2: if (X [3] <70954) goto node5 ; else goto node6 ; 
node5: return -124.448242 ;
node6: if (X [2] <6) goto node11 ; else goto node12 ; 
node11: return 184.785919 ;
node12: return 55.6533089 ;
}
////////////////// TREE_94
float tree93 ( float X[] ) {
node0: if (X [3] <204516) goto node1 ; else goto node2 ; 
node1: if (X [1] <208) goto node3 ; else goto node4 ; 
node3: if (X [1] <205) goto node7 ; else goto node8 ; 
node7: return 0.365322322 ;
node8: return -527.168884 ;
node4: if (X [3] <81820) goto node9 ; else goto node10 ; 
node9: return 117.061295 ;
node10: return 10.0133839 ;
node2: if (X [2] <5) goto node5 ; else goto node6 ; 
node5: if (X [1] <125) goto node11 ; else goto node12 ; 
node11: return 501.42038 ;
node12: return -410.606262 ;
node6: if (X [1] <185) goto node13 ; else goto node14 ; 
node13: return -184.811462 ;
node14: return -27.2420044 ;
}
////////////////// TREE_95
float tree94 ( float X[] ) {
node0: if (X [1] <75) goto node1 ; else goto node2 ; 
node1: if (X [1] <71) goto node3 ; else goto node4 ; 
node3: if (X [1] <70) goto node7 ; else goto node8 ; 
node7: return -31.5614758 ;
node8: return 305.705353 ;
node4: if (X [3] <25557) goto node9 ; else goto node10 ; 
node9: return -164.636871 ;
node10: return -36.5087967 ;
node2: if (X [3] <27382) goto node5 ; else goto node6 ; 
node5: if (X [3] <24899) goto node11 ; else goto node12 ; 
node11: return 1.5700525 ;
node12: return 114.341286 ;
node6: if (X [1] <177) goto node13 ; else goto node14 ; 
node13: return -5.298491 ;
node14: return 16.9696388 ;
}
////////////////// TREE_96
float tree95 ( float X[] ) {
node0: if (X [1] <165) goto node1 ; else goto node2 ; 
node1: if (X [1] <163) goto node3 ; else goto node4 ; 
node3: if (X [1] <161) goto node7 ; else goto node8 ; 
node7: return 2.94908571 ;
node8: return -214.622391 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 661.601013 ;
node10: return -82.5194397 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [3] <103348) goto node11 ; else goto node12 ; 
node11: return -265.299591 ;
node12: return 47.2276115 ;
node6: if (X [1] <180) goto node13 ; else goto node14 ; 
node13: return 160.034332 ;
node14: return -3.56926584 ;
}
////////////////// TREE_97
float tree96 ( float X[] ) {
node0: if (X [3] <150030) goto node1 ; else goto node2 ; 
node1: if (X [3] <148655) goto node3 ; else goto node4 ; 
node3: if (X [1] <259) goto node7 ; else goto node8 ; 
node7: return 0.382477015 ;
node8: return 68.8808517 ;
node4: if (X [1] <230) goto node9 ; else goto node10 ; 
node9: return 161.983917 ;
node10: return -297.088562 ;
node2: if (X [3] <151250) goto node5 ; else goto node6 ; 
node5: if (X [1] <131) goto node11 ; else goto node12 ; 
node11: return -33.9357567 ;
node12: return -273.22934 ;
node6: if (X [1] <211) goto node13 ; else goto node14 ; 
node13: return -25.802412 ;
node14: return 90.105072 ;
}
////////////////// TREE_98
float tree97 ( float X[] ) {
node0: if (X [1] <165) goto node1 ; else goto node2 ; 
node1: if (X [1] <163) goto node3 ; else goto node4 ; 
node3: if (X [1] <161) goto node7 ; else goto node8 ; 
node7: return 2.73409438 ;
node8: return -193.553177 ;
node4: if (X [0] <1) goto node9 ; else goto node10 ; 
node9: return 598.712463 ;
node10: return -74.4410706 ;
node2: if (X [1] <177) goto node5 ; else goto node6 ; 
node5: if (X [3] <103348) goto node11 ; else goto node12 ; 
node11: return -239.15654 ;
node12: return 44.0186729 ;
node6: if (X [1] <180) goto node13 ; else goto node14 ; 
node13: return 144.319901 ;
node14: return -3.80281615 ;
}
////////////////// TREE_99
float tree98 ( float X[] ) {
node0: if (X [0] <1) goto node1 ; else goto node2 ; 
node1: if (X [1] <195) goto node3 ; else goto node4 ; 
node3: if (X [1] <192) goto node7 ; else goto node8 ; 
node7: return -4.42875814 ;
node8: return -273.451355 ;
node4: if (X [3] <81820) goto node9 ; else goto node10 ; 
node9: return 232.291916 ;
node10: return 24.251173 ;
node2: if (X [1] <140) goto node5 ; else goto node6 ; 
node5: if (X [1] <121) goto node11 ; else goto node12 ; 
node11: return -5.4734745 ;
node12: return 84.6651611 ;
node6: if (X [1] <150) goto node13 ; else goto node14 ; 
node13: return -154.29541 ;
node14: return 2.2159543 ;
}
////////////////// TREE_100
float tree99 ( float X[] ) {
node0: if (X [1] <69) goto node1 ; else goto node2 ; 
node1: if (X [3] <46099) goto node3 ; else goto node4 ; 
node3: if (X [3] <37050) goto node7 ; else goto node8 ; 
node7: return -78.5932541 ;
node8: return 24.4052467 ;
node4: if (X [3] <72922) goto node9 ; else goto node10 ; 
node9: return -199.292053 ;
node10: return -57.1261787 ;
node2: if (X [3] <13090) goto node5 ; else goto node6 ; 
node5: if (X [1] <72) goto node11 ; else goto node12 ; 
node11: return 173.138168 ;
node12: return 22.6889133 ;
node6: if (X [3] <17711) goto node13 ; else goto node14 ; 
node13: return -44.9029808 ;
node14: return 0.756273568 ;
}
/////////////////// XGBpredict
float XGBpred(float X[]){
float out = 0;
out= tree0(X)+out;
out= tree1(X)+out;
out= tree2(X)+out;
out= tree3(X)+out;
out= tree4(X)+out;
out= tree5(X)+out;
out= tree6(X)+out;
out= tree7(X)+out;
out= tree8(X)+out;
out= tree9(X)+out;
out= tree10(X)+out;
out= tree11(X)+out;
out= tree12(X)+out;
out= tree13(X)+out;
out= tree14(X)+out;
out= tree15(X)+out;
out= tree16(X)+out;
out= tree17(X)+out;
out= tree18(X)+out;
out= tree19(X)+out;
out= tree20(X)+out;
out= tree21(X)+out;
out= tree22(X)+out;
out= tree23(X)+out;
out= tree24(X)+out;
out= tree25(X)+out;
out= tree26(X)+out;
out= tree27(X)+out;
out= tree28(X)+out;
out= tree29(X)+out;
out= tree30(X)+out;
out= tree31(X)+out;
out= tree32(X)+out;
out= tree33(X)+out;
out= tree34(X)+out;
out= tree35(X)+out;
out= tree36(X)+out;
out= tree37(X)+out;
out= tree38(X)+out;
out= tree39(X)+out;
out= tree40(X)+out;
out= tree41(X)+out;
out= tree42(X)+out;
out= tree43(X)+out;
out= tree44(X)+out;
out= tree45(X)+out;
out= tree46(X)+out;
out= tree47(X)+out;
out= tree48(X)+out;
out= tree49(X)+out;
out= tree50(X)+out;
out= tree51(X)+out;
out= tree52(X)+out;
out= tree53(X)+out;
out= tree54(X)+out;
out= tree55(X)+out;
out= tree56(X)+out;
out= tree57(X)+out;
out= tree58(X)+out;
out= tree59(X)+out;
out= tree60(X)+out;
out= tree61(X)+out;
out= tree62(X)+out;
out= tree63(X)+out;
out= tree64(X)+out;
out= tree65(X)+out;
out= tree66(X)+out;
out= tree67(X)+out;
out= tree68(X)+out;
out= tree69(X)+out;
out= tree70(X)+out;
out= tree71(X)+out;
out= tree72(X)+out;
out= tree73(X)+out;
out= tree74(X)+out;
out= tree75(X)+out;
out= tree76(X)+out;
out= tree77(X)+out;
out= tree78(X)+out;
out= tree79(X)+out;
out= tree80(X)+out;
out= tree81(X)+out;
out= tree82(X)+out;
out= tree83(X)+out;
out= tree84(X)+out;
out= tree85(X)+out;
out= tree86(X)+out;
out= tree87(X)+out;
out= tree88(X)+out;
out= tree89(X)+out;
out= tree90(X)+out;
out= tree91(X)+out;
out= tree92(X)+out;
out= tree93(X)+out;
out= tree94(X)+out;
out= tree95(X)+out;
out= tree96(X)+out;
out= tree97(X)+out;
out= tree98(X)+out;
out= tree99(X)+out;

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
