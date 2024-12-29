

const int Nv = 10;
const int dimX = 4;

/////// Xy ////// 
const float X [] PROGMEM  = {0.0, 116.0, 6.0, 86802.0, 0.0, 120.0, 6.0, 30707.0, 0.0, 95.0, 6.0, 51915.0, 0.0, 110.0, 6.0, 44972.0, 0.0, 125.0, 6.0, 85500.0, 1.0, 176.0, 6.0, 98918.0, 1.0, 190.0, 6.0, 69119.0, 1.0, 131.0, 6.0, 38157.0, 1.0, 150.0, 6.0, 112374.0, 1.0, 150.0, 6.0, 93524.0};

const float y[] PROGMEM  = {19870.972222222223, 26722.962962962964, 16522.85714285714, 18817.560975609755, 17535.555555555555, 17620.0, 35083.11111111111, 32269.53488372093, 23814.67213114754, 31409.130434782608};



////////////////// TREE
float DecisionTreeReg ( float X[] ) {
if ( X[1] <= 127.5 ) {
if ( X[1] <= 90.5 ) {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 146700.0 ) {
if ( X[2] <= 4.5 ) {
if ( X[3] <= 105865.0 ) {
if ( X[3] <= 92399.0 ) {
if ( X[3] <= 85367.0 ) {
return 10060.;
} else {
return 10690.;
}
} else {
return 8360.;
}
} else {
if ( X[1] <= 64.0 ) {
if ( X[3] <= 120683.0 ) {
return 7050.;
} else {
return 7760.;
}
} else {
if ( X[1] <= 68.5 ) {
return 5070.;
} else {
if ( X[3] <= 136245.5 ) {
return 6310.;
} else {
return 6500.;
}
}
}
}
} else {
if ( X[3] <= 49316.0 ) {
if ( X[3] <= 36978.0 ) {
if ( X[3] <= 22020.5 ) {
return 11220.;
} else {
if ( X[0] <= 0.5 ) {
return 11740.;
} else {
return 11480.;
}
}
} else {
return 15840.;
}
} else {
if ( X[1] <= 88.5 ) {
if ( X[1] <= 72.0 ) {
if ( X[3] <= 113267.0 ) {
if ( X[3] <= 66373.5 ) {
return 11950.;
} else {
return 10436.66666667;
}
} else {
if ( X[3] <= 119126.0 ) {
return 11860.;
} else {
return 12260.;
}
}
} else {
if ( X[1] <= 77.5 ) {
if ( X[3] <= 129949.5 ) {
return 8796.47058824;
} else {
return 9356.15384615;
}
} else {
if ( X[3] <= 139858.5 ) {
return 9775.;
} else {
return 12160.;
}
}
}
} else {
if ( X[3] <= 145843.5 ) {
if ( X[3] <= 65518.0 ) {
if ( X[3] <= 63472.5 ) {
return 10720.;
} else {
return 12545.;
}
} else {
if ( X[3] <= 122965.5 ) {
return 10206.36363636;
} else {
return 10928.75;
}
}
} else {
return 13080.;
}
}
}
}
} else {
if ( X[2] <= 4.5 ) {
if ( X[1] <= 83.0 ) {
if ( X[3] <= 170346.5 ) {
if ( X[3] <= 155070.0 ) {
return 5400.;
} else {
return 5870.;
}
} else {
return 4910.;
}
} else {
if ( X[3] <= 156663.5 ) {
return 7000.;
} else {
return 7120.;
}
}
} else {
if ( X[1] <= 86.0 ) {
if ( X[1] <= 72.0 ) {
if ( X[3] <= 172434.0 ) {
if ( X[3] <= 156100.0 ) {
if ( X[3] <= 148400.0 ) {
return 6290.;
} else {
return 6470.;
}
} else {
if ( X[3] <= 161000.0 ) {
return 6830.;
} else {
return 6950.;
}
}
} else {
return 7860.;
}
} else {
if ( X[3] <= 154000.5 ) {
return 9820.;
} else {
if ( X[3] <= 191606.0 ) {
if ( X[3] <= 182932.5 ) {
return 7323.75;
} else {
return 9340.;
}
} else {
return 5980.;
}
}
}
} else {
if ( X[3] <= 170529.0 ) {
if ( X[3] <= 152141.0 ) {
return 9870.;
} else {
return 10410.;
}
} else {
if ( X[3] <= 193289.5 ) {
return 7290.;
} else {
if ( X[3] <= 205164.5 ) {
return 8410.;
} else {
if ( X[3] <= 210359.5 ) {
return 8220.;
} else {
return 8360.;
}
}
}
}
}
}
}
} else {
if ( X[3] <= 17092.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 1852.5 ) {
if ( X[3] <= 34.0 ) {
return 24130.;
} else {
if ( X[3] <= 59.0 ) {
return 18380.;
} else {
return 21760.;
}
}
} else {
if ( X[1] <= 69.5 ) {
if ( X[1] <= 68.0 ) {
return 15360.;
} else {
if ( X[3] <= 16009.5 ) {
return 10980.;
} else {
return 12120.;
}
}
} else {
if ( X[1] <= 71.5 ) {
if ( X[3] <= 15100.5 ) {
if ( X[3] <= 14323.0 ) {
return 18633.33333333;
} else {
return 19495.;
}
} else {
if ( X[3] <= 15779.5 ) {
return 21230.;
} else {
return 20380.;
}
}
} else {
if ( X[1] <= 74.0 ) {
if ( X[1] <= 72.5 ) {
return 14025.;
} else {
return 12835.;
}
} else {
if ( X[3] <= 5535.0 ) {
return 14806.;
} else {
return 17428.21428571;
}
}
}
}
}
} else {
if ( X[3] <= 15058.5 ) {
if ( X[3] <= 12106.5 ) {
if ( X[3] <= 8456.0 ) {
if ( X[3] <= 6007.5 ) {
if ( X[3] <= 5269.0 ) {
return 19580.;
} else {
return 21740.;
}
} else {
return 17730.;
}
} else {
return 22760.;
}
} else {
if ( X[1] <= 77.5 ) {
return 16060.;
} else {
if ( X[3] <= 14130.0 ) {
return 19360.;
} else {
if ( X[3] <= 14803.0 ) {
return 20570.;
} else {
return 21260.;
}
}
}
}
} else {
if ( X[3] <= 15424.0 ) {
return 14800.;
} else {
if ( X[3] <= 15981.0 ) {
return 17900.;
} else {
return 18360.;
}
}
}
}
} else {
if ( X[3] <= 96367.0 ) {
if ( X[1] <= 74.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 24521.0 ) {
if ( X[3] <= 19253.5 ) {
if ( X[3] <= 17325.5 ) {
return 11520.;
} else {
return 13813.33333333;
}
} else {
if ( X[3] <= 20168.5 ) {
return 10130.;
} else {
return 11376.25;
}
}
} else {
if ( X[3] <= 24700.5 ) {
return 21400.;
} else {
if ( X[3] <= 65652.0 ) {
return 13349.74358974;
} else {
return 11476.66666667;
}
}
}
} else {
if ( X[3] <= 40792.0 ) {
if ( X[3] <= 22952.5 ) {
return 14150.;
} else {
if ( X[1] <= 70.5 ) {
return 15880.;
} else {
return 15303.33333333;
}
}
} else {
if ( X[3] <= 69924.5 ) {
if ( X[3] <= 56152.5 ) {
return 17680.;
} else {
return 17240.;
}
} else {
return 17820.;
}
}
}
} else {
if ( X[3] <= 50094.0 ) {
if ( X[1] <= 88.5 ) {
if ( X[3] <= 22816.5 ) {
if ( X[3] <= 20877.5 ) {
return 17215.;
} else {
return 19030.;
}
} else {
if ( X[1] <= 75.5 ) {
return 14932.30769231;
} else {
return 16607.8125;
}
}
} else {
if ( X[3] <= 23105.5 ) {
if ( X[3] <= 21550.5 ) {
return 12570.;
} else {
return 13592.;
}
} else {
if ( X[3] <= 23308.0 ) {
return 20440.;
} else {
return 15194.86486486;
}
}
}
} else {
if ( X[3] <= 78522.0 ) {
if ( X[1] <= 88.0 ) {
if ( X[3] <= 61012.5 ) {
return 16369.23076923;
} else {
return 13796.;
}
} else {
if ( X[3] <= 59125.5 ) {
return 13564.375;
} else {
return 14622.85714286;
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 86.0 ) {
return 12392.22222222;
} else {
return 13801.11111111;
}
} else {
if ( X[3] <= 88375.5 ) {
return 15520.;
} else {
return 18280.;
}
}
}
}
}
} else {
if ( X[3] <= 168455.0 ) {
if ( X[1] <= 86.0 ) {
if ( X[1] <= 74.0 ) {
if ( X[3] <= 102084.5 ) {
if ( X[3] <= 98261.0 ) {
return 10900.;
} else {
return 10140.;
}
} else {
if ( X[3] <= 132906.0 ) {
return 8860.;
} else {
return 9740.;
}
}
} else {
if ( X[3] <= 146631.0 ) {
if ( X[1] <= 78.5 ) {
return 11596.92307692;
} else {
return 9250.;
}
} else {
return 8310.;
}
}
} else {
if ( X[3] <= 101435.0 ) {
if ( X[3] <= 101063.0 ) {
if ( X[3] <= 100701.5 ) {
return 13510.;
} else {
return 11430.;
}
} else {
return 14620.;
}
} else {
if ( X[3] <= 111126.5 ) {
if ( X[3] <= 109993.0 ) {
return 12365.;
} else {
return 10420.;
}
} else {
if ( X[3] <= 136021.5 ) {
return 13122.5;
} else {
return 12242.72727273;
}
}
}
}
} else {
if ( X[1] <= 78.5 ) {
if ( X[3] <= 189763.0 ) {
if ( X[3] <= 178059.5 ) {
return 5230.;
} else {
if ( X[3] <= 181403.0 ) {
return 5380.;
} else {
return 5430.;
}
}
} else {
return 6470.;
}
} else {
return 9180.;
}
}
}
}
}
} else {
if ( X[3] <= 47388.0 ) {
if ( X[1] <= 115.5 ) {
if ( X[3] <= 19083.5 ) {
if ( X[3] <= 18916.5 ) {
if ( X[1] <= 110.5 ) {
if ( X[1] <= 101.5 ) {
if ( X[3] <= 16770.0 ) {
if ( X[3] <= 9161.0 ) {
return 23269.5;
} else {
return 25038.82352941;
}
} else {
if ( X[3] <= 18468.0 ) {
return 18343.63636364;
} else {
return 22960.;
}
}
} else {
if ( X[3] <= 16711.0 ) {
if ( X[3] <= 12897.0 ) {
return 25655.5;
} else {
return 22523.33333333;
}
} else {
if ( X[1] <= 106.0 ) {
return 35962.22222222;
} else {
return 25900.;
}
}
}
} else {
if ( X[1] <= 112.5 ) {
if ( X[3] <= 16403.0 ) {
return 17500.;
} else {
if ( X[0] <= 0.5 ) {
return 19360.;
} else {
return 17976.;
}
}
} else {
if ( X[3] <= 12153.0 ) {
return 21810.;
} else {
return 22010.;
}
}
}
} else {
if ( X[3] <= 19000.5 ) {
return 38060.;
} else {
return 38380.;
}
}
} else {
if ( X[1] <= 97.0 ) {
if ( X[2] <= 5.5 ) {
return 12480.;
} else {
if ( X[3] <= 33057.0 ) {
if ( X[3] <= 30723.5 ) {
if ( X[3] <= 25359.5 ) {
return 20536.66666667;
} else {
return 16711.81818182;
}
} else {
if ( X[3] <= 31598.0 ) {
return 23326.66666667;
} else {
return 20216.;
}
}
} else {
if ( X[3] <= 38299.0 ) {
if ( X[3] <= 35948.0 ) {
return 13407.5;
} else {
return 14430.;
}
} else {
if ( X[3] <= 44423.0 ) {
return 19052.85714286;
} else {
return 20240.;
}
}
}
}
} else {
if ( X[3] <= 37280.5 ) {
if ( X[1] <= 100.5 ) {
if ( X[1] <= 99.5 ) {
if ( X[3] <= 26192.5 ) {
return 24130.;
} else {
return 22305.;
}
} else {
if ( X[3] <= 29013.0 ) {
return 28965.;
} else {
return 25805.;
}
}
} else {
if ( X[3] <= 19439.5 ) {
if ( X[1] <= 111.0 ) {
return 19427.5;
} else {
return 18493.33333333;
}
} else {
if ( X[3] <= 19553.0 ) {
return 32620.;
} else {
return 21522.51908397;
}
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 46015.0 ) {
if ( X[2] <= 5.5 ) {
return 14985.;
} else {
return 18817.56097561;
}
} else {
if ( X[1] <= 106.0 ) {
return 19430.;
} else {
return 22600.;
}
}
} else {
if ( X[3] <= 41945.5 ) {
if ( X[1] <= 111.0 ) {
return 19713.57142857;
} else {
return 21775.;
}
} else {
if ( X[1] <= 107.0 ) {
return 21960.;
} else {
return 24017.5;
}
}
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 42334.0 ) {
if ( X[3] <= 41056.5 ) {
return 16680.;
} else {
return 16830.;
}
} else {
if ( X[3] <= 44889.0 ) {
if ( X[3] <= 43794.0 ) {
return 17730.;
} else {
return 18020.;
}
} else {
return 18620.;
}
}
} else {
if ( X[3] <= 6800.5 ) {
if ( X[3] <= 6077.5 ) {
if ( X[1] <= 119.0 ) {
return 28580.;
} else {
return 30840.;
}
} else {
if ( X[3] <= 6215.0 ) {
return 33390.;
} else {
return 34600.;
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 118.5 ) {
if ( X[3] <= 46651.5 ) {
if ( X[3] <= 18647.0 ) {
return 21890.;
} else {
return 23300.87719298;
}
} else {
if ( X[3] <= 46864.5 ) {
return 15160.;
} else {
return 22715.;
}
}
} else {
if ( X[1] <= 121.5 ) {
if ( X[3] <= 17221.0 ) {
return 23758.18181818;
} else {
return 26722.96296296;
}
} else {
if ( X[3] <= 18618.5 ) {
return 27660.;
} else {
return 21728.125;
}
}
}
} else {
if ( X[3] <= 31360.5 ) {
if ( X[1] <= 118.0 ) {
if ( X[3] <= 28595.5 ) {
return 32968.75;
} else {
return 23200.;
}
} else {
if ( X[3] <= 24979.0 ) {
return 23682.5;
} else {
return 31476.;
}
}
} else {
if ( X[3] <= 35599.0 ) {
if ( X[1] <= 117.0 ) {
return 23391.25;
} else {
return 19490.;
}
} else {
if ( X[3] <= 38625.0 ) {
return 30760.;
} else {
return 24315.5;
}
}
}
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 318255.5 ) {
if ( X[3] <= 111551.0 ) {
if ( X[1] <= 125.5 ) {
if ( X[1] <= 107.5 ) {
if ( X[3] <= 100593.5 ) {
if ( X[3] <= 69135.5 ) {
return 11730.;
} else {
return 11410.;
}
} else {
if ( X[3] <= 107145.5 ) {
return 15680.;
} else {
return 13620.;
}
}
} else {
if ( X[1] <= 116.5 ) {
if ( X[0] <= 0.5 ) {
return 15770.625;
} else {
return 18946.66666667;
}
} else {
if ( X[1] <= 118.5 ) {
return 11413.33333333;
} else {
return 13890.;
}
}
}
} else {
if ( X[3] <= 73051.5 ) {
if ( X[3] <= 65829.5 ) {
if ( X[3] <= 61218.5 ) {
return 17150.;
} else {
return 16860.;
}
} else {
if ( X[3] <= 66454.5 ) {
return 19990.;
} else {
return 17517.5;
}
}
} else {
if ( X[3] <= 86055.5 ) {
if ( X[3] <= 83619.0 ) {
return 19000.;
} else {
return 17645.;
}
} else {
if ( X[3] <= 87761.5 ) {
return 20250.;
} else {
return 21430.;
}
}
}
}
} else {
if ( X[3] <= 165793.0 ) {
if ( X[1] <= 113.0 ) {
if ( X[1] <= 96.5 ) {
if ( X[3] <= 119707.0 ) {
return 17840.;
} else {
return 12083.33333333;
}
} else {
if ( X[3] <= 155181.5 ) {
return 11248.07692308;
} else {
return 13492.5;
}
}
} else {
if ( X[1] <= 123.5 ) {
if ( X[3] <= 127307.5 ) {
return 14659.09090909;
} else {
return 13468.8;
}
} else {
if ( X[3] <= 135625.0 ) {
return 10580.;
} else {
return 10870.;
}
}
}
} else {
if ( X[3] <= 261736.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 234954.0 ) {
return 9085.55555556;
} else {
return 11472.85714286;
}
} else {
return 15880.;
}
} else {
if ( X[3] <= 284694.5 ) {
if ( X[3] <= 276104.5 ) {
return 6610.;
} else {
return 6820.;
}
} else {
if ( X[3] <= 292057.0 ) {
return 7060.;
} else {
return 7180.;
}
}
}
}
}
} else {
if ( X[3] <= 354000.0 ) {
return 27240.;
} else {
if ( X[3] <= 370500.0 ) {
return 29150.;
} else {
return 29870.;
}
}
}
} else {
if ( X[1] <= 114.5 ) {
if ( X[3] <= 86937.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 99.5 ) {
if ( X[3] <= 82009.0 ) {
if ( X[3] <= 80099.5 ) {
return 16522.85714286;
} else {
return 10840.;
}
} else {
if ( X[3] <= 84887.5 ) {
return 20400.;
} else {
return 19980.;
}
}
} else {
if ( X[1] <= 111.0 ) {
if ( X[3] <= 69274.0 ) {
return 19272.5974026;
} else {
return 17609.81481481;
}
} else {
if ( X[3] <= 47957.0 ) {
return 21145.;
} else {
return 15700.55555556;
}
}
}
} else {
if ( X[1] <= 98.0 ) {
if ( X[3] <= 75936.5 ) {
if ( X[3] <= 72008.5 ) {
return 18866.;
} else {
return 22980.;
}
} else {
if ( X[3] <= 81992.0 ) {
return 17340.;
} else {
return 18486.66666667;
}
}
} else {
if ( X[3] <= 71372.0 ) {
if ( X[1] <= 113.0 ) {
return 20241.81818182;
} else {
return 24275.;
}
} else {
if ( X[3] <= 75086.0 ) {
return 26893.33333333;
} else {
return 21375.;
}
}
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 145690.5 ) {
if ( X[3] <= 134525.5 ) {
if ( X[1] <= 103.5 ) {
return 14745.;
} else {
return 15828.92857143;
}
} else {
if ( X[3] <= 138774.5 ) {
return 23603.33333333;
} else {
return 17042.5;
}
}
} else {
if ( X[1] <= 105.5 ) {
if ( X[3] <= 167376.0 ) {
return 12416.;
} else {
return 6600.;
}
} else {
if ( X[3] <= 153168.0 ) {
return 13215.;
} else {
return 16628.;
}
}
}
} else {
if ( X[3] <= 114325.0 ) {
if ( X[1] <= 109.5 ) {
if ( X[3] <= 94350.5 ) {
return 19390.;
} else {
return 23343.33333333;
}
} else {
if ( X[3] <= 89609.0 ) {
return 16710.;
} else {
return 18347.5;
}
}
} else {
if ( X[1] <= 102.0 ) {
return 10680.;
} else {
if ( X[3] <= 115822.0 ) {
return 14810.;
} else {
return 16845.;
}
}
}
}
}
} else {
if ( X[3] <= 96267.5 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 79259.0 ) {
if ( X[3] <= 56585.0 ) {
if ( X[3] <= 55871.0 ) {
return 20073.02325581;
} else {
return 17626.66666667;
}
} else {
if ( X[3] <= 56797.0 ) {
return 28030.;
} else {
return 20764.25373134;
}
}
} else {
if ( X[3] <= 79910.5 ) {
if ( X[1] <= 118.0 ) {
return 15380.;
} else {
return 16410.;
}
} else {
if ( X[1] <= 123.5 ) {
return 19870.97222222;
} else {
return 17535.55555556;
}
}
}
} else {
if ( X[1] <= 116.5 ) {
if ( X[3] <= 60062.0 ) {
if ( X[3] <= 58732.0 ) {
return 26415.;
} else {
return 36610.;
}
} else {
if ( X[3] <= 92137.0 ) {
return 23875.71428571;
} else {
return 27476.66666667;
}
}
} else {
if ( X[1] <= 120.5 ) {
if ( X[3] <= 72792.0 ) {
return 22962.22222222;
} else {
return 19955.9375;
}
} else {
if ( X[3] <= 51440.5 ) {
return 27425.;
} else {
return 24022.22222222;
}
}
}
}
} else {
if ( X[1] <= 123.5 ) {
if ( X[1] <= 117.0 ) {
if ( X[3] <= 120721.0 ) {
if ( X[3] <= 99505.0 ) {
return 16956.66666667;
} else {
return 20064.75;
}
} else {
if ( X[3] <= 121008.5 ) {
return 13720.;
} else {
return 18131.31578947;
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 151865.0 ) {
return 15991.57894737;
} else {
return 13575.71428571;
}
} else {
if ( X[3] <= 98616.0 ) {
return 34030.;
} else {
return 18203.68421053;
}
}
}
} else {
if ( X[3] <= 146199.5 ) {
if ( X[3] <= 129360.0 ) {
return 24150.;
} else {
if ( X[3] <= 139020.0 ) {
return 28330.;
} else {
return 29140.;
}
}
} else {
if ( X[3] <= 157295.0 ) {
return 31300.;
} else {
return 33730.;
}
}
}
}
}
}
}
}
} else {
if ( X[1] <= 176.5 ) {
if ( X[3] <= 84857.5 ) {
if ( X[1] <= 148.0 ) {
if ( X[1] <= 138.0 ) {
if ( X[3] <= 49531.5 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 15584.5 ) {
if ( X[3] <= 12322.0 ) {
if ( X[3] <= 10858.0 ) {
return 31602.22222222;
} else {
return 23700.;
}
} else {
if ( X[1] <= 131.0 ) {
return 38065.;
} else {
return 31260.;
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 46289.5 ) {
return 22340.;
} else {
return 24133.33333333;
}
} else {
if ( X[3] <= 48102.5 ) {
return 27565.93220339;
} else {
return 38560.;
}
}
}
} else {
if ( X[3] <= 40704.5 ) {
if ( X[3] <= 40421.5 ) {
if ( X[3] <= 39858.0 ) {
return 32269.53488372;
} else {
return 26980.;
}
} else {
if ( X[3] <= 40571.0 ) {
return 35380.;
} else {
return 39080.;
}
}
} else {
if ( X[1] <= 130.5 ) {
if ( X[3] <= 42325.5 ) {
return 37840.;
} else {
return 37390.;
}
} else {
if ( X[3] <= 49464.5 ) {
return 28365.58823529;
} else {
return 38480.;
}
}
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 63391.0 ) {
if ( X[3] <= 50554.5 ) {
if ( X[3] <= 50088.0 ) {
return 23780.;
} else {
return 13060.;
}
} else {
if ( X[1] <= 130.5 ) {
return 20516.66666667;
} else {
return 25924.33333333;
}
}
} else {
if ( X[3] <= 84298.5 ) {
if ( X[3] <= 82892.0 ) {
return 21398.07692308;
} else {
return 17446.66666667;
}
} else {
return 33750.;
}
}
} else {
if ( X[3] <= 69944.5 ) {
if ( X[3] <= 49704.5 ) {
return 18630.;
} else {
if ( X[3] <= 63569.5 ) {
return 27948.27586207;
} else {
return 30066.875;
}
}
} else {
if ( X[3] <= 84056.5 ) {
if ( X[3] <= 70725.5 ) {
return 18270.;
} else {
return 25452.;
}
} else {
if ( X[3] <= 84317.0 ) {
return 37180.;
} else {
return 32310.;
}
}
}
}
}
} else {
if ( X[3] <= 31327.0 ) {
if ( X[1] <= 144.0 ) {
if ( X[3] <= 29183.0 ) {
if ( X[3] <= 20853.0 ) {
if ( X[3] <= 16160.0 ) {
return 35900.;
} else {
return 32850.;
}
} else {
if ( X[3] <= 24698.0 ) {
return 20720.;
} else {
return 28805.;
}
}
} else {
return 39840.;
}
} else {
if ( X[3] <= 23014.0 ) {
if ( X[3] <= 11843.0 ) {
return 21590.;
} else {
if ( X[3] <= 15824.0 ) {
return 25250.;
} else {
return 23570.;
}
}
} else {
if ( X[3] <= 27175.5 ) {
return 21580.;
} else {
return 19410.;
}
}
}
} else {
if ( X[3] <= 57654.0 ) {
if ( X[1] <= 143.5 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 44469.0 ) {
return 24779.16666667;
} else {
return 21802.22222222;
}
} else {
if ( X[2] <= 5.5 ) {
return 17903.33333333;
} else {
return 28643.57142857;
}
}
} else {
if ( X[3] <= 46811.0 ) {
if ( X[3] <= 37862.5 ) {
return 18814.54545455;
} else {
return 20542.30769231;
}
} else {
if ( X[3] <= 50517.5 ) {
return 21880.;
} else {
return 23834.;
}
}
}
} else {
if ( X[1] <= 140.5 ) {
if ( X[3] <= 82603.0 ) {
if ( X[3] <= 75238.0 ) {
return 20116.5;
} else {
return 18666.15384615;
}
} else {
if ( X[0] <= 0.5 ) {
return 19870.;
} else {
return 21128.;
}
}
} else {
if ( X[1] <= 144.5 ) {
if ( X[2] <= 5.5 ) {
return 20110.;
} else {
return 23291.36363636;
}
} else {
if ( X[3] <= 67427.0 ) {
return 19557.14285714;
} else {
return 21415.55555556;
}
}
}
}
}
}
} else {
if ( X[1] <= 159.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 78872.0 ) {
if ( X[1] <= 155.5 ) {
if ( X[3] <= 12818.0 ) {
return 39720.;
} else {
if ( X[1] <= 150.5 ) {
return 29570.95890411;
} else {
return 26423.75;
}
}
} else {
if ( X[3] <= 51712.0 ) {
return 39850.;
} else {
return 35580.;
}
}
} else {
if ( X[3] <= 79039.0 ) {
return 19380.;
} else {
if ( X[3] <= 79105.0 ) {
return 31850.;
} else {
if ( X[3] <= 79127.5 ) {
return 17460.;
} else {
return 27176.;
}
}
}
}
} else {
if ( X[3] <= 47042.5 ) {
if ( X[3] <= 38234.5 ) {
if ( X[3] <= 26901.5 ) {
if ( X[3] <= 22943.5 ) {
return 32697.22222222;
} else {
return 34978.;
}
} else {
if ( X[3] <= 31017.0 ) {
return 29433.75;
} else {
return 31603.88888889;
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 42412.5 ) {
return 33770.;
} else {
return 37490.;
}
} else {
if ( X[3] <= 44194.5 ) {
return 34797.64705882;
} else {
return 32314.44444444;
}
}
}
} else {
if ( X[1] <= 151.0 ) {
if ( X[3] <= 71318.0 ) {
if ( X[3] <= 59492.0 ) {
return 31082.85714286;
} else {
return 33467.61904762;
}
} else {
if ( X[2] <= 5.5 ) {
return 17360.;
} else {
return 30740.34482759;
}
}
} else {
if ( X[1] <= 153.5 ) {
if ( X[3] <= 62057.5 ) {
return 26022.5;
} else {
return 27040.;
}
} else {
if ( X[3] <= 58751.0 ) {
return 28980.;
} else {
return 33740.;
}
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 160.5 ) {
if ( X[3] <= 65534.5 ) {
if ( X[3] <= 61765.0 ) {
return 18260.;
} else {
return 18790.;
}
} else {
if ( X[3] <= 69884.0 ) {
return 20530.;
} else {
return 21400.;
}
}
} else {
return 13270.;
}
} else {
if ( X[3] <= 80590.5 ) {
if ( X[3] <= 79151.5 ) {
return 21240.;
} else {
return 21630.;
}
} else {
if ( X[3] <= 82389.5 ) {
return 22020.;
} else {
return 22600.;
}
}
}
} else {
if ( X[3] <= 80464.0 ) {
if ( X[1] <= 162.0 ) {
if ( X[3] <= 71520.5 ) {
if ( X[1] <= 160.5 ) {
return 27247.85714286;
} else {
return 22566.;
}
} else {
if ( X[3] <= 72132.0 ) {
return 37420.;
} else {
return 31301.66666667;
}
}
} else {
if ( X[1] <= 164.0 ) {
if ( X[3] <= 44864.0 ) {
return 35553.75;
} else {
return 31795.55555556;
}
} else {
if ( X[3] <= 71626.5 ) {
return 27314.47368421;
} else {
return 18347.5;
}
}
}
} else {
if ( X[3] <= 83150.5 ) {
if ( X[1] <= 166.5 ) {
if ( X[3] <= 80964.0 ) {
return 37740.;
} else {
return 38033.33333333;
}
} else {
return 38480.;
}
} else {
if ( X[3] <= 84038.5 ) {
return 39020.;
} else {
return 39660.;
}
}
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[1] <= 143.5 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 95263.5 ) {
if ( X[3] <= 91878.0 ) {
if ( X[3] <= 87937.5 ) {
return 20380.;
} else {
if ( X[1] <= 141.5 ) {
return 16660.;
} else {
return 13910.;
}
}
} else {
return 25390.;
}
} else {
if ( X[2] <= 4.5 ) {
if ( X[3] <= 225502.5 ) {
if ( X[1] <= 133.5 ) {
return 7230.;
} else {
return 7310.;
}
} else {
return 7520.;
}
} else {
if ( X[3] <= 167114.5 ) {
if ( X[1] <= 135.5 ) {
return 11261.66666667;
} else {
return 13561.37931034;
}
} else {
if ( X[1] <= 138.0 ) {
return 15470.;
} else {
return 20195.;
}
}
}
}
} else {
if ( X[2] <= 4.5 ) {
if ( X[3] <= 120051.5 ) {
if ( X[3] <= 116550.0 ) {
return 24130.;
} else {
return 24760.;
}
} else {
if ( X[3] <= 123052.5 ) {
return 25600.;
} else {
return 26020.;
}
}
} else {
if ( X[1] <= 134.0 ) {
if ( X[3] <= 104810.5 ) {
return 13540.;
} else {
return 14260.;
}
} else {
if ( X[3] <= 120483.5 ) {
if ( X[3] <= 116273.0 ) {
return 20480.;
} else {
return 24960.;
}
} else {
if ( X[3] <= 157650.5 ) {
return 19530.;
} else {
return 17000.;
}
}
}
}
}
} else {
if ( X[1] <= 147.0 ) {
if ( X[3] <= 181912.5 ) {
return 25870.;
} else {
if ( X[3] <= 187425.0 ) {
return 27020.;
} else {
if ( X[3] <= 192150.0 ) {
if ( X[3] <= 189787.5 ) {
return 27480.;
} else {
return 27700.;
}
} else {
return 28160.;
}
}
}
} else {
if ( X[3] <= 157857.5 ) {
if ( X[1] <= 172.5 ) {
if ( X[1] <= 170.5 ) {
if ( X[1] <= 151.0 ) {
return 23044.07407407;
} else {
return 18648.18181818;
}
} else {
return 37800.;
}
} else {
if ( X[3] <= 134289.5 ) {
if ( X[3] <= 107953.5 ) {
return 15240.;
} else {
return 17200.;
}
} else {
return 8910.;
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 162.5 ) {
if ( X[3] <= 177712.0 ) {
return 14050.;
} else {
return 15796.66666667;
}
} else {
if ( X[3] <= 174939.0 ) {
return 9760.;
} else {
return 10180.;
}
}
} else {
if ( X[3] <= 161282.5 ) {
return 16880.;
} else {
if ( X[3] <= 169192.0 ) {
return 22770.;
} else {
return 18120.;
}
}
}
}
}
}
} else {
if ( X[0] <= 0.5 ) {
if ( X[1] <= 138.0 ) {
if ( X[1] <= 131.5 ) {
if ( X[1] <= 130.5 ) {
if ( X[3] <= 92223.0 ) {
return 35880.;
} else {
if ( X[3] <= 98791.0 ) {
return 27960.;
} else {
return 22837.14285714;
}
}
} else {
if ( X[3] <= 137327.5 ) {
if ( X[3] <= 134781.5 ) {
return 21165.86206897;
} else {
return 26100.;
}
} else {
if ( X[3] <= 154003.5 ) {
return 13764.;
} else {
return 17790.;
}
}
}
} else {
if ( X[3] <= 88120.0 ) {
if ( X[3] <= 87280.5 ) {
return 22970.;
} else {
return 19370.;
}
} else {
if ( X[3] <= 159663.0 ) {
if ( X[3] <= 139202.5 ) {
return 15910.86956522;
} else {
return 19442.;
}
} else {
return 10330.;
}
}
}
} else {
if ( X[1] <= 155.5 ) {
if ( X[3] <= 140672.5 ) {
if ( X[3] <= 118490.5 ) {
if ( X[3] <= 117509.5 ) {
return 22945.;
} else {
return 16140.;
}
} else {
if ( X[3] <= 136798.0 ) {
return 26275.65217391;
} else {
return 23503.33333333;
}
}
} else {
if ( X[3] <= 151058.0 ) {
if ( X[3] <= 143390.0 ) {
return 19170.;
} else {
return 14646.66666667;
}
} else {
if ( X[1] <= 143.0 ) {
return 20073.33333333;
} else {
return 23521.25;
}
}
}
} else {
if ( X[3] <= 111814.0 ) {
if ( X[1] <= 166.5 ) {
if ( X[3] <= 100656.5 ) {
return 34110.;
} else {
return 34370.;
}
} else {
return 31290.;
}
} else {
if ( X[1] <= 165.5 ) {
if ( X[3] <= 132558.0 ) {
return 14197.14285714;
} else {
return 15701.81818182;
}
} else {
if ( X[3] <= 143170.0 ) {
return 20852.22222222;
} else {
return 16640.;
}
}
}
}
}
} else {
if ( X[3] <= 98756.5 ) {
if ( X[1] <= 173.0 ) {
if ( X[3] <= 87863.0 ) {
if ( X[1] <= 160.0 ) {
if ( X[3] <= 87329.5 ) {
return 26186.66666667;
} else {
return 22475.;
}
} else {
if ( X[3] <= 85156.5 ) {
return 19660.;
} else {
return 18585.;
}
}
} else {
if ( X[1] <= 145.0 ) {
if ( X[1] <= 138.0 ) {
return 25890.47619048;
} else {
return 16966.66666667;
}
} else {
if ( X[1] <= 156.5 ) {
return 31409.13043478;
} else {
return 26823.33333333;
}
}
}
} else {
if ( X[3] <= 93327.5 ) {
return 15730.;
} else {
if ( X[3] <= 96768.0 ) {
return 16780.;
} else {
return 16930.;
}
}
}
} else {
if ( X[3] <= 159031.0 ) {
if ( X[3] <= 158142.5 ) {
if ( X[1] <= 173.0 ) {
if ( X[1] <= 167.5 ) {
return 23814.67213115;
} else {
return 27111.81818182;
}
} else {
if ( X[3] <= 113422.5 ) {
return 17620.;
} else {
return 24903.33333333;
}
}
} else {
return 35280.;
}
} else {
if ( X[3] <= 188542.0 ) {
if ( X[3] <= 173672.0 ) {
if ( X[3] <= 169194.5 ) {
return 21095.45454545;
} else {
return 17000.;
}
} else {
if ( X[3] <= 182425.5 ) {
return 22333.33333333;
} else {
return 24385.;
}
}
} else {
if ( X[3] <= 239104.0 ) {
if ( X[3] <= 191721.0 ) {
return 14960.;
} else {
return 19100.;
}
} else {
return 13070.;
}
}
}
}
}
}
}
} else {
if ( X[3] <= 132516.0 ) {
if ( X[0] <= 0.5 ) {
if ( X[3] <= 23764.0 ) {
if ( X[3] <= 19448.5 ) {
if ( X[1] <= 188.0 ) {
if ( X[3] <= 17274.5 ) {
if ( X[3] <= 16607.5 ) {
if ( X[3] <= 16506.5 ) {
return 31010.;
} else {
return 31300.;
}
} else {
if ( X[3] <= 16761.5 ) {
return 23100.;
} else {
return 31880.;
}
}
} else {
if ( X[3] <= 17965.0 ) {
return 33330.;
} else {
if ( X[3] <= 18579.5 ) {
return 34683.33333333;
} else {
return 35505.;
}
}
}
} else {
if ( X[3] <= 17998.5 ) {
return 23620.;
} else {
return 24300.;
}
}
} else {
if ( X[3] <= 20137.5 ) {
return 18060.;
} else {
if ( X[3] <= 23380.0 ) {
if ( X[3] <= 23286.0 ) {
if ( X[3] <= 23189.5 ) {
return 26357.;
} else {
return 21140.;
}
} else {
return 30960.;
}
} else {
if ( X[3] <= 23501.5 ) {
return 21310.;
} else {
return 21110.;
}
}
}
}
} else {
if ( X[3] <= 114960.0 ) {
if ( X[3] <= 76383.5 ) {
if ( X[3] <= 47752.0 ) {
if ( X[3] <= 44127.0 ) {
if ( X[3] <= 30109.5 ) {
return 32700.;
} else {
return 30782.08333333;
}
} else {
if ( X[1] <= 188.0 ) {
return 32410.;
} else {
return 36180.;
}
}
} else {
if ( X[1] <= 196.0 ) {
if ( X[1] <= 191.0 ) {
return 26740.;
} else {
return 22467.5;
}
} else {
if ( X[1] <= 204.0 ) {
return 33100.;
} else {
return 29836.66666667;
}
}
}
} else {
if ( X[3] <= 84942.0 ) {
if ( X[1] <= 191.0 ) {
if ( X[3] <= 80449.0 ) {
return 38730.;
} else {
return 39780.;
}
} else {
if ( X[3] <= 78897.0 ) {
return 35080.;
} else {
return 32826.66666667;
}
}
} else {
if ( X[3] <= 107679.0 ) {
if ( X[3] <= 92558.5 ) {
return 29021.66666667;
} else {
return 32110.;
}
} else {
if ( X[3] <= 110385.0 ) {
return 34330.;
} else {
return 36223.33333333;
}
}
}
}
} else {
return 13590.;
}
}
} else {
if ( X[3] <= 83037.0 ) {
if ( X[3] <= 48039.0 ) {
if ( X[3] <= 32977.5 ) {
if ( X[1] <= 182.5 ) {
if ( X[3] <= 21738.0 ) {
if ( X[3] <= 19468.0 ) {
return 37370.;
} else {
return 33708.;
}
} else {
if ( X[3] <= 23290.0 ) {
return 37112.5;
} else {
return 38328.33333333;
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 25539.0 ) {
return 31300.;
} else {
return 26930.;
}
} else {
if ( X[1] <= 205.5 ) {
return 33398.33333333;
} else {
return 38790.;
}
}
}
} else {
if ( X[1] <= 182.0 ) {
if ( X[1] <= 179.5 ) {
if ( X[3] <= 37641.5 ) {
return 39550.;
} else {
return 33078.33333333;
}
} else {
if ( X[3] <= 42123.5 ) {
return 31367.85714286;
} else {
return 28370.41666667;
}
}
} else {
if ( X[3] <= 33998.5 ) {
if ( X[1] <= 195.0 ) {
return 31145.;
} else {
return 26600.;
}
} else {
if ( X[1] <= 197.5 ) {
return 35795.;
} else {
return 33495.;
}
}
}
}
} else {
if ( X[3] <= 65398.5 ) {
if ( X[1] <= 267.0 ) {
if ( X[1] <= 207.0 ) {
if ( X[1] <= 191.0 ) {
return 35956.43835616;
} else {
return 33370.83333333;
}
} else {
if ( X[3] <= 48673.0 ) {
return 34780.;
} else {
return 38185.55555556;
}
}
} else {
if ( X[3] <= 57135.5 ) {
return 29950.;
} else {
if ( X[1] <= 301.5 ) {
return 33450.;
} else {
return 31840.;
}
}
}
} else {
if ( X[2] <= 4.5 ) {
return 20810.;
} else {
if ( X[1] <= 187.0 ) {
if ( X[1] <= 180.5 ) {
return 34210.83333333;
} else {
return 28408.57142857;
}
} else {
if ( X[1] <= 202.5 ) {
return 35083.11111111;
} else {
return 31557.27272727;
}
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[1] <= 187.0 ) {
if ( X[3] <= 111708.5 ) {
if ( X[3] <= 107576.0 ) {
return 22180.;
} else {
return 25180.;
}
} else {
if ( X[3] <= 122337.0 ) {
if ( X[3] <= 114733.5 ) {
return 16310.;
} else {
return 17060.;
}
} else {
if ( X[1] <= 180.5 ) {
return 19420.;
} else {
return 22000.;
}
}
}
} else {
if ( X[3] <= 124546.5 ) {
if ( X[3] <= 123537.0 ) {
if ( X[3] <= 117777.0 ) {
return 25456.66666667;
} else {
return 34300.;
}
} else {
return 17910.;
}
} else {
if ( X[3] <= 128848.5 ) {
return 38310.;
} else {
return 36110.;
}
}
}
} else {
if ( X[1] <= 233.0 ) {
if ( X[3] <= 115998.0 ) {
if ( X[3] <= 108461.0 ) {
if ( X[3] <= 83196.5 ) {
return 24870.;
} else {
return 32084.52380952;
}
} else {
if ( X[3] <= 109758.0 ) {
return 36077.5;
} else {
return 33228.0952381;
}
}
} else {
if ( X[3] <= 129196.5 ) {
if ( X[1] <= 187.0 ) {
return 28877.5;
} else {
return 31766.875;
}
} else {
return 37480.;
}
}
} else {
if ( X[3] <= 92517.5 ) {
if ( X[3] <= 89206.5 ) {
if ( X[3] <= 86668.5 ) {
return 32280.;
} else {
return 32725.;
}
} else {
if ( X[1] <= 273.0 ) {
return 34280.;
} else {
return 34960.;
}
}
} else {
if ( X[3] <= 113429.5 ) {
if ( X[3] <= 108761.0 ) {
return 37275.83333333;
} else {
return 38474.;
}
} else {
if ( X[3] <= 119702.0 ) {
return 29695.;
} else {
return 37938.33333333;
}
}
}
}
}
}
}
} else {
if ( X[1] <= 300.5 ) {
if ( X[3] <= 178536.5 ) {
if ( X[3] <= 170816.5 ) {
if ( X[3] <= 166655.5 ) {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 152062.0 ) {
if ( X[1] <= 273.5 ) {
return 21770.;
} else {
return 26736.66666667;
}
} else {
if ( X[1] <= 187.0 ) {
return 19780.;
} else {
return 28150.;
}
}
} else {
if ( X[1] <= 197.0 ) {
if ( X[3] <= 163015.5 ) {
return 26174.76190476;
} else {
return 36610.;
}
} else {
if ( X[3] <= 142836.5 ) {
return 30632.5;
} else {
return 34192.;
}
}
}
} else {
if ( X[0] <= 0.5 ) {
return 11770.;
} else {
return 18790.;
}
}
} else {
if ( X[3] <= 176358.0 ) {
if ( X[3] <= 173123.5 ) {
return 37070.;
} else {
return 36770.;
}
} else {
if ( X[3] <= 177877.5 ) {
return 19620.;
} else {
if ( X[1] <= 248.5 ) {
return 35540.;
} else {
return 35480.;
}
}
}
}
} else {
if ( X[1] <= 207.5 ) {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 187874.5 ) {
if ( X[3] <= 181341.0 ) {
if ( X[3] <= 179574.0 ) {
return 10480.;
} else {
return 10580.;
}
} else {
return 12640.;
}
} else {
if ( X[3] <= 203692.5 ) {
return 19380.;
} else {
return 15930.;
}
}
} else {
if ( X[3] <= 185603.0 ) {
return 23580.;
} else {
if ( X[1] <= 187.0 ) {
return 20550.;
} else {
if ( X[3] <= 195957.5 ) {
return 20740.;
} else {
return 21070.;
}
}
}
}
} else {
if ( X[2] <= 5.5 ) {
if ( X[3] <= 185196.0 ) {
if ( X[3] <= 184868.0 ) {
if ( X[3] <= 182294.0 ) {
return 25180.;
} else {
return 23725.;
}
} else {
return 25900.;
}
} else {
if ( X[3] <= 202768.0 ) {
if ( X[3] <= 191406.0 ) {
return 19040.;
} else {
return 20480.;
}
} else {
if ( X[3] <= 208012.0 ) {
return 21020.;
} else {
return 21986.66666667;
}
}
}
} else {
if ( X[1] <= 234.5 ) {
if ( X[3] <= 212462.0 ) {
if ( X[3] <= 202166.5 ) {
return 23080.;
} else {
return 24473.33333333;
}
} else {
if ( X[3] <= 216206.0 ) {
return 25280.;
} else {
return 25573.33333333;
}
}
} else {
if ( X[3] <= 199218.5 ) {
return 26890.;
} else {
if ( X[3] <= 226540.0 ) {
return 31200.;
} else {
return 33620.;
}
}
}
}
}
}
} else {
if ( X[3] <= 163461.5 ) {
if ( X[3] <= 139715.0 ) {
if ( X[1] <= 320.5 ) {
return 33800.;
} else {
return 31210.;
}
} else {
if ( X[3] <= 149409.0 ) {
if ( X[3] <= 145335.5 ) {
if ( X[3] <= 142385.5 ) {
if ( X[1] <= 307.0 ) {
return 35390.;
} else {
return 35340.;
}
} else {
if ( X[3] <= 143662.5 ) {
return 35710.;
} else {
return 36030.;
}
}
} else {
if ( X[3] <= 146612.5 ) {
return 36890.;
} else {
return 36670.;
}
}
} else {
if ( X[3] <= 155155.5 ) {
return 37940.;
} else {
return 39540.;
}
}
}
} else {
if ( X[3] <= 186157.5 ) {
return 29560.;
} else {
return 34030.;
}
}
}
}
}
}

}




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
yc=DecisionTreeReg(Xi);
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
