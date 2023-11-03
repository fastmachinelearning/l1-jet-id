#ifndef NNET_INSTR_GEN_H_
#define NNET_INSTR_GEN_H_

#include "nnet_helpers.h"
#include <iostream>

namespace nnet {

template <class data_T, typename CONFIG_T> class FillConv1DBuffer {
  public:
    static void fill_buffer(data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
                            data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
                            const unsigned partition) {
        // To be implemented in subclasses
    }
};

template <class data_T, typename CONFIG_T> class FillConv2DBuffer {
  public:
    static void
    fill_buffer(data_T data[CONFIG_T::in_height * CONFIG_T::in_width * CONFIG_T::n_chan],
                data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_height * CONFIG_T::filt_width * CONFIG_T::n_chan],
                const unsigned partition) {
        // To be implemented in subclasses
    }
};

// hls4ml insert code
template<class data_T, typename CONFIG_T>
class fill_buffer_19 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2];

        }
        if (partition ==   1) {
            buffer[0][0] =    data[3]; buffer[0][1] =    data[4]; buffer[0][2] =    data[5];

        }
        if (partition ==   2) {
            buffer[0][0] =    data[6]; buffer[0][1] =    data[7]; buffer[0][2] =    data[8];

        }
        if (partition ==   3) {
            buffer[0][0] =    data[9]; buffer[0][1] =   data[10]; buffer[0][2] =   data[11];

        }
        if (partition ==   4) {
            buffer[0][0] =   data[12]; buffer[0][1] =   data[13]; buffer[0][2] =   data[14];

        }
        if (partition ==   5) {
            buffer[0][0] =   data[15]; buffer[0][1] =   data[16]; buffer[0][2] =   data[17];

        }
        if (partition ==   6) {
            buffer[0][0] =   data[18]; buffer[0][1] =   data[19]; buffer[0][2] =   data[20];

        }
        if (partition ==   7) {
            buffer[0][0] =   data[21]; buffer[0][1] =   data[22]; buffer[0][2] =   data[23];

        }
        if (partition ==   8) {
            buffer[0][0] =   data[24]; buffer[0][1] =   data[25]; buffer[0][2] =   data[26];

        }
        if (partition ==   9) {
            buffer[0][0] =   data[27]; buffer[0][1] =   data[28]; buffer[0][2] =   data[29];

        }
        if (partition ==  10) {
            buffer[0][0] =   data[30]; buffer[0][1] =   data[31]; buffer[0][2] =   data[32];

        }
        if (partition ==  11) {
            buffer[0][0] =   data[33]; buffer[0][1] =   data[34]; buffer[0][2] =   data[35];

        }
        if (partition ==  12) {
            buffer[0][0] =   data[36]; buffer[0][1] =   data[37]; buffer[0][2] =   data[38];

        }
        if (partition ==  13) {
            buffer[0][0] =   data[39]; buffer[0][1] =   data[40]; buffer[0][2] =   data[41];

        }
        if (partition ==  14) {
            buffer[0][0] =   data[42]; buffer[0][1] =   data[43]; buffer[0][2] =   data[44];

        }
        if (partition ==  15) {
            buffer[0][0] =   data[45]; buffer[0][1] =   data[46]; buffer[0][2] =   data[47];

        }
        if (partition ==  16) {
            buffer[0][0] =   data[48]; buffer[0][1] =   data[49]; buffer[0][2] =   data[50];

        }
        if (partition ==  17) {
            buffer[0][0] =   data[51]; buffer[0][1] =   data[52]; buffer[0][2] =   data[53];

        }
        if (partition ==  18) {
            buffer[0][0] =   data[54]; buffer[0][1] =   data[55]; buffer[0][2] =   data[56];

        }
        if (partition ==  19) {
            buffer[0][0] =   data[57]; buffer[0][1] =   data[58]; buffer[0][2] =   data[59];

        }
        if (partition ==  20) {
            buffer[0][0] =   data[60]; buffer[0][1] =   data[61]; buffer[0][2] =   data[62];

        }
        if (partition ==  21) {
            buffer[0][0] =   data[63]; buffer[0][1] =   data[64]; buffer[0][2] =   data[65];

        }
        if (partition ==  22) {
            buffer[0][0] =   data[66]; buffer[0][1] =   data[67]; buffer[0][2] =   data[68];

        }
        if (partition ==  23) {
            buffer[0][0] =   data[69]; buffer[0][1] =   data[70]; buffer[0][2] =   data[71];

        }
        if (partition ==  24) {
            buffer[0][0] =   data[72]; buffer[0][1] =   data[73]; buffer[0][2] =   data[74];

        }
        if (partition ==  25) {
            buffer[0][0] =   data[75]; buffer[0][1] =   data[76]; buffer[0][2] =   data[77];

        }
        if (partition ==  26) {
            buffer[0][0] =   data[78]; buffer[0][1] =   data[79]; buffer[0][2] =   data[80];

        }
        if (partition ==  27) {
            buffer[0][0] =   data[81]; buffer[0][1] =   data[82]; buffer[0][2] =   data[83];

        }
        if (partition ==  28) {
            buffer[0][0] =   data[84]; buffer[0][1] =   data[85]; buffer[0][2] =   data[86];

        }
        if (partition ==  29) {
            buffer[0][0] =   data[87]; buffer[0][1] =   data[88]; buffer[0][2] =   data[89];

        }
        if (partition ==  30) {
            buffer[0][0] =   data[90]; buffer[0][1] =   data[91]; buffer[0][2] =   data[92];

        }
        if (partition ==  31) {
            buffer[0][0] =   data[93]; buffer[0][1] =   data[94]; buffer[0][2] =   data[95];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_20 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15]; buffer[0][16] =   data[16]; buffer[0][17] =   data[17]; buffer[0][18] =   data[18]; buffer[0][19] =   data[19]; buffer[0][20] =   data[20]; buffer[0][21] =   data[21]; buffer[0][22] =   data[22]; buffer[0][23] =   data[23]; buffer[0][24] =   data[24]; buffer[0][25] =   data[25]; buffer[0][26] =   data[26]; buffer[0][27] =   data[27]; buffer[0][28] =   data[28]; buffer[0][29] =   data[29]; buffer[0][30] =   data[30]; buffer[0][31] =   data[31];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[32]; buffer[0][1] =   data[33]; buffer[0][2] =   data[34]; buffer[0][3] =   data[35]; buffer[0][4] =   data[36]; buffer[0][5] =   data[37]; buffer[0][6] =   data[38]; buffer[0][7] =   data[39]; buffer[0][8] =   data[40]; buffer[0][9] =   data[41]; buffer[0][10] =   data[42]; buffer[0][11] =   data[43]; buffer[0][12] =   data[44]; buffer[0][13] =   data[45]; buffer[0][14] =   data[46]; buffer[0][15] =   data[47]; buffer[0][16] =   data[48]; buffer[0][17] =   data[49]; buffer[0][18] =   data[50]; buffer[0][19] =   data[51]; buffer[0][20] =   data[52]; buffer[0][21] =   data[53]; buffer[0][22] =   data[54]; buffer[0][23] =   data[55]; buffer[0][24] =   data[56]; buffer[0][25] =   data[57]; buffer[0][26] =   data[58]; buffer[0][27] =   data[59]; buffer[0][28] =   data[60]; buffer[0][29] =   data[61]; buffer[0][30] =   data[62]; buffer[0][31] =   data[63];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[64]; buffer[0][1] =   data[65]; buffer[0][2] =   data[66]; buffer[0][3] =   data[67]; buffer[0][4] =   data[68]; buffer[0][5] =   data[69]; buffer[0][6] =   data[70]; buffer[0][7] =   data[71]; buffer[0][8] =   data[72]; buffer[0][9] =   data[73]; buffer[0][10] =   data[74]; buffer[0][11] =   data[75]; buffer[0][12] =   data[76]; buffer[0][13] =   data[77]; buffer[0][14] =   data[78]; buffer[0][15] =   data[79]; buffer[0][16] =   data[80]; buffer[0][17] =   data[81]; buffer[0][18] =   data[82]; buffer[0][19] =   data[83]; buffer[0][20] =   data[84]; buffer[0][21] =   data[85]; buffer[0][22] =   data[86]; buffer[0][23] =   data[87]; buffer[0][24] =   data[88]; buffer[0][25] =   data[89]; buffer[0][26] =   data[90]; buffer[0][27] =   data[91]; buffer[0][28] =   data[92]; buffer[0][29] =   data[93]; buffer[0][30] =   data[94]; buffer[0][31] =   data[95];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[96]; buffer[0][1] =   data[97]; buffer[0][2] =   data[98]; buffer[0][3] =   data[99]; buffer[0][4] =  data[100]; buffer[0][5] =  data[101]; buffer[0][6] =  data[102]; buffer[0][7] =  data[103]; buffer[0][8] =  data[104]; buffer[0][9] =  data[105]; buffer[0][10] =  data[106]; buffer[0][11] =  data[107]; buffer[0][12] =  data[108]; buffer[0][13] =  data[109]; buffer[0][14] =  data[110]; buffer[0][15] =  data[111]; buffer[0][16] =  data[112]; buffer[0][17] =  data[113]; buffer[0][18] =  data[114]; buffer[0][19] =  data[115]; buffer[0][20] =  data[116]; buffer[0][21] =  data[117]; buffer[0][22] =  data[118]; buffer[0][23] =  data[119]; buffer[0][24] =  data[120]; buffer[0][25] =  data[121]; buffer[0][26] =  data[122]; buffer[0][27] =  data[123]; buffer[0][28] =  data[124]; buffer[0][29] =  data[125]; buffer[0][30] =  data[126]; buffer[0][31] =  data[127];

        }
        if (partition ==   4) {
            buffer[0][0] =  data[128]; buffer[0][1] =  data[129]; buffer[0][2] =  data[130]; buffer[0][3] =  data[131]; buffer[0][4] =  data[132]; buffer[0][5] =  data[133]; buffer[0][6] =  data[134]; buffer[0][7] =  data[135]; buffer[0][8] =  data[136]; buffer[0][9] =  data[137]; buffer[0][10] =  data[138]; buffer[0][11] =  data[139]; buffer[0][12] =  data[140]; buffer[0][13] =  data[141]; buffer[0][14] =  data[142]; buffer[0][15] =  data[143]; buffer[0][16] =  data[144]; buffer[0][17] =  data[145]; buffer[0][18] =  data[146]; buffer[0][19] =  data[147]; buffer[0][20] =  data[148]; buffer[0][21] =  data[149]; buffer[0][22] =  data[150]; buffer[0][23] =  data[151]; buffer[0][24] =  data[152]; buffer[0][25] =  data[153]; buffer[0][26] =  data[154]; buffer[0][27] =  data[155]; buffer[0][28] =  data[156]; buffer[0][29] =  data[157]; buffer[0][30] =  data[158]; buffer[0][31] =  data[159];

        }
        if (partition ==   5) {
            buffer[0][0] =  data[160]; buffer[0][1] =  data[161]; buffer[0][2] =  data[162]; buffer[0][3] =  data[163]; buffer[0][4] =  data[164]; buffer[0][5] =  data[165]; buffer[0][6] =  data[166]; buffer[0][7] =  data[167]; buffer[0][8] =  data[168]; buffer[0][9] =  data[169]; buffer[0][10] =  data[170]; buffer[0][11] =  data[171]; buffer[0][12] =  data[172]; buffer[0][13] =  data[173]; buffer[0][14] =  data[174]; buffer[0][15] =  data[175]; buffer[0][16] =  data[176]; buffer[0][17] =  data[177]; buffer[0][18] =  data[178]; buffer[0][19] =  data[179]; buffer[0][20] =  data[180]; buffer[0][21] =  data[181]; buffer[0][22] =  data[182]; buffer[0][23] =  data[183]; buffer[0][24] =  data[184]; buffer[0][25] =  data[185]; buffer[0][26] =  data[186]; buffer[0][27] =  data[187]; buffer[0][28] =  data[188]; buffer[0][29] =  data[189]; buffer[0][30] =  data[190]; buffer[0][31] =  data[191];

        }
        if (partition ==   6) {
            buffer[0][0] =  data[192]; buffer[0][1] =  data[193]; buffer[0][2] =  data[194]; buffer[0][3] =  data[195]; buffer[0][4] =  data[196]; buffer[0][5] =  data[197]; buffer[0][6] =  data[198]; buffer[0][7] =  data[199]; buffer[0][8] =  data[200]; buffer[0][9] =  data[201]; buffer[0][10] =  data[202]; buffer[0][11] =  data[203]; buffer[0][12] =  data[204]; buffer[0][13] =  data[205]; buffer[0][14] =  data[206]; buffer[0][15] =  data[207]; buffer[0][16] =  data[208]; buffer[0][17] =  data[209]; buffer[0][18] =  data[210]; buffer[0][19] =  data[211]; buffer[0][20] =  data[212]; buffer[0][21] =  data[213]; buffer[0][22] =  data[214]; buffer[0][23] =  data[215]; buffer[0][24] =  data[216]; buffer[0][25] =  data[217]; buffer[0][26] =  data[218]; buffer[0][27] =  data[219]; buffer[0][28] =  data[220]; buffer[0][29] =  data[221]; buffer[0][30] =  data[222]; buffer[0][31] =  data[223];

        }
        if (partition ==   7) {
            buffer[0][0] =  data[224]; buffer[0][1] =  data[225]; buffer[0][2] =  data[226]; buffer[0][3] =  data[227]; buffer[0][4] =  data[228]; buffer[0][5] =  data[229]; buffer[0][6] =  data[230]; buffer[0][7] =  data[231]; buffer[0][8] =  data[232]; buffer[0][9] =  data[233]; buffer[0][10] =  data[234]; buffer[0][11] =  data[235]; buffer[0][12] =  data[236]; buffer[0][13] =  data[237]; buffer[0][14] =  data[238]; buffer[0][15] =  data[239]; buffer[0][16] =  data[240]; buffer[0][17] =  data[241]; buffer[0][18] =  data[242]; buffer[0][19] =  data[243]; buffer[0][20] =  data[244]; buffer[0][21] =  data[245]; buffer[0][22] =  data[246]; buffer[0][23] =  data[247]; buffer[0][24] =  data[248]; buffer[0][25] =  data[249]; buffer[0][26] =  data[250]; buffer[0][27] =  data[251]; buffer[0][28] =  data[252]; buffer[0][29] =  data[253]; buffer[0][30] =  data[254]; buffer[0][31] =  data[255];

        }
        if (partition ==   8) {
            buffer[0][0] =  data[256]; buffer[0][1] =  data[257]; buffer[0][2] =  data[258]; buffer[0][3] =  data[259]; buffer[0][4] =  data[260]; buffer[0][5] =  data[261]; buffer[0][6] =  data[262]; buffer[0][7] =  data[263]; buffer[0][8] =  data[264]; buffer[0][9] =  data[265]; buffer[0][10] =  data[266]; buffer[0][11] =  data[267]; buffer[0][12] =  data[268]; buffer[0][13] =  data[269]; buffer[0][14] =  data[270]; buffer[0][15] =  data[271]; buffer[0][16] =  data[272]; buffer[0][17] =  data[273]; buffer[0][18] =  data[274]; buffer[0][19] =  data[275]; buffer[0][20] =  data[276]; buffer[0][21] =  data[277]; buffer[0][22] =  data[278]; buffer[0][23] =  data[279]; buffer[0][24] =  data[280]; buffer[0][25] =  data[281]; buffer[0][26] =  data[282]; buffer[0][27] =  data[283]; buffer[0][28] =  data[284]; buffer[0][29] =  data[285]; buffer[0][30] =  data[286]; buffer[0][31] =  data[287];

        }
        if (partition ==   9) {
            buffer[0][0] =  data[288]; buffer[0][1] =  data[289]; buffer[0][2] =  data[290]; buffer[0][3] =  data[291]; buffer[0][4] =  data[292]; buffer[0][5] =  data[293]; buffer[0][6] =  data[294]; buffer[0][7] =  data[295]; buffer[0][8] =  data[296]; buffer[0][9] =  data[297]; buffer[0][10] =  data[298]; buffer[0][11] =  data[299]; buffer[0][12] =  data[300]; buffer[0][13] =  data[301]; buffer[0][14] =  data[302]; buffer[0][15] =  data[303]; buffer[0][16] =  data[304]; buffer[0][17] =  data[305]; buffer[0][18] =  data[306]; buffer[0][19] =  data[307]; buffer[0][20] =  data[308]; buffer[0][21] =  data[309]; buffer[0][22] =  data[310]; buffer[0][23] =  data[311]; buffer[0][24] =  data[312]; buffer[0][25] =  data[313]; buffer[0][26] =  data[314]; buffer[0][27] =  data[315]; buffer[0][28] =  data[316]; buffer[0][29] =  data[317]; buffer[0][30] =  data[318]; buffer[0][31] =  data[319];

        }
        if (partition ==  10) {
            buffer[0][0] =  data[320]; buffer[0][1] =  data[321]; buffer[0][2] =  data[322]; buffer[0][3] =  data[323]; buffer[0][4] =  data[324]; buffer[0][5] =  data[325]; buffer[0][6] =  data[326]; buffer[0][7] =  data[327]; buffer[0][8] =  data[328]; buffer[0][9] =  data[329]; buffer[0][10] =  data[330]; buffer[0][11] =  data[331]; buffer[0][12] =  data[332]; buffer[0][13] =  data[333]; buffer[0][14] =  data[334]; buffer[0][15] =  data[335]; buffer[0][16] =  data[336]; buffer[0][17] =  data[337]; buffer[0][18] =  data[338]; buffer[0][19] =  data[339]; buffer[0][20] =  data[340]; buffer[0][21] =  data[341]; buffer[0][22] =  data[342]; buffer[0][23] =  data[343]; buffer[0][24] =  data[344]; buffer[0][25] =  data[345]; buffer[0][26] =  data[346]; buffer[0][27] =  data[347]; buffer[0][28] =  data[348]; buffer[0][29] =  data[349]; buffer[0][30] =  data[350]; buffer[0][31] =  data[351];

        }
        if (partition ==  11) {
            buffer[0][0] =  data[352]; buffer[0][1] =  data[353]; buffer[0][2] =  data[354]; buffer[0][3] =  data[355]; buffer[0][4] =  data[356]; buffer[0][5] =  data[357]; buffer[0][6] =  data[358]; buffer[0][7] =  data[359]; buffer[0][8] =  data[360]; buffer[0][9] =  data[361]; buffer[0][10] =  data[362]; buffer[0][11] =  data[363]; buffer[0][12] =  data[364]; buffer[0][13] =  data[365]; buffer[0][14] =  data[366]; buffer[0][15] =  data[367]; buffer[0][16] =  data[368]; buffer[0][17] =  data[369]; buffer[0][18] =  data[370]; buffer[0][19] =  data[371]; buffer[0][20] =  data[372]; buffer[0][21] =  data[373]; buffer[0][22] =  data[374]; buffer[0][23] =  data[375]; buffer[0][24] =  data[376]; buffer[0][25] =  data[377]; buffer[0][26] =  data[378]; buffer[0][27] =  data[379]; buffer[0][28] =  data[380]; buffer[0][29] =  data[381]; buffer[0][30] =  data[382]; buffer[0][31] =  data[383];

        }
        if (partition ==  12) {
            buffer[0][0] =  data[384]; buffer[0][1] =  data[385]; buffer[0][2] =  data[386]; buffer[0][3] =  data[387]; buffer[0][4] =  data[388]; buffer[0][5] =  data[389]; buffer[0][6] =  data[390]; buffer[0][7] =  data[391]; buffer[0][8] =  data[392]; buffer[0][9] =  data[393]; buffer[0][10] =  data[394]; buffer[0][11] =  data[395]; buffer[0][12] =  data[396]; buffer[0][13] =  data[397]; buffer[0][14] =  data[398]; buffer[0][15] =  data[399]; buffer[0][16] =  data[400]; buffer[0][17] =  data[401]; buffer[0][18] =  data[402]; buffer[0][19] =  data[403]; buffer[0][20] =  data[404]; buffer[0][21] =  data[405]; buffer[0][22] =  data[406]; buffer[0][23] =  data[407]; buffer[0][24] =  data[408]; buffer[0][25] =  data[409]; buffer[0][26] =  data[410]; buffer[0][27] =  data[411]; buffer[0][28] =  data[412]; buffer[0][29] =  data[413]; buffer[0][30] =  data[414]; buffer[0][31] =  data[415];

        }
        if (partition ==  13) {
            buffer[0][0] =  data[416]; buffer[0][1] =  data[417]; buffer[0][2] =  data[418]; buffer[0][3] =  data[419]; buffer[0][4] =  data[420]; buffer[0][5] =  data[421]; buffer[0][6] =  data[422]; buffer[0][7] =  data[423]; buffer[0][8] =  data[424]; buffer[0][9] =  data[425]; buffer[0][10] =  data[426]; buffer[0][11] =  data[427]; buffer[0][12] =  data[428]; buffer[0][13] =  data[429]; buffer[0][14] =  data[430]; buffer[0][15] =  data[431]; buffer[0][16] =  data[432]; buffer[0][17] =  data[433]; buffer[0][18] =  data[434]; buffer[0][19] =  data[435]; buffer[0][20] =  data[436]; buffer[0][21] =  data[437]; buffer[0][22] =  data[438]; buffer[0][23] =  data[439]; buffer[0][24] =  data[440]; buffer[0][25] =  data[441]; buffer[0][26] =  data[442]; buffer[0][27] =  data[443]; buffer[0][28] =  data[444]; buffer[0][29] =  data[445]; buffer[0][30] =  data[446]; buffer[0][31] =  data[447];

        }
        if (partition ==  14) {
            buffer[0][0] =  data[448]; buffer[0][1] =  data[449]; buffer[0][2] =  data[450]; buffer[0][3] =  data[451]; buffer[0][4] =  data[452]; buffer[0][5] =  data[453]; buffer[0][6] =  data[454]; buffer[0][7] =  data[455]; buffer[0][8] =  data[456]; buffer[0][9] =  data[457]; buffer[0][10] =  data[458]; buffer[0][11] =  data[459]; buffer[0][12] =  data[460]; buffer[0][13] =  data[461]; buffer[0][14] =  data[462]; buffer[0][15] =  data[463]; buffer[0][16] =  data[464]; buffer[0][17] =  data[465]; buffer[0][18] =  data[466]; buffer[0][19] =  data[467]; buffer[0][20] =  data[468]; buffer[0][21] =  data[469]; buffer[0][22] =  data[470]; buffer[0][23] =  data[471]; buffer[0][24] =  data[472]; buffer[0][25] =  data[473]; buffer[0][26] =  data[474]; buffer[0][27] =  data[475]; buffer[0][28] =  data[476]; buffer[0][29] =  data[477]; buffer[0][30] =  data[478]; buffer[0][31] =  data[479];

        }
        if (partition ==  15) {
            buffer[0][0] =  data[480]; buffer[0][1] =  data[481]; buffer[0][2] =  data[482]; buffer[0][3] =  data[483]; buffer[0][4] =  data[484]; buffer[0][5] =  data[485]; buffer[0][6] =  data[486]; buffer[0][7] =  data[487]; buffer[0][8] =  data[488]; buffer[0][9] =  data[489]; buffer[0][10] =  data[490]; buffer[0][11] =  data[491]; buffer[0][12] =  data[492]; buffer[0][13] =  data[493]; buffer[0][14] =  data[494]; buffer[0][15] =  data[495]; buffer[0][16] =  data[496]; buffer[0][17] =  data[497]; buffer[0][18] =  data[498]; buffer[0][19] =  data[499]; buffer[0][20] =  data[500]; buffer[0][21] =  data[501]; buffer[0][22] =  data[502]; buffer[0][23] =  data[503]; buffer[0][24] =  data[504]; buffer[0][25] =  data[505]; buffer[0][26] =  data[506]; buffer[0][27] =  data[507]; buffer[0][28] =  data[508]; buffer[0][29] =  data[509]; buffer[0][30] =  data[510]; buffer[0][31] =  data[511];

        }
        if (partition ==  16) {
            buffer[0][0] =  data[512]; buffer[0][1] =  data[513]; buffer[0][2] =  data[514]; buffer[0][3] =  data[515]; buffer[0][4] =  data[516]; buffer[0][5] =  data[517]; buffer[0][6] =  data[518]; buffer[0][7] =  data[519]; buffer[0][8] =  data[520]; buffer[0][9] =  data[521]; buffer[0][10] =  data[522]; buffer[0][11] =  data[523]; buffer[0][12] =  data[524]; buffer[0][13] =  data[525]; buffer[0][14] =  data[526]; buffer[0][15] =  data[527]; buffer[0][16] =  data[528]; buffer[0][17] =  data[529]; buffer[0][18] =  data[530]; buffer[0][19] =  data[531]; buffer[0][20] =  data[532]; buffer[0][21] =  data[533]; buffer[0][22] =  data[534]; buffer[0][23] =  data[535]; buffer[0][24] =  data[536]; buffer[0][25] =  data[537]; buffer[0][26] =  data[538]; buffer[0][27] =  data[539]; buffer[0][28] =  data[540]; buffer[0][29] =  data[541]; buffer[0][30] =  data[542]; buffer[0][31] =  data[543];

        }
        if (partition ==  17) {
            buffer[0][0] =  data[544]; buffer[0][1] =  data[545]; buffer[0][2] =  data[546]; buffer[0][3] =  data[547]; buffer[0][4] =  data[548]; buffer[0][5] =  data[549]; buffer[0][6] =  data[550]; buffer[0][7] =  data[551]; buffer[0][8] =  data[552]; buffer[0][9] =  data[553]; buffer[0][10] =  data[554]; buffer[0][11] =  data[555]; buffer[0][12] =  data[556]; buffer[0][13] =  data[557]; buffer[0][14] =  data[558]; buffer[0][15] =  data[559]; buffer[0][16] =  data[560]; buffer[0][17] =  data[561]; buffer[0][18] =  data[562]; buffer[0][19] =  data[563]; buffer[0][20] =  data[564]; buffer[0][21] =  data[565]; buffer[0][22] =  data[566]; buffer[0][23] =  data[567]; buffer[0][24] =  data[568]; buffer[0][25] =  data[569]; buffer[0][26] =  data[570]; buffer[0][27] =  data[571]; buffer[0][28] =  data[572]; buffer[0][29] =  data[573]; buffer[0][30] =  data[574]; buffer[0][31] =  data[575];

        }
        if (partition ==  18) {
            buffer[0][0] =  data[576]; buffer[0][1] =  data[577]; buffer[0][2] =  data[578]; buffer[0][3] =  data[579]; buffer[0][4] =  data[580]; buffer[0][5] =  data[581]; buffer[0][6] =  data[582]; buffer[0][7] =  data[583]; buffer[0][8] =  data[584]; buffer[0][9] =  data[585]; buffer[0][10] =  data[586]; buffer[0][11] =  data[587]; buffer[0][12] =  data[588]; buffer[0][13] =  data[589]; buffer[0][14] =  data[590]; buffer[0][15] =  data[591]; buffer[0][16] =  data[592]; buffer[0][17] =  data[593]; buffer[0][18] =  data[594]; buffer[0][19] =  data[595]; buffer[0][20] =  data[596]; buffer[0][21] =  data[597]; buffer[0][22] =  data[598]; buffer[0][23] =  data[599]; buffer[0][24] =  data[600]; buffer[0][25] =  data[601]; buffer[0][26] =  data[602]; buffer[0][27] =  data[603]; buffer[0][28] =  data[604]; buffer[0][29] =  data[605]; buffer[0][30] =  data[606]; buffer[0][31] =  data[607];

        }
        if (partition ==  19) {
            buffer[0][0] =  data[608]; buffer[0][1] =  data[609]; buffer[0][2] =  data[610]; buffer[0][3] =  data[611]; buffer[0][4] =  data[612]; buffer[0][5] =  data[613]; buffer[0][6] =  data[614]; buffer[0][7] =  data[615]; buffer[0][8] =  data[616]; buffer[0][9] =  data[617]; buffer[0][10] =  data[618]; buffer[0][11] =  data[619]; buffer[0][12] =  data[620]; buffer[0][13] =  data[621]; buffer[0][14] =  data[622]; buffer[0][15] =  data[623]; buffer[0][16] =  data[624]; buffer[0][17] =  data[625]; buffer[0][18] =  data[626]; buffer[0][19] =  data[627]; buffer[0][20] =  data[628]; buffer[0][21] =  data[629]; buffer[0][22] =  data[630]; buffer[0][23] =  data[631]; buffer[0][24] =  data[632]; buffer[0][25] =  data[633]; buffer[0][26] =  data[634]; buffer[0][27] =  data[635]; buffer[0][28] =  data[636]; buffer[0][29] =  data[637]; buffer[0][30] =  data[638]; buffer[0][31] =  data[639];

        }
        if (partition ==  20) {
            buffer[0][0] =  data[640]; buffer[0][1] =  data[641]; buffer[0][2] =  data[642]; buffer[0][3] =  data[643]; buffer[0][4] =  data[644]; buffer[0][5] =  data[645]; buffer[0][6] =  data[646]; buffer[0][7] =  data[647]; buffer[0][8] =  data[648]; buffer[0][9] =  data[649]; buffer[0][10] =  data[650]; buffer[0][11] =  data[651]; buffer[0][12] =  data[652]; buffer[0][13] =  data[653]; buffer[0][14] =  data[654]; buffer[0][15] =  data[655]; buffer[0][16] =  data[656]; buffer[0][17] =  data[657]; buffer[0][18] =  data[658]; buffer[0][19] =  data[659]; buffer[0][20] =  data[660]; buffer[0][21] =  data[661]; buffer[0][22] =  data[662]; buffer[0][23] =  data[663]; buffer[0][24] =  data[664]; buffer[0][25] =  data[665]; buffer[0][26] =  data[666]; buffer[0][27] =  data[667]; buffer[0][28] =  data[668]; buffer[0][29] =  data[669]; buffer[0][30] =  data[670]; buffer[0][31] =  data[671];

        }
        if (partition ==  21) {
            buffer[0][0] =  data[672]; buffer[0][1] =  data[673]; buffer[0][2] =  data[674]; buffer[0][3] =  data[675]; buffer[0][4] =  data[676]; buffer[0][5] =  data[677]; buffer[0][6] =  data[678]; buffer[0][7] =  data[679]; buffer[0][8] =  data[680]; buffer[0][9] =  data[681]; buffer[0][10] =  data[682]; buffer[0][11] =  data[683]; buffer[0][12] =  data[684]; buffer[0][13] =  data[685]; buffer[0][14] =  data[686]; buffer[0][15] =  data[687]; buffer[0][16] =  data[688]; buffer[0][17] =  data[689]; buffer[0][18] =  data[690]; buffer[0][19] =  data[691]; buffer[0][20] =  data[692]; buffer[0][21] =  data[693]; buffer[0][22] =  data[694]; buffer[0][23] =  data[695]; buffer[0][24] =  data[696]; buffer[0][25] =  data[697]; buffer[0][26] =  data[698]; buffer[0][27] =  data[699]; buffer[0][28] =  data[700]; buffer[0][29] =  data[701]; buffer[0][30] =  data[702]; buffer[0][31] =  data[703];

        }
        if (partition ==  22) {
            buffer[0][0] =  data[704]; buffer[0][1] =  data[705]; buffer[0][2] =  data[706]; buffer[0][3] =  data[707]; buffer[0][4] =  data[708]; buffer[0][5] =  data[709]; buffer[0][6] =  data[710]; buffer[0][7] =  data[711]; buffer[0][8] =  data[712]; buffer[0][9] =  data[713]; buffer[0][10] =  data[714]; buffer[0][11] =  data[715]; buffer[0][12] =  data[716]; buffer[0][13] =  data[717]; buffer[0][14] =  data[718]; buffer[0][15] =  data[719]; buffer[0][16] =  data[720]; buffer[0][17] =  data[721]; buffer[0][18] =  data[722]; buffer[0][19] =  data[723]; buffer[0][20] =  data[724]; buffer[0][21] =  data[725]; buffer[0][22] =  data[726]; buffer[0][23] =  data[727]; buffer[0][24] =  data[728]; buffer[0][25] =  data[729]; buffer[0][26] =  data[730]; buffer[0][27] =  data[731]; buffer[0][28] =  data[732]; buffer[0][29] =  data[733]; buffer[0][30] =  data[734]; buffer[0][31] =  data[735];

        }
        if (partition ==  23) {
            buffer[0][0] =  data[736]; buffer[0][1] =  data[737]; buffer[0][2] =  data[738]; buffer[0][3] =  data[739]; buffer[0][4] =  data[740]; buffer[0][5] =  data[741]; buffer[0][6] =  data[742]; buffer[0][7] =  data[743]; buffer[0][8] =  data[744]; buffer[0][9] =  data[745]; buffer[0][10] =  data[746]; buffer[0][11] =  data[747]; buffer[0][12] =  data[748]; buffer[0][13] =  data[749]; buffer[0][14] =  data[750]; buffer[0][15] =  data[751]; buffer[0][16] =  data[752]; buffer[0][17] =  data[753]; buffer[0][18] =  data[754]; buffer[0][19] =  data[755]; buffer[0][20] =  data[756]; buffer[0][21] =  data[757]; buffer[0][22] =  data[758]; buffer[0][23] =  data[759]; buffer[0][24] =  data[760]; buffer[0][25] =  data[761]; buffer[0][26] =  data[762]; buffer[0][27] =  data[763]; buffer[0][28] =  data[764]; buffer[0][29] =  data[765]; buffer[0][30] =  data[766]; buffer[0][31] =  data[767];

        }
        if (partition ==  24) {
            buffer[0][0] =  data[768]; buffer[0][1] =  data[769]; buffer[0][2] =  data[770]; buffer[0][3] =  data[771]; buffer[0][4] =  data[772]; buffer[0][5] =  data[773]; buffer[0][6] =  data[774]; buffer[0][7] =  data[775]; buffer[0][8] =  data[776]; buffer[0][9] =  data[777]; buffer[0][10] =  data[778]; buffer[0][11] =  data[779]; buffer[0][12] =  data[780]; buffer[0][13] =  data[781]; buffer[0][14] =  data[782]; buffer[0][15] =  data[783]; buffer[0][16] =  data[784]; buffer[0][17] =  data[785]; buffer[0][18] =  data[786]; buffer[0][19] =  data[787]; buffer[0][20] =  data[788]; buffer[0][21] =  data[789]; buffer[0][22] =  data[790]; buffer[0][23] =  data[791]; buffer[0][24] =  data[792]; buffer[0][25] =  data[793]; buffer[0][26] =  data[794]; buffer[0][27] =  data[795]; buffer[0][28] =  data[796]; buffer[0][29] =  data[797]; buffer[0][30] =  data[798]; buffer[0][31] =  data[799];

        }
        if (partition ==  25) {
            buffer[0][0] =  data[800]; buffer[0][1] =  data[801]; buffer[0][2] =  data[802]; buffer[0][3] =  data[803]; buffer[0][4] =  data[804]; buffer[0][5] =  data[805]; buffer[0][6] =  data[806]; buffer[0][7] =  data[807]; buffer[0][8] =  data[808]; buffer[0][9] =  data[809]; buffer[0][10] =  data[810]; buffer[0][11] =  data[811]; buffer[0][12] =  data[812]; buffer[0][13] =  data[813]; buffer[0][14] =  data[814]; buffer[0][15] =  data[815]; buffer[0][16] =  data[816]; buffer[0][17] =  data[817]; buffer[0][18] =  data[818]; buffer[0][19] =  data[819]; buffer[0][20] =  data[820]; buffer[0][21] =  data[821]; buffer[0][22] =  data[822]; buffer[0][23] =  data[823]; buffer[0][24] =  data[824]; buffer[0][25] =  data[825]; buffer[0][26] =  data[826]; buffer[0][27] =  data[827]; buffer[0][28] =  data[828]; buffer[0][29] =  data[829]; buffer[0][30] =  data[830]; buffer[0][31] =  data[831];

        }
        if (partition ==  26) {
            buffer[0][0] =  data[832]; buffer[0][1] =  data[833]; buffer[0][2] =  data[834]; buffer[0][3] =  data[835]; buffer[0][4] =  data[836]; buffer[0][5] =  data[837]; buffer[0][6] =  data[838]; buffer[0][7] =  data[839]; buffer[0][8] =  data[840]; buffer[0][9] =  data[841]; buffer[0][10] =  data[842]; buffer[0][11] =  data[843]; buffer[0][12] =  data[844]; buffer[0][13] =  data[845]; buffer[0][14] =  data[846]; buffer[0][15] =  data[847]; buffer[0][16] =  data[848]; buffer[0][17] =  data[849]; buffer[0][18] =  data[850]; buffer[0][19] =  data[851]; buffer[0][20] =  data[852]; buffer[0][21] =  data[853]; buffer[0][22] =  data[854]; buffer[0][23] =  data[855]; buffer[0][24] =  data[856]; buffer[0][25] =  data[857]; buffer[0][26] =  data[858]; buffer[0][27] =  data[859]; buffer[0][28] =  data[860]; buffer[0][29] =  data[861]; buffer[0][30] =  data[862]; buffer[0][31] =  data[863];

        }
        if (partition ==  27) {
            buffer[0][0] =  data[864]; buffer[0][1] =  data[865]; buffer[0][2] =  data[866]; buffer[0][3] =  data[867]; buffer[0][4] =  data[868]; buffer[0][5] =  data[869]; buffer[0][6] =  data[870]; buffer[0][7] =  data[871]; buffer[0][8] =  data[872]; buffer[0][9] =  data[873]; buffer[0][10] =  data[874]; buffer[0][11] =  data[875]; buffer[0][12] =  data[876]; buffer[0][13] =  data[877]; buffer[0][14] =  data[878]; buffer[0][15] =  data[879]; buffer[0][16] =  data[880]; buffer[0][17] =  data[881]; buffer[0][18] =  data[882]; buffer[0][19] =  data[883]; buffer[0][20] =  data[884]; buffer[0][21] =  data[885]; buffer[0][22] =  data[886]; buffer[0][23] =  data[887]; buffer[0][24] =  data[888]; buffer[0][25] =  data[889]; buffer[0][26] =  data[890]; buffer[0][27] =  data[891]; buffer[0][28] =  data[892]; buffer[0][29] =  data[893]; buffer[0][30] =  data[894]; buffer[0][31] =  data[895];

        }
        if (partition ==  28) {
            buffer[0][0] =  data[896]; buffer[0][1] =  data[897]; buffer[0][2] =  data[898]; buffer[0][3] =  data[899]; buffer[0][4] =  data[900]; buffer[0][5] =  data[901]; buffer[0][6] =  data[902]; buffer[0][7] =  data[903]; buffer[0][8] =  data[904]; buffer[0][9] =  data[905]; buffer[0][10] =  data[906]; buffer[0][11] =  data[907]; buffer[0][12] =  data[908]; buffer[0][13] =  data[909]; buffer[0][14] =  data[910]; buffer[0][15] =  data[911]; buffer[0][16] =  data[912]; buffer[0][17] =  data[913]; buffer[0][18] =  data[914]; buffer[0][19] =  data[915]; buffer[0][20] =  data[916]; buffer[0][21] =  data[917]; buffer[0][22] =  data[918]; buffer[0][23] =  data[919]; buffer[0][24] =  data[920]; buffer[0][25] =  data[921]; buffer[0][26] =  data[922]; buffer[0][27] =  data[923]; buffer[0][28] =  data[924]; buffer[0][29] =  data[925]; buffer[0][30] =  data[926]; buffer[0][31] =  data[927];

        }
        if (partition ==  29) {
            buffer[0][0] =  data[928]; buffer[0][1] =  data[929]; buffer[0][2] =  data[930]; buffer[0][3] =  data[931]; buffer[0][4] =  data[932]; buffer[0][5] =  data[933]; buffer[0][6] =  data[934]; buffer[0][7] =  data[935]; buffer[0][8] =  data[936]; buffer[0][9] =  data[937]; buffer[0][10] =  data[938]; buffer[0][11] =  data[939]; buffer[0][12] =  data[940]; buffer[0][13] =  data[941]; buffer[0][14] =  data[942]; buffer[0][15] =  data[943]; buffer[0][16] =  data[944]; buffer[0][17] =  data[945]; buffer[0][18] =  data[946]; buffer[0][19] =  data[947]; buffer[0][20] =  data[948]; buffer[0][21] =  data[949]; buffer[0][22] =  data[950]; buffer[0][23] =  data[951]; buffer[0][24] =  data[952]; buffer[0][25] =  data[953]; buffer[0][26] =  data[954]; buffer[0][27] =  data[955]; buffer[0][28] =  data[956]; buffer[0][29] =  data[957]; buffer[0][30] =  data[958]; buffer[0][31] =  data[959];

        }
        if (partition ==  30) {
            buffer[0][0] =  data[960]; buffer[0][1] =  data[961]; buffer[0][2] =  data[962]; buffer[0][3] =  data[963]; buffer[0][4] =  data[964]; buffer[0][5] =  data[965]; buffer[0][6] =  data[966]; buffer[0][7] =  data[967]; buffer[0][8] =  data[968]; buffer[0][9] =  data[969]; buffer[0][10] =  data[970]; buffer[0][11] =  data[971]; buffer[0][12] =  data[972]; buffer[0][13] =  data[973]; buffer[0][14] =  data[974]; buffer[0][15] =  data[975]; buffer[0][16] =  data[976]; buffer[0][17] =  data[977]; buffer[0][18] =  data[978]; buffer[0][19] =  data[979]; buffer[0][20] =  data[980]; buffer[0][21] =  data[981]; buffer[0][22] =  data[982]; buffer[0][23] =  data[983]; buffer[0][24] =  data[984]; buffer[0][25] =  data[985]; buffer[0][26] =  data[986]; buffer[0][27] =  data[987]; buffer[0][28] =  data[988]; buffer[0][29] =  data[989]; buffer[0][30] =  data[990]; buffer[0][31] =  data[991];

        }
        if (partition ==  31) {
            buffer[0][0] =  data[992]; buffer[0][1] =  data[993]; buffer[0][2] =  data[994]; buffer[0][3] =  data[995]; buffer[0][4] =  data[996]; buffer[0][5] =  data[997]; buffer[0][6] =  data[998]; buffer[0][7] =  data[999]; buffer[0][8] = data[1000]; buffer[0][9] = data[1001]; buffer[0][10] = data[1002]; buffer[0][11] = data[1003]; buffer[0][12] = data[1004]; buffer[0][13] = data[1005]; buffer[0][14] = data[1006]; buffer[0][15] = data[1007]; buffer[0][16] = data[1008]; buffer[0][17] = data[1009]; buffer[0][18] = data[1010]; buffer[0][19] = data[1011]; buffer[0][20] = data[1012]; buffer[0][21] = data[1013]; buffer[0][22] = data[1014]; buffer[0][23] = data[1015]; buffer[0][24] = data[1016]; buffer[0][25] = data[1017]; buffer[0][26] = data[1018]; buffer[0][27] = data[1019]; buffer[0][28] = data[1020]; buffer[0][29] = data[1021]; buffer[0][30] = data[1022]; buffer[0][31] = data[1023];

        }
    }
};
template<class data_T, typename CONFIG_T>
class fill_buffer_21 : public FillConv1DBuffer<data_T, CONFIG_T> {
    public:
    static void fill_buffer(
        data_T data[CONFIG_T::in_width * CONFIG_T::n_chan],
        data_T buffer[CONFIG_T::n_pixels][CONFIG_T::filt_width * CONFIG_T::n_chan],
        const unsigned partition
    ) {
        if (partition ==   0) {
            buffer[0][0] =    data[0]; buffer[0][1] =    data[1]; buffer[0][2] =    data[2]; buffer[0][3] =    data[3]; buffer[0][4] =    data[4]; buffer[0][5] =    data[5]; buffer[0][6] =    data[6]; buffer[0][7] =    data[7]; buffer[0][8] =    data[8]; buffer[0][9] =    data[9]; buffer[0][10] =   data[10]; buffer[0][11] =   data[11]; buffer[0][12] =   data[12]; buffer[0][13] =   data[13]; buffer[0][14] =   data[14]; buffer[0][15] =   data[15]; buffer[0][16] =   data[16]; buffer[0][17] =   data[17]; buffer[0][18] =   data[18]; buffer[0][19] =   data[19]; buffer[0][20] =   data[20]; buffer[0][21] =   data[21]; buffer[0][22] =   data[22]; buffer[0][23] =   data[23]; buffer[0][24] =   data[24]; buffer[0][25] =   data[25]; buffer[0][26] =   data[26]; buffer[0][27] =   data[27]; buffer[0][28] =   data[28]; buffer[0][29] =   data[29]; buffer[0][30] =   data[30]; buffer[0][31] =   data[31];

        }
        if (partition ==   1) {
            buffer[0][0] =   data[32]; buffer[0][1] =   data[33]; buffer[0][2] =   data[34]; buffer[0][3] =   data[35]; buffer[0][4] =   data[36]; buffer[0][5] =   data[37]; buffer[0][6] =   data[38]; buffer[0][7] =   data[39]; buffer[0][8] =   data[40]; buffer[0][9] =   data[41]; buffer[0][10] =   data[42]; buffer[0][11] =   data[43]; buffer[0][12] =   data[44]; buffer[0][13] =   data[45]; buffer[0][14] =   data[46]; buffer[0][15] =   data[47]; buffer[0][16] =   data[48]; buffer[0][17] =   data[49]; buffer[0][18] =   data[50]; buffer[0][19] =   data[51]; buffer[0][20] =   data[52]; buffer[0][21] =   data[53]; buffer[0][22] =   data[54]; buffer[0][23] =   data[55]; buffer[0][24] =   data[56]; buffer[0][25] =   data[57]; buffer[0][26] =   data[58]; buffer[0][27] =   data[59]; buffer[0][28] =   data[60]; buffer[0][29] =   data[61]; buffer[0][30] =   data[62]; buffer[0][31] =   data[63];

        }
        if (partition ==   2) {
            buffer[0][0] =   data[64]; buffer[0][1] =   data[65]; buffer[0][2] =   data[66]; buffer[0][3] =   data[67]; buffer[0][4] =   data[68]; buffer[0][5] =   data[69]; buffer[0][6] =   data[70]; buffer[0][7] =   data[71]; buffer[0][8] =   data[72]; buffer[0][9] =   data[73]; buffer[0][10] =   data[74]; buffer[0][11] =   data[75]; buffer[0][12] =   data[76]; buffer[0][13] =   data[77]; buffer[0][14] =   data[78]; buffer[0][15] =   data[79]; buffer[0][16] =   data[80]; buffer[0][17] =   data[81]; buffer[0][18] =   data[82]; buffer[0][19] =   data[83]; buffer[0][20] =   data[84]; buffer[0][21] =   data[85]; buffer[0][22] =   data[86]; buffer[0][23] =   data[87]; buffer[0][24] =   data[88]; buffer[0][25] =   data[89]; buffer[0][26] =   data[90]; buffer[0][27] =   data[91]; buffer[0][28] =   data[92]; buffer[0][29] =   data[93]; buffer[0][30] =   data[94]; buffer[0][31] =   data[95];

        }
        if (partition ==   3) {
            buffer[0][0] =   data[96]; buffer[0][1] =   data[97]; buffer[0][2] =   data[98]; buffer[0][3] =   data[99]; buffer[0][4] =  data[100]; buffer[0][5] =  data[101]; buffer[0][6] =  data[102]; buffer[0][7] =  data[103]; buffer[0][8] =  data[104]; buffer[0][9] =  data[105]; buffer[0][10] =  data[106]; buffer[0][11] =  data[107]; buffer[0][12] =  data[108]; buffer[0][13] =  data[109]; buffer[0][14] =  data[110]; buffer[0][15] =  data[111]; buffer[0][16] =  data[112]; buffer[0][17] =  data[113]; buffer[0][18] =  data[114]; buffer[0][19] =  data[115]; buffer[0][20] =  data[116]; buffer[0][21] =  data[117]; buffer[0][22] =  data[118]; buffer[0][23] =  data[119]; buffer[0][24] =  data[120]; buffer[0][25] =  data[121]; buffer[0][26] =  data[122]; buffer[0][27] =  data[123]; buffer[0][28] =  data[124]; buffer[0][29] =  data[125]; buffer[0][30] =  data[126]; buffer[0][31] =  data[127];

        }
        if (partition ==   4) {
            buffer[0][0] =  data[128]; buffer[0][1] =  data[129]; buffer[0][2] =  data[130]; buffer[0][3] =  data[131]; buffer[0][4] =  data[132]; buffer[0][5] =  data[133]; buffer[0][6] =  data[134]; buffer[0][7] =  data[135]; buffer[0][8] =  data[136]; buffer[0][9] =  data[137]; buffer[0][10] =  data[138]; buffer[0][11] =  data[139]; buffer[0][12] =  data[140]; buffer[0][13] =  data[141]; buffer[0][14] =  data[142]; buffer[0][15] =  data[143]; buffer[0][16] =  data[144]; buffer[0][17] =  data[145]; buffer[0][18] =  data[146]; buffer[0][19] =  data[147]; buffer[0][20] =  data[148]; buffer[0][21] =  data[149]; buffer[0][22] =  data[150]; buffer[0][23] =  data[151]; buffer[0][24] =  data[152]; buffer[0][25] =  data[153]; buffer[0][26] =  data[154]; buffer[0][27] =  data[155]; buffer[0][28] =  data[156]; buffer[0][29] =  data[157]; buffer[0][30] =  data[158]; buffer[0][31] =  data[159];

        }
        if (partition ==   5) {
            buffer[0][0] =  data[160]; buffer[0][1] =  data[161]; buffer[0][2] =  data[162]; buffer[0][3] =  data[163]; buffer[0][4] =  data[164]; buffer[0][5] =  data[165]; buffer[0][6] =  data[166]; buffer[0][7] =  data[167]; buffer[0][8] =  data[168]; buffer[0][9] =  data[169]; buffer[0][10] =  data[170]; buffer[0][11] =  data[171]; buffer[0][12] =  data[172]; buffer[0][13] =  data[173]; buffer[0][14] =  data[174]; buffer[0][15] =  data[175]; buffer[0][16] =  data[176]; buffer[0][17] =  data[177]; buffer[0][18] =  data[178]; buffer[0][19] =  data[179]; buffer[0][20] =  data[180]; buffer[0][21] =  data[181]; buffer[0][22] =  data[182]; buffer[0][23] =  data[183]; buffer[0][24] =  data[184]; buffer[0][25] =  data[185]; buffer[0][26] =  data[186]; buffer[0][27] =  data[187]; buffer[0][28] =  data[188]; buffer[0][29] =  data[189]; buffer[0][30] =  data[190]; buffer[0][31] =  data[191];

        }
        if (partition ==   6) {
            buffer[0][0] =  data[192]; buffer[0][1] =  data[193]; buffer[0][2] =  data[194]; buffer[0][3] =  data[195]; buffer[0][4] =  data[196]; buffer[0][5] =  data[197]; buffer[0][6] =  data[198]; buffer[0][7] =  data[199]; buffer[0][8] =  data[200]; buffer[0][9] =  data[201]; buffer[0][10] =  data[202]; buffer[0][11] =  data[203]; buffer[0][12] =  data[204]; buffer[0][13] =  data[205]; buffer[0][14] =  data[206]; buffer[0][15] =  data[207]; buffer[0][16] =  data[208]; buffer[0][17] =  data[209]; buffer[0][18] =  data[210]; buffer[0][19] =  data[211]; buffer[0][20] =  data[212]; buffer[0][21] =  data[213]; buffer[0][22] =  data[214]; buffer[0][23] =  data[215]; buffer[0][24] =  data[216]; buffer[0][25] =  data[217]; buffer[0][26] =  data[218]; buffer[0][27] =  data[219]; buffer[0][28] =  data[220]; buffer[0][29] =  data[221]; buffer[0][30] =  data[222]; buffer[0][31] =  data[223];

        }
        if (partition ==   7) {
            buffer[0][0] =  data[224]; buffer[0][1] =  data[225]; buffer[0][2] =  data[226]; buffer[0][3] =  data[227]; buffer[0][4] =  data[228]; buffer[0][5] =  data[229]; buffer[0][6] =  data[230]; buffer[0][7] =  data[231]; buffer[0][8] =  data[232]; buffer[0][9] =  data[233]; buffer[0][10] =  data[234]; buffer[0][11] =  data[235]; buffer[0][12] =  data[236]; buffer[0][13] =  data[237]; buffer[0][14] =  data[238]; buffer[0][15] =  data[239]; buffer[0][16] =  data[240]; buffer[0][17] =  data[241]; buffer[0][18] =  data[242]; buffer[0][19] =  data[243]; buffer[0][20] =  data[244]; buffer[0][21] =  data[245]; buffer[0][22] =  data[246]; buffer[0][23] =  data[247]; buffer[0][24] =  data[248]; buffer[0][25] =  data[249]; buffer[0][26] =  data[250]; buffer[0][27] =  data[251]; buffer[0][28] =  data[252]; buffer[0][29] =  data[253]; buffer[0][30] =  data[254]; buffer[0][31] =  data[255];

        }
        if (partition ==   8) {
            buffer[0][0] =  data[256]; buffer[0][1] =  data[257]; buffer[0][2] =  data[258]; buffer[0][3] =  data[259]; buffer[0][4] =  data[260]; buffer[0][5] =  data[261]; buffer[0][6] =  data[262]; buffer[0][7] =  data[263]; buffer[0][8] =  data[264]; buffer[0][9] =  data[265]; buffer[0][10] =  data[266]; buffer[0][11] =  data[267]; buffer[0][12] =  data[268]; buffer[0][13] =  data[269]; buffer[0][14] =  data[270]; buffer[0][15] =  data[271]; buffer[0][16] =  data[272]; buffer[0][17] =  data[273]; buffer[0][18] =  data[274]; buffer[0][19] =  data[275]; buffer[0][20] =  data[276]; buffer[0][21] =  data[277]; buffer[0][22] =  data[278]; buffer[0][23] =  data[279]; buffer[0][24] =  data[280]; buffer[0][25] =  data[281]; buffer[0][26] =  data[282]; buffer[0][27] =  data[283]; buffer[0][28] =  data[284]; buffer[0][29] =  data[285]; buffer[0][30] =  data[286]; buffer[0][31] =  data[287];

        }
        if (partition ==   9) {
            buffer[0][0] =  data[288]; buffer[0][1] =  data[289]; buffer[0][2] =  data[290]; buffer[0][3] =  data[291]; buffer[0][4] =  data[292]; buffer[0][5] =  data[293]; buffer[0][6] =  data[294]; buffer[0][7] =  data[295]; buffer[0][8] =  data[296]; buffer[0][9] =  data[297]; buffer[0][10] =  data[298]; buffer[0][11] =  data[299]; buffer[0][12] =  data[300]; buffer[0][13] =  data[301]; buffer[0][14] =  data[302]; buffer[0][15] =  data[303]; buffer[0][16] =  data[304]; buffer[0][17] =  data[305]; buffer[0][18] =  data[306]; buffer[0][19] =  data[307]; buffer[0][20] =  data[308]; buffer[0][21] =  data[309]; buffer[0][22] =  data[310]; buffer[0][23] =  data[311]; buffer[0][24] =  data[312]; buffer[0][25] =  data[313]; buffer[0][26] =  data[314]; buffer[0][27] =  data[315]; buffer[0][28] =  data[316]; buffer[0][29] =  data[317]; buffer[0][30] =  data[318]; buffer[0][31] =  data[319];

        }
        if (partition ==  10) {
            buffer[0][0] =  data[320]; buffer[0][1] =  data[321]; buffer[0][2] =  data[322]; buffer[0][3] =  data[323]; buffer[0][4] =  data[324]; buffer[0][5] =  data[325]; buffer[0][6] =  data[326]; buffer[0][7] =  data[327]; buffer[0][8] =  data[328]; buffer[0][9] =  data[329]; buffer[0][10] =  data[330]; buffer[0][11] =  data[331]; buffer[0][12] =  data[332]; buffer[0][13] =  data[333]; buffer[0][14] =  data[334]; buffer[0][15] =  data[335]; buffer[0][16] =  data[336]; buffer[0][17] =  data[337]; buffer[0][18] =  data[338]; buffer[0][19] =  data[339]; buffer[0][20] =  data[340]; buffer[0][21] =  data[341]; buffer[0][22] =  data[342]; buffer[0][23] =  data[343]; buffer[0][24] =  data[344]; buffer[0][25] =  data[345]; buffer[0][26] =  data[346]; buffer[0][27] =  data[347]; buffer[0][28] =  data[348]; buffer[0][29] =  data[349]; buffer[0][30] =  data[350]; buffer[0][31] =  data[351];

        }
        if (partition ==  11) {
            buffer[0][0] =  data[352]; buffer[0][1] =  data[353]; buffer[0][2] =  data[354]; buffer[0][3] =  data[355]; buffer[0][4] =  data[356]; buffer[0][5] =  data[357]; buffer[0][6] =  data[358]; buffer[0][7] =  data[359]; buffer[0][8] =  data[360]; buffer[0][9] =  data[361]; buffer[0][10] =  data[362]; buffer[0][11] =  data[363]; buffer[0][12] =  data[364]; buffer[0][13] =  data[365]; buffer[0][14] =  data[366]; buffer[0][15] =  data[367]; buffer[0][16] =  data[368]; buffer[0][17] =  data[369]; buffer[0][18] =  data[370]; buffer[0][19] =  data[371]; buffer[0][20] =  data[372]; buffer[0][21] =  data[373]; buffer[0][22] =  data[374]; buffer[0][23] =  data[375]; buffer[0][24] =  data[376]; buffer[0][25] =  data[377]; buffer[0][26] =  data[378]; buffer[0][27] =  data[379]; buffer[0][28] =  data[380]; buffer[0][29] =  data[381]; buffer[0][30] =  data[382]; buffer[0][31] =  data[383];

        }
        if (partition ==  12) {
            buffer[0][0] =  data[384]; buffer[0][1] =  data[385]; buffer[0][2] =  data[386]; buffer[0][3] =  data[387]; buffer[0][4] =  data[388]; buffer[0][5] =  data[389]; buffer[0][6] =  data[390]; buffer[0][7] =  data[391]; buffer[0][8] =  data[392]; buffer[0][9] =  data[393]; buffer[0][10] =  data[394]; buffer[0][11] =  data[395]; buffer[0][12] =  data[396]; buffer[0][13] =  data[397]; buffer[0][14] =  data[398]; buffer[0][15] =  data[399]; buffer[0][16] =  data[400]; buffer[0][17] =  data[401]; buffer[0][18] =  data[402]; buffer[0][19] =  data[403]; buffer[0][20] =  data[404]; buffer[0][21] =  data[405]; buffer[0][22] =  data[406]; buffer[0][23] =  data[407]; buffer[0][24] =  data[408]; buffer[0][25] =  data[409]; buffer[0][26] =  data[410]; buffer[0][27] =  data[411]; buffer[0][28] =  data[412]; buffer[0][29] =  data[413]; buffer[0][30] =  data[414]; buffer[0][31] =  data[415];

        }
        if (partition ==  13) {
            buffer[0][0] =  data[416]; buffer[0][1] =  data[417]; buffer[0][2] =  data[418]; buffer[0][3] =  data[419]; buffer[0][4] =  data[420]; buffer[0][5] =  data[421]; buffer[0][6] =  data[422]; buffer[0][7] =  data[423]; buffer[0][8] =  data[424]; buffer[0][9] =  data[425]; buffer[0][10] =  data[426]; buffer[0][11] =  data[427]; buffer[0][12] =  data[428]; buffer[0][13] =  data[429]; buffer[0][14] =  data[430]; buffer[0][15] =  data[431]; buffer[0][16] =  data[432]; buffer[0][17] =  data[433]; buffer[0][18] =  data[434]; buffer[0][19] =  data[435]; buffer[0][20] =  data[436]; buffer[0][21] =  data[437]; buffer[0][22] =  data[438]; buffer[0][23] =  data[439]; buffer[0][24] =  data[440]; buffer[0][25] =  data[441]; buffer[0][26] =  data[442]; buffer[0][27] =  data[443]; buffer[0][28] =  data[444]; buffer[0][29] =  data[445]; buffer[0][30] =  data[446]; buffer[0][31] =  data[447];

        }
        if (partition ==  14) {
            buffer[0][0] =  data[448]; buffer[0][1] =  data[449]; buffer[0][2] =  data[450]; buffer[0][3] =  data[451]; buffer[0][4] =  data[452]; buffer[0][5] =  data[453]; buffer[0][6] =  data[454]; buffer[0][7] =  data[455]; buffer[0][8] =  data[456]; buffer[0][9] =  data[457]; buffer[0][10] =  data[458]; buffer[0][11] =  data[459]; buffer[0][12] =  data[460]; buffer[0][13] =  data[461]; buffer[0][14] =  data[462]; buffer[0][15] =  data[463]; buffer[0][16] =  data[464]; buffer[0][17] =  data[465]; buffer[0][18] =  data[466]; buffer[0][19] =  data[467]; buffer[0][20] =  data[468]; buffer[0][21] =  data[469]; buffer[0][22] =  data[470]; buffer[0][23] =  data[471]; buffer[0][24] =  data[472]; buffer[0][25] =  data[473]; buffer[0][26] =  data[474]; buffer[0][27] =  data[475]; buffer[0][28] =  data[476]; buffer[0][29] =  data[477]; buffer[0][30] =  data[478]; buffer[0][31] =  data[479];

        }
        if (partition ==  15) {
            buffer[0][0] =  data[480]; buffer[0][1] =  data[481]; buffer[0][2] =  data[482]; buffer[0][3] =  data[483]; buffer[0][4] =  data[484]; buffer[0][5] =  data[485]; buffer[0][6] =  data[486]; buffer[0][7] =  data[487]; buffer[0][8] =  data[488]; buffer[0][9] =  data[489]; buffer[0][10] =  data[490]; buffer[0][11] =  data[491]; buffer[0][12] =  data[492]; buffer[0][13] =  data[493]; buffer[0][14] =  data[494]; buffer[0][15] =  data[495]; buffer[0][16] =  data[496]; buffer[0][17] =  data[497]; buffer[0][18] =  data[498]; buffer[0][19] =  data[499]; buffer[0][20] =  data[500]; buffer[0][21] =  data[501]; buffer[0][22] =  data[502]; buffer[0][23] =  data[503]; buffer[0][24] =  data[504]; buffer[0][25] =  data[505]; buffer[0][26] =  data[506]; buffer[0][27] =  data[507]; buffer[0][28] =  data[508]; buffer[0][29] =  data[509]; buffer[0][30] =  data[510]; buffer[0][31] =  data[511];

        }
        if (partition ==  16) {
            buffer[0][0] =  data[512]; buffer[0][1] =  data[513]; buffer[0][2] =  data[514]; buffer[0][3] =  data[515]; buffer[0][4] =  data[516]; buffer[0][5] =  data[517]; buffer[0][6] =  data[518]; buffer[0][7] =  data[519]; buffer[0][8] =  data[520]; buffer[0][9] =  data[521]; buffer[0][10] =  data[522]; buffer[0][11] =  data[523]; buffer[0][12] =  data[524]; buffer[0][13] =  data[525]; buffer[0][14] =  data[526]; buffer[0][15] =  data[527]; buffer[0][16] =  data[528]; buffer[0][17] =  data[529]; buffer[0][18] =  data[530]; buffer[0][19] =  data[531]; buffer[0][20] =  data[532]; buffer[0][21] =  data[533]; buffer[0][22] =  data[534]; buffer[0][23] =  data[535]; buffer[0][24] =  data[536]; buffer[0][25] =  data[537]; buffer[0][26] =  data[538]; buffer[0][27] =  data[539]; buffer[0][28] =  data[540]; buffer[0][29] =  data[541]; buffer[0][30] =  data[542]; buffer[0][31] =  data[543];

        }
        if (partition ==  17) {
            buffer[0][0] =  data[544]; buffer[0][1] =  data[545]; buffer[0][2] =  data[546]; buffer[0][3] =  data[547]; buffer[0][4] =  data[548]; buffer[0][5] =  data[549]; buffer[0][6] =  data[550]; buffer[0][7] =  data[551]; buffer[0][8] =  data[552]; buffer[0][9] =  data[553]; buffer[0][10] =  data[554]; buffer[0][11] =  data[555]; buffer[0][12] =  data[556]; buffer[0][13] =  data[557]; buffer[0][14] =  data[558]; buffer[0][15] =  data[559]; buffer[0][16] =  data[560]; buffer[0][17] =  data[561]; buffer[0][18] =  data[562]; buffer[0][19] =  data[563]; buffer[0][20] =  data[564]; buffer[0][21] =  data[565]; buffer[0][22] =  data[566]; buffer[0][23] =  data[567]; buffer[0][24] =  data[568]; buffer[0][25] =  data[569]; buffer[0][26] =  data[570]; buffer[0][27] =  data[571]; buffer[0][28] =  data[572]; buffer[0][29] =  data[573]; buffer[0][30] =  data[574]; buffer[0][31] =  data[575];

        }
        if (partition ==  18) {
            buffer[0][0] =  data[576]; buffer[0][1] =  data[577]; buffer[0][2] =  data[578]; buffer[0][3] =  data[579]; buffer[0][4] =  data[580]; buffer[0][5] =  data[581]; buffer[0][6] =  data[582]; buffer[0][7] =  data[583]; buffer[0][8] =  data[584]; buffer[0][9] =  data[585]; buffer[0][10] =  data[586]; buffer[0][11] =  data[587]; buffer[0][12] =  data[588]; buffer[0][13] =  data[589]; buffer[0][14] =  data[590]; buffer[0][15] =  data[591]; buffer[0][16] =  data[592]; buffer[0][17] =  data[593]; buffer[0][18] =  data[594]; buffer[0][19] =  data[595]; buffer[0][20] =  data[596]; buffer[0][21] =  data[597]; buffer[0][22] =  data[598]; buffer[0][23] =  data[599]; buffer[0][24] =  data[600]; buffer[0][25] =  data[601]; buffer[0][26] =  data[602]; buffer[0][27] =  data[603]; buffer[0][28] =  data[604]; buffer[0][29] =  data[605]; buffer[0][30] =  data[606]; buffer[0][31] =  data[607];

        }
        if (partition ==  19) {
            buffer[0][0] =  data[608]; buffer[0][1] =  data[609]; buffer[0][2] =  data[610]; buffer[0][3] =  data[611]; buffer[0][4] =  data[612]; buffer[0][5] =  data[613]; buffer[0][6] =  data[614]; buffer[0][7] =  data[615]; buffer[0][8] =  data[616]; buffer[0][9] =  data[617]; buffer[0][10] =  data[618]; buffer[0][11] =  data[619]; buffer[0][12] =  data[620]; buffer[0][13] =  data[621]; buffer[0][14] =  data[622]; buffer[0][15] =  data[623]; buffer[0][16] =  data[624]; buffer[0][17] =  data[625]; buffer[0][18] =  data[626]; buffer[0][19] =  data[627]; buffer[0][20] =  data[628]; buffer[0][21] =  data[629]; buffer[0][22] =  data[630]; buffer[0][23] =  data[631]; buffer[0][24] =  data[632]; buffer[0][25] =  data[633]; buffer[0][26] =  data[634]; buffer[0][27] =  data[635]; buffer[0][28] =  data[636]; buffer[0][29] =  data[637]; buffer[0][30] =  data[638]; buffer[0][31] =  data[639];

        }
        if (partition ==  20) {
            buffer[0][0] =  data[640]; buffer[0][1] =  data[641]; buffer[0][2] =  data[642]; buffer[0][3] =  data[643]; buffer[0][4] =  data[644]; buffer[0][5] =  data[645]; buffer[0][6] =  data[646]; buffer[0][7] =  data[647]; buffer[0][8] =  data[648]; buffer[0][9] =  data[649]; buffer[0][10] =  data[650]; buffer[0][11] =  data[651]; buffer[0][12] =  data[652]; buffer[0][13] =  data[653]; buffer[0][14] =  data[654]; buffer[0][15] =  data[655]; buffer[0][16] =  data[656]; buffer[0][17] =  data[657]; buffer[0][18] =  data[658]; buffer[0][19] =  data[659]; buffer[0][20] =  data[660]; buffer[0][21] =  data[661]; buffer[0][22] =  data[662]; buffer[0][23] =  data[663]; buffer[0][24] =  data[664]; buffer[0][25] =  data[665]; buffer[0][26] =  data[666]; buffer[0][27] =  data[667]; buffer[0][28] =  data[668]; buffer[0][29] =  data[669]; buffer[0][30] =  data[670]; buffer[0][31] =  data[671];

        }
        if (partition ==  21) {
            buffer[0][0] =  data[672]; buffer[0][1] =  data[673]; buffer[0][2] =  data[674]; buffer[0][3] =  data[675]; buffer[0][4] =  data[676]; buffer[0][5] =  data[677]; buffer[0][6] =  data[678]; buffer[0][7] =  data[679]; buffer[0][8] =  data[680]; buffer[0][9] =  data[681]; buffer[0][10] =  data[682]; buffer[0][11] =  data[683]; buffer[0][12] =  data[684]; buffer[0][13] =  data[685]; buffer[0][14] =  data[686]; buffer[0][15] =  data[687]; buffer[0][16] =  data[688]; buffer[0][17] =  data[689]; buffer[0][18] =  data[690]; buffer[0][19] =  data[691]; buffer[0][20] =  data[692]; buffer[0][21] =  data[693]; buffer[0][22] =  data[694]; buffer[0][23] =  data[695]; buffer[0][24] =  data[696]; buffer[0][25] =  data[697]; buffer[0][26] =  data[698]; buffer[0][27] =  data[699]; buffer[0][28] =  data[700]; buffer[0][29] =  data[701]; buffer[0][30] =  data[702]; buffer[0][31] =  data[703];

        }
        if (partition ==  22) {
            buffer[0][0] =  data[704]; buffer[0][1] =  data[705]; buffer[0][2] =  data[706]; buffer[0][3] =  data[707]; buffer[0][4] =  data[708]; buffer[0][5] =  data[709]; buffer[0][6] =  data[710]; buffer[0][7] =  data[711]; buffer[0][8] =  data[712]; buffer[0][9] =  data[713]; buffer[0][10] =  data[714]; buffer[0][11] =  data[715]; buffer[0][12] =  data[716]; buffer[0][13] =  data[717]; buffer[0][14] =  data[718]; buffer[0][15] =  data[719]; buffer[0][16] =  data[720]; buffer[0][17] =  data[721]; buffer[0][18] =  data[722]; buffer[0][19] =  data[723]; buffer[0][20] =  data[724]; buffer[0][21] =  data[725]; buffer[0][22] =  data[726]; buffer[0][23] =  data[727]; buffer[0][24] =  data[728]; buffer[0][25] =  data[729]; buffer[0][26] =  data[730]; buffer[0][27] =  data[731]; buffer[0][28] =  data[732]; buffer[0][29] =  data[733]; buffer[0][30] =  data[734]; buffer[0][31] =  data[735];

        }
        if (partition ==  23) {
            buffer[0][0] =  data[736]; buffer[0][1] =  data[737]; buffer[0][2] =  data[738]; buffer[0][3] =  data[739]; buffer[0][4] =  data[740]; buffer[0][5] =  data[741]; buffer[0][6] =  data[742]; buffer[0][7] =  data[743]; buffer[0][8] =  data[744]; buffer[0][9] =  data[745]; buffer[0][10] =  data[746]; buffer[0][11] =  data[747]; buffer[0][12] =  data[748]; buffer[0][13] =  data[749]; buffer[0][14] =  data[750]; buffer[0][15] =  data[751]; buffer[0][16] =  data[752]; buffer[0][17] =  data[753]; buffer[0][18] =  data[754]; buffer[0][19] =  data[755]; buffer[0][20] =  data[756]; buffer[0][21] =  data[757]; buffer[0][22] =  data[758]; buffer[0][23] =  data[759]; buffer[0][24] =  data[760]; buffer[0][25] =  data[761]; buffer[0][26] =  data[762]; buffer[0][27] =  data[763]; buffer[0][28] =  data[764]; buffer[0][29] =  data[765]; buffer[0][30] =  data[766]; buffer[0][31] =  data[767];

        }
        if (partition ==  24) {
            buffer[0][0] =  data[768]; buffer[0][1] =  data[769]; buffer[0][2] =  data[770]; buffer[0][3] =  data[771]; buffer[0][4] =  data[772]; buffer[0][5] =  data[773]; buffer[0][6] =  data[774]; buffer[0][7] =  data[775]; buffer[0][8] =  data[776]; buffer[0][9] =  data[777]; buffer[0][10] =  data[778]; buffer[0][11] =  data[779]; buffer[0][12] =  data[780]; buffer[0][13] =  data[781]; buffer[0][14] =  data[782]; buffer[0][15] =  data[783]; buffer[0][16] =  data[784]; buffer[0][17] =  data[785]; buffer[0][18] =  data[786]; buffer[0][19] =  data[787]; buffer[0][20] =  data[788]; buffer[0][21] =  data[789]; buffer[0][22] =  data[790]; buffer[0][23] =  data[791]; buffer[0][24] =  data[792]; buffer[0][25] =  data[793]; buffer[0][26] =  data[794]; buffer[0][27] =  data[795]; buffer[0][28] =  data[796]; buffer[0][29] =  data[797]; buffer[0][30] =  data[798]; buffer[0][31] =  data[799];

        }
        if (partition ==  25) {
            buffer[0][0] =  data[800]; buffer[0][1] =  data[801]; buffer[0][2] =  data[802]; buffer[0][3] =  data[803]; buffer[0][4] =  data[804]; buffer[0][5] =  data[805]; buffer[0][6] =  data[806]; buffer[0][7] =  data[807]; buffer[0][8] =  data[808]; buffer[0][9] =  data[809]; buffer[0][10] =  data[810]; buffer[0][11] =  data[811]; buffer[0][12] =  data[812]; buffer[0][13] =  data[813]; buffer[0][14] =  data[814]; buffer[0][15] =  data[815]; buffer[0][16] =  data[816]; buffer[0][17] =  data[817]; buffer[0][18] =  data[818]; buffer[0][19] =  data[819]; buffer[0][20] =  data[820]; buffer[0][21] =  data[821]; buffer[0][22] =  data[822]; buffer[0][23] =  data[823]; buffer[0][24] =  data[824]; buffer[0][25] =  data[825]; buffer[0][26] =  data[826]; buffer[0][27] =  data[827]; buffer[0][28] =  data[828]; buffer[0][29] =  data[829]; buffer[0][30] =  data[830]; buffer[0][31] =  data[831];

        }
        if (partition ==  26) {
            buffer[0][0] =  data[832]; buffer[0][1] =  data[833]; buffer[0][2] =  data[834]; buffer[0][3] =  data[835]; buffer[0][4] =  data[836]; buffer[0][5] =  data[837]; buffer[0][6] =  data[838]; buffer[0][7] =  data[839]; buffer[0][8] =  data[840]; buffer[0][9] =  data[841]; buffer[0][10] =  data[842]; buffer[0][11] =  data[843]; buffer[0][12] =  data[844]; buffer[0][13] =  data[845]; buffer[0][14] =  data[846]; buffer[0][15] =  data[847]; buffer[0][16] =  data[848]; buffer[0][17] =  data[849]; buffer[0][18] =  data[850]; buffer[0][19] =  data[851]; buffer[0][20] =  data[852]; buffer[0][21] =  data[853]; buffer[0][22] =  data[854]; buffer[0][23] =  data[855]; buffer[0][24] =  data[856]; buffer[0][25] =  data[857]; buffer[0][26] =  data[858]; buffer[0][27] =  data[859]; buffer[0][28] =  data[860]; buffer[0][29] =  data[861]; buffer[0][30] =  data[862]; buffer[0][31] =  data[863];

        }
        if (partition ==  27) {
            buffer[0][0] =  data[864]; buffer[0][1] =  data[865]; buffer[0][2] =  data[866]; buffer[0][3] =  data[867]; buffer[0][4] =  data[868]; buffer[0][5] =  data[869]; buffer[0][6] =  data[870]; buffer[0][7] =  data[871]; buffer[0][8] =  data[872]; buffer[0][9] =  data[873]; buffer[0][10] =  data[874]; buffer[0][11] =  data[875]; buffer[0][12] =  data[876]; buffer[0][13] =  data[877]; buffer[0][14] =  data[878]; buffer[0][15] =  data[879]; buffer[0][16] =  data[880]; buffer[0][17] =  data[881]; buffer[0][18] =  data[882]; buffer[0][19] =  data[883]; buffer[0][20] =  data[884]; buffer[0][21] =  data[885]; buffer[0][22] =  data[886]; buffer[0][23] =  data[887]; buffer[0][24] =  data[888]; buffer[0][25] =  data[889]; buffer[0][26] =  data[890]; buffer[0][27] =  data[891]; buffer[0][28] =  data[892]; buffer[0][29] =  data[893]; buffer[0][30] =  data[894]; buffer[0][31] =  data[895];

        }
        if (partition ==  28) {
            buffer[0][0] =  data[896]; buffer[0][1] =  data[897]; buffer[0][2] =  data[898]; buffer[0][3] =  data[899]; buffer[0][4] =  data[900]; buffer[0][5] =  data[901]; buffer[0][6] =  data[902]; buffer[0][7] =  data[903]; buffer[0][8] =  data[904]; buffer[0][9] =  data[905]; buffer[0][10] =  data[906]; buffer[0][11] =  data[907]; buffer[0][12] =  data[908]; buffer[0][13] =  data[909]; buffer[0][14] =  data[910]; buffer[0][15] =  data[911]; buffer[0][16] =  data[912]; buffer[0][17] =  data[913]; buffer[0][18] =  data[914]; buffer[0][19] =  data[915]; buffer[0][20] =  data[916]; buffer[0][21] =  data[917]; buffer[0][22] =  data[918]; buffer[0][23] =  data[919]; buffer[0][24] =  data[920]; buffer[0][25] =  data[921]; buffer[0][26] =  data[922]; buffer[0][27] =  data[923]; buffer[0][28] =  data[924]; buffer[0][29] =  data[925]; buffer[0][30] =  data[926]; buffer[0][31] =  data[927];

        }
        if (partition ==  29) {
            buffer[0][0] =  data[928]; buffer[0][1] =  data[929]; buffer[0][2] =  data[930]; buffer[0][3] =  data[931]; buffer[0][4] =  data[932]; buffer[0][5] =  data[933]; buffer[0][6] =  data[934]; buffer[0][7] =  data[935]; buffer[0][8] =  data[936]; buffer[0][9] =  data[937]; buffer[0][10] =  data[938]; buffer[0][11] =  data[939]; buffer[0][12] =  data[940]; buffer[0][13] =  data[941]; buffer[0][14] =  data[942]; buffer[0][15] =  data[943]; buffer[0][16] =  data[944]; buffer[0][17] =  data[945]; buffer[0][18] =  data[946]; buffer[0][19] =  data[947]; buffer[0][20] =  data[948]; buffer[0][21] =  data[949]; buffer[0][22] =  data[950]; buffer[0][23] =  data[951]; buffer[0][24] =  data[952]; buffer[0][25] =  data[953]; buffer[0][26] =  data[954]; buffer[0][27] =  data[955]; buffer[0][28] =  data[956]; buffer[0][29] =  data[957]; buffer[0][30] =  data[958]; buffer[0][31] =  data[959];

        }
        if (partition ==  30) {
            buffer[0][0] =  data[960]; buffer[0][1] =  data[961]; buffer[0][2] =  data[962]; buffer[0][3] =  data[963]; buffer[0][4] =  data[964]; buffer[0][5] =  data[965]; buffer[0][6] =  data[966]; buffer[0][7] =  data[967]; buffer[0][8] =  data[968]; buffer[0][9] =  data[969]; buffer[0][10] =  data[970]; buffer[0][11] =  data[971]; buffer[0][12] =  data[972]; buffer[0][13] =  data[973]; buffer[0][14] =  data[974]; buffer[0][15] =  data[975]; buffer[0][16] =  data[976]; buffer[0][17] =  data[977]; buffer[0][18] =  data[978]; buffer[0][19] =  data[979]; buffer[0][20] =  data[980]; buffer[0][21] =  data[981]; buffer[0][22] =  data[982]; buffer[0][23] =  data[983]; buffer[0][24] =  data[984]; buffer[0][25] =  data[985]; buffer[0][26] =  data[986]; buffer[0][27] =  data[987]; buffer[0][28] =  data[988]; buffer[0][29] =  data[989]; buffer[0][30] =  data[990]; buffer[0][31] =  data[991];

        }
        if (partition ==  31) {
            buffer[0][0] =  data[992]; buffer[0][1] =  data[993]; buffer[0][2] =  data[994]; buffer[0][3] =  data[995]; buffer[0][4] =  data[996]; buffer[0][5] =  data[997]; buffer[0][6] =  data[998]; buffer[0][7] =  data[999]; buffer[0][8] = data[1000]; buffer[0][9] = data[1001]; buffer[0][10] = data[1002]; buffer[0][11] = data[1003]; buffer[0][12] = data[1004]; buffer[0][13] = data[1005]; buffer[0][14] = data[1006]; buffer[0][15] = data[1007]; buffer[0][16] = data[1008]; buffer[0][17] = data[1009]; buffer[0][18] = data[1010]; buffer[0][19] = data[1011]; buffer[0][20] = data[1012]; buffer[0][21] = data[1013]; buffer[0][22] = data[1014]; buffer[0][23] = data[1015]; buffer[0][24] = data[1016]; buffer[0][25] = data[1017]; buffer[0][26] = data[1018]; buffer[0][27] = data[1019]; buffer[0][28] = data[1020]; buffer[0][29] = data[1021]; buffer[0][30] = data[1022]; buffer[0][31] = data[1023];

        }
    }
};

} // namespace nnet

#endif
