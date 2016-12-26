#include "Thermocouple.h"
 
 double Thermocouple::KtypeTemp(double voltage)
 {
  double temp;
  double d0, d1, d2, d3, d4, d5, d6, d7, d8, d9;
  if (isnan(voltage) || voltage < -6.458 || 54.8864 < voltage)
  {
  return (-999);
  }
  else if (-6.458 <= voltage && voltage < -6.45774)
  {
    temp = -270;
  }
  else if (-6.45774 <= voltage && voltage < -5.8914){
    double abs0[70];
    abs0 [0] = -6.45774;
    abs0 [1] = -6.45692;
    abs0 [2] = -6.45592;
    abs0 [3] = -6.45475;
    abs0 [4] = -6.45339;
    abs0 [5] = -6.45183;
    abs0 [6] = -6.45009;
    abs0 [7] = -6.44815;
    abs0 [8] = -6.44600;
    abs0 [9] = -6.44365;
    abs0[10] = -6.44109;
    abs0[11] = -6.43832;
    abs0[12] = -6.43534;
    abs0[13] = -6.43214;
    abs0[14] = -6.42873;
    abs0[15] = -6.42509;
    abs0[16] = -6.42124;
    abs0[17] = -6.41717;
    abs0[18] = -6.41287;
    abs0[19] = -6.40835;
    abs0[20] = -6.40361;
    abs0[21] = -6.39864;
    abs0[22] = -6.39345;
    abs0[23] = -6.38803;
    abs0[24] = -6.38239;
    abs0[25] = -6.37652;
    abs0[26] = -6.37043;
    abs0[27] = -6.36412;
    abs0[28] = -6.35758;
    abs0[29] = -6.35081;
    abs0[30] = -6.34383;
    abs0[31] = -6.33662;
    abs0[32] = -6.32919;
    abs0[33] = -6.32154;
    abs0[34] = -6.31366;
    abs0[35] = -6.30557;
    abs0[36] = -6.29726;
    abs0[37] = -6.28873;
    abs0[38] = -6.27998;
    abs0[39] = -6.27102;
    abs0[40] = -6.26184;
    abs0[41] = -6.25244;
    abs0[42] = -6.24284;
    abs0[43] = -6.23302;
    abs0[44] = -6.22299;
    abs0[45] = -6.21275;
    abs0[46] = -6.20230;
    abs0[47] = -6.19164;
    abs0[48] = -6.18077;
    abs0[49] = -6.16970;
    abs0[50] = -6.15842;
    abs0[51] = -6.14694;
    abs0[52] = -6.13526;
    abs0[53] = -6.12337;
    abs0[54] = -6.11129;
    abs0[55] = -6.09900;
    abs0[56] = -6.08652;
    abs0[57] = -6.07383;
    abs0[58] = -6.06095;
    abs0[59] = -6.04788;
    abs0[60] = -6.03461;
    abs0[61] = -6.02114;
    abs0[62] = -6.00749;
    abs0[63] = -5.99364;
    abs0[64] = -5.97960;
    abs0[65] = -5.96537;
    abs0[66] = -5.95095;
    abs0[67] = -5.93634;
    abs0[68] = -5.92155;
    abs0[69] = -5.90657;
    abs0[70] = -5.89140;

    int i = 0;
    while(voltage>abs0[i]){i++;};
    double a = abs0[i-1];
    double b = abs0[i];
    temp=(-270+i-1)+((voltage - a)/(b - a));        
  }
  // From 500.00 to 00
  else if (-5.8914 <= voltage && voltage < 0)
  {
  d0 = 0;
  d1 = 25.173462;
  d2 = -1.1662878;
  d3 = -1.0833638;
  d4 = -0.8977354;
  d5 = -0.37342377;
  d6 = -0.086632643;
  d7 = -0.010450598;
  d8 = -0.00051920577;
  d9 = 0;
  temp = d0 + d1 * pow(voltage, 1) +
    d2 * pow(voltage, 2) +
    d3 * pow(voltage, 3) +
    d4 * pow(voltage, 4) +
    d5 * pow(voltage, 5) +
    d6 * pow(voltage, 6) +
    d7 * pow(voltage, 7) +
    d8 * pow(voltage, 8) +
    d9 * pow(voltage, 9);
  }
  // From 0 to 500.00
  else if (0 <= voltage && voltage < 20.644)
  {
  d0 = 0;
  d1 = 25.08355;
  d2 = 0.07860106;
  d3 = -0.2503131;
  d4 = 0.0831527;
  d5 = -0.01228034;
  d6 = 0.0009804036;
  d7 = -0.0000441303;
  d8 = 0.000001057734;
  d9 = -0.00000001052755;
  temp = d0 + d1 * pow(voltage, 1) +
    d2 * pow(voltage, 2) +
    d3 * pow(voltage, 3) +
    d4 * pow(voltage, 4) +
    d5 * pow(voltage, 5) +
    d6 * pow(voltage, 6) +
    d7 * pow(voltage, 7) +
    d8 * pow(voltage, 8) +
    d9 * pow(voltage, 9);
  }
  // From 500.00 to 1372.00
  else if (20.644 <= voltage && voltage <= 54.8864)
  {
  d0 = -131.8058;
  d1 = 48.30222;
  d2 = -1.646031;
  d3 = 0.05464731;
  d4 = -0.0009650715;
  d5 = 0.000008802193;
  d6 = -0.0000000311081;

  temp = d0 + d1 * pow(voltage, 1) +
    d2 * pow(voltage, 2) +
    d3 * pow(voltage, 3) +
    d4 * pow(voltage, 4) +
    d5 * pow(voltage, 5) +
    d6 * pow(voltage, 6);
  }
  return(temp);
 }

 double Thermocouple::KtypeVoltage(double input_temp)
{
  double c0, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
  double a0, a1, a2, v0, v1;
  double voltage;
  double temp = input_temp;

  if (isnan(temp) || temp < -270 || 1372 < temp)
  {
  return (-999);
  } else if (-270 <= temp && temp < 0)
  {
  c0 = 0;
  c1 = 0.039450128025;
  c2 = 0.000023622373598;
  c3 = -3.2858906784e-07;
  c4 = -4.9904828777e-09;
  c5 = -6.7509059173e-11;
  c6 = -5.7410327428e-13;
  c7 = -3.1088872894e-15;
  c8 = -1.0451609365e-17;
  c9 = -1.9889266878e-20;
  c10 = -1.6322697486e-23;

  voltage = 1000 * (c0 * pow(temp, 0) +
    c1 * pow(temp, 1) +
    c2 * pow(temp, 2) +
    c3 * pow(temp, 3) +
    c4 * pow(temp, 4) +
    c5 * pow(temp, 5) +
    c6 * pow(temp, 6) +
    c7 * pow(temp, 7) +
    c8 * pow(temp, 8) +
    c9 * pow(temp, 9) +
    c10 * pow(temp, 10));
  }
  else if (0 <= temp && temp <= 1372)
  {
  c0 = -0.017600413686;
  c1 = 0.038921204975;
  c2 = 0.000018558770032;
  c3 = -9.9457592874e-08;
  c4 = 3.1840945719e-10;
  c5 = -5.6072844889e-13;
  c6 = 5.6075059059e-16;
  c7 = -3.2020720003e-19;
  c8 = 9.7151147152e-23;
  c9 = -1.2104721275e-26;
  a0 = 0.1185976;
  a1 = -0.0001183432;
  a2 = 126.9686;

  v0 = (c0 * pow(temp, 0) +
    c1 * pow(temp, 1) +
    c2 * pow(temp, 2) +
    c3 * pow(temp, 3) +
    c4 * pow(temp, 4) +
    c5 * pow(temp, 5) +
    c6 * pow(temp, 6) +
    c7 * pow(temp, 7) +
    c8 * pow(temp, 8) +
    c9 * pow(temp, 9));

  v1 = a0 * exp(a1 * pow(temp - a2, 2));

  voltage = (v0 + v1);
  }
  return (voltage);
}

double  Thermocouple::StypeVoltage(double temp_s)
{
  double C0, C1, C2, C3, C4, C5, C6, C7, C8;
  double volt_s;

  if (isnan(temp_s) ||temp_s < -50 || 1768.1 < temp_s)
  {
    return (-999);
  }

  if (-50 <= temp_s && temp_s < 1064.18)
  {
  C0 = 0;
  C1 = 0.00540313308631;
  C2 = 0.000012593428974;
  C3 = -2.32477968689e-08;
  C4 = 3.22028823036e-11;
  C5 = -3.31465196389e-14;
  C6 = 2.55744251786e-17;
  C7 = -1.25068871393e-20;
  C8 = 2.71443176145e-24;
  volt_s = 1000 * (C0 * pow(temp_s, 0) +
    C1 * pow(temp_s, 1) +
    C2 * pow(temp_s, 2) +
    C3 * pow(temp_s, 3) +
    C4 * pow(temp_s, 4) +
    C5 * pow(temp_s, 5) +
    C6 * pow(temp_s, 6) +
    C7 * pow(temp_s, 7) +
    C8 * pow(temp_s, 8));
  }
  // Dane dla temperatury z przedziaùu 1064.18 C do 1664.5 C
  else if (1064.18 <= temp_s && temp_s < 1664.5)
  {
  C0 = 1.32900444085;
  C1 = 0.00334509311344;
  C2 = 6.54805192818e-06;
  C3 = -1.64856259209e-09;
  C4 = 1.29989605174e-14;
  volt_s = 1000 * (C0 * pow(temp_s, 0) +
    C1 * pow(temp_s, 1) +
    C2 * pow(temp_s, 2) +
    C3 * pow(temp_s, 3) +
    C4 * pow(temp_s, 4));
  }
  else if (1664.5 <= temp_s && temp_s <= 1768.1)
  {
  C0 = 146.628232636;
  C1 = -0.258430516752;
  C2 = 0.000163693574641;
  C3 = -3.30439046987E-08;
  C4 = -9.43223690612E-15;

  volt_s = 1000 * (C0 * pow(temp_s, 0) +
    C1 * pow(temp_s, 1) +
    C2 * pow(temp_s, 2) +
    C3 * pow(temp_s, 3) +
    C4 * pow(temp_s, 4));
  }

  return(volt_s);
}


double Thermocouple::StypeTemp(double volt_s)
{
  double temp_s;
  double D0, D1, D2, D3, D4, D5, D6, D7, D8, D9;

  if (isnan(volt_s) || volt_s < -0.236 || 18.693 < volt_s)
  {
  return(-999);
  }
  if (-0.236 <= volt_s && volt_s < 1.874)
  {
  D0 = 0;
  D1 = 184.94946;
  D2 = -80.0504062;
  D3 = 102.23743;
  D4 = -152.248592;
  D5 = 188.821343;
  D6 = -159.085941;
  D7 = 82.302788;
  D8 = -23.4181944;
  D9 = 2.7978626;
  temp_s = D0 + D1 * pow(volt_s, 1) +
    D2 * pow(volt_s, 2) +
    D3 * pow(volt_s, 3) +
    D4 * pow(volt_s, 4) +
    D5 * pow(volt_s, 5) +
    D6 * pow(volt_s, 6) +
    D7 * pow(volt_s, 7) +
    D8 * pow(volt_s, 8) +
    D9 * pow(volt_s, 9);
  }
  else if (1.874 <= volt_s && volt_s < 11.95)
  {
  D0 = 12.91507177;
  D1 = 146.6298863;
  D2 = -15.34713402;
  D3 = 3.145945973;
  D4 = -0.4163257839;
  D5 = 0.03187963771;
  D6 = -0.0012916375;
  D7 = 0.00002183475087;
  D8 = -1.447379511e-07;
  D9 = 8.211272125e-09;
  temp_s = D0 + D1 * pow(volt_s, 1) +
    D2 * pow(volt_s, 2) +
    D3 * pow(volt_s, 3) +
    D4 * pow(volt_s, 4) +
    D5 * pow(volt_s, 5) +
    D6 * pow(volt_s, 6) +
    D7 * pow(volt_s, 7) +
    D8 * pow(volt_s, 8) +
    D9 * pow(volt_s, 9);
  }
  else if (11.95 <= volt_s && volt_s < 17.536)
  {
  D0 = -80.87801117;
  D1 = 162.1573104;
  D2 = -8.536869453;
  D3 = 0.4719686976;
  D4 = -0.01441693666;
  D5 = 0.000208161889;
  D6 = 0;
  D7 = 0;
  D8 = 0;
  D9 = 0;
  temp_s = D0 + D1 * pow(volt_s, 1) +
    D2 * pow(volt_s, 2) +
    D3 * pow(volt_s, 3) +
    D4 * pow(volt_s, 4) +
    D5 * pow(volt_s, 5) +
    D6 * pow(volt_s, 6) +
    D7 * pow(volt_s, 7) +
    D8 * pow(volt_s, 8) +
    D9 * pow(volt_s, 9);
  }
  else if (17.536 <= volt_s && volt_s <= 18.693)
  {
  D0 = 53338.75126;
  D1 = -12358.92298;
  D2 = 1092.657613;
  D3 = -42.65693686;
  D4 = 0.624720542;
  D5 = 0;
  D6 = 0;
  D7 = 0;
  D8 = 0;
  D9 = 0;

  temp_s = D0 + D1 * pow(volt_s, 1) +
    D2 * pow(volt_s, 2) +
    D3 * pow(volt_s, 3) +
    D4 * pow(volt_s, 4) +
    D5 * pow(volt_s, 5) +
    D6 * pow(volt_s, 6) +
    D7 * pow(volt_s, 7) +
    D8 * pow(volt_s, 8) +
    D9 * pow(volt_s, 9);
  }

  return(temp_s);
}


/*
 * termopara typ j
 */

double Thermocouple::JtypeVoltage(double temp_j)
{
  double volt_j;
  double C0, C1, C2, C3, C4, C5, C6, C7, C8;

  if (isnan(temp_j) || temp_j < -210 || 1200 < temp_j)
  {
  return(-999);
  }

  if (-210 <= temp_j && temp_j < 760)
  {
  C0 = 0;
  C1 = 0.050381187815;
  C2 = 0.00003047583693;
  C3 = -8.568106572E-08;
  C4 = 1.3228195295E-10;
  C5 = -1.7052958337E-13;
  C6 = 2.0948090697E-16;
  C7 = -1.2538395336E-19;
  C8 = 1.5631725697E-23;
  volt_j = 1000 * (
    C0 * pow(temp_j, 0) +
    C1 * pow(temp_j, 1) +
    C2 * pow(temp_j, 2) +
    C3 * pow(temp_j, 3) +
    C4 * pow(temp_j, 4) +
    C5 * pow(temp_j, 5) +
    C6 * pow(temp_j, 6) +
    C7 * pow(temp_j, 7) +
    C8 * pow(temp_j, 8)
    );
  }
  else if (760 <= temp_j && temp_j <= 1200)
  {
  C0 = 296.45625681;
  C1 = -1.4976127786;
  C2 = 0.0031787103924;
  C3 = -3.1847686701E-06;
  C4 = 1.5720819004E-09;
  C5 = -3.0691369056E-13;
  volt_j = 1000 * (
    C0 * pow(temp_j, 0) +
    C1 * pow(temp_j, 1) +
    C2 * pow(temp_j, 2) +
    C3 * pow(temp_j, 3) +
    C4 * pow(temp_j, 4) +
    C5 * pow(temp_j, 5)
    );
  }
  return(volt_j);
}

double Thermocouple::JtypeVolt(double volt_t_j)
{
  double temp_t_j;
  double D0, D1, D2, D3, D4, D5, D6, D7, D8;

  if (isnan(volt_t_j) || volt_t_j < -8.0954 || 69.5532 < volt_t_j)
  {
    return(-999);
  }

  if (-8.0954 <= volt_t_j && volt_t_j < 0)
  {
  D0 = 0;
  D1 = 19.528268;
  D2 = -1.2286185;
  D3 = -1.0752178;
  D4 = -0.59086933;
  D5 = -0.17256713;
  D6 = -0.028131513;
  D7 = -0.002396337;
  D8 = -0.000083823321;
  temp_t_j = D0 + D1 * pow(volt_t_j, 1) +
    D2 * pow(volt_t_j, 2) +
    D3 * pow(volt_t_j, 3) +
    D4 * pow(volt_t_j, 4) +
    D5 * pow(volt_t_j, 5) +
    D6 * pow(volt_t_j, 6) +
    D7 * pow(volt_t_j, 7) +
    D8 * pow(volt_t_j, 8);
  }
  else if (0 <= volt_t_j && volt_t_j < 42.919)
  {
  D0 = 0;
  D1 = 19.78425;
  D2 = -0.2001204;
  D3 = 0.01036969;
  D4 = -0.0002549687;
  D5 = 0.000003585153;
  D6 = -0.00000005344285;
  D7 = 0.000000000509989;
  D8 = 0;

  temp_t_j = D0 + D1 * pow(volt_t_j, 1) +
    D2 * pow(volt_t_j, 2) +
    D3 * pow(volt_t_j, 3) +
    D4 * pow(volt_t_j, 4) +
    D5 * pow(volt_t_j, 5) +
    D6 * pow(volt_t_j, 6) +
    D7 * pow(volt_t_j, 7) +
    D8 * pow(volt_t_j, 8);
  }
  else if (42.919 <= volt_t_j && volt_t_j <= 69.5532)
  {
  D0 = -3113.58187;
  D1 = 300.543684;
  D2 = -9.9477323;
  D3 = 0.17027663;
  D4 = -0.00143033468;
  D5 = 0.00000473886084;
  D6 = 0;
  D7 = 0;
  D8 = 0;

  temp_t_j = D0 + D1 * pow(volt_t_j, 1) +
    D2 * pow(volt_t_j, 2) +
    D3 * pow(volt_t_j, 3) +
    D4 * pow(volt_t_j, 4) +
    D5 * pow(volt_t_j, 5) +
    D6 * pow(volt_t_j, 6) +
    D7 * pow(volt_t_j, 7) +
    D8 * pow(volt_t_j, 8);
  }
  return (temp_t_j);
}