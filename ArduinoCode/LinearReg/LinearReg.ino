

const int Nv = 10;
const int dimX = 4;

/////// Xy ////// 
const float X [] PROGMEM  = {0.0, 116.0, 6.0, 86802.0, 0.0, 120.0, 6.0, 30707.0, 0.0, 95.0, 6.0, 51915.0, 0.0, 110.0, 6.0, 44972.0, 0.0, 125.0, 6.0, 85500.0, 1.0, 176.0, 6.0, 98918.0, 1.0, 190.0, 6.0, 69119.0, 1.0, 131.0, 6.0, 38157.0, 1.0, 150.0, 6.0, 112374.0, 1.0, 150.0, 6.0, 93524.0};

const float y[] PROGMEM  = {19074.861328125, 22590.43359375, 18458.25390625, 20624.408203125, 20219.4453125, 29240.26171875, 32525.0, 27160.859375, 25408.60546875, 26429.5546875};




////////////////// Model
const float coef[] PROGMEM = {3661.1865234375, 119.34064483642578, 2962.884521484375, -0.05416186898946762}; 
const float Bias = -7844.6016; 
float LinearReg ( float X[] ) {
float Out=Bias;
for(int j = 0; j<dimX;j++){
    Out+=X[j]*pgm_read_float_near(&coef[j]);
}

return Out;
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
yc=LinearReg(Xi);
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
