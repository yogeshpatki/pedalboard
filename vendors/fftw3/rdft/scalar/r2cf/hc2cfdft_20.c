/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Tue Sep 14 10:46:38 EDT 2021 */

#include "rdft/codelet-rdft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_hc2cdft.native -fma -compact -variables 4
 * -pipeline-latency 4 -n 20 -dit -name hc2cfdft_20 -include rdft/scalar/hc2cf.h
 */

/*
 * This function contains 286 FP additions, 188 FP multiplications,
 * (or, 176 additions, 78 multiplications, 110 fused multiply/add),
 * 153 stack variables, 5 constants, and 80 memory accesses
 */
#include "rdft/scalar/hc2cf.h"

static void hc2cfdft_20(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs,
                        INT mb, INT me, INT ms) {
  DK(KP951056516, +0.951056516295153572116439333379382143405698634);
  DK(KP559016994, +0.559016994374947424102293417182819058860154590);
  DK(KP500000000, +0.500000000000000000000000000000000000000000000);
  DK(KP250000000, +0.250000000000000000000000000000000000000000000);
  DK(KP618033988, +0.618033988749894848204586834365638117720309180);
  {
    INT m;
    for (m = mb, W = W + ((mb - 1) * 38); m < me; m = m + 1, Rp = Rp + ms,
        Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 38,
        MAKE_VOLATILE_STRIDE(80, rs)) {
      E T2E, T4W, T3v, T4k, T2M, T4V, T3w, T4j, T2p, T2T, T5a, T5A, T3o, T3D,
          T4b;
      E T4B, T1Y, T2S, T57, T5z, T3h, T3C, T44, T4A, TH, T2P, T50, T5x, T32,
          T3z;
      E T3P, T4D, T1o, T2Q, T53, T5w, T39, T3A, T3W, T4E;
      {
        E T9, T1V, Tu, T2w, T1, T5, T6, T2Y, T1R, T1T, T1U, T40, T10, T2F, TE;
        E T2C, T1y, T2m, T4g, TX, T33, TS, TW, Tw, TA, TB, T3L, T2y, T2A, T2B;
        E T3t, T1q, T1u, T1v, T3d, T2i, T2k, T2l, T48, Tm, Tq, Tr, T3J, T2s,
            T2u;
        E T2v, T3r, T1g, T20, T1l, T23, T1h, T3S, T21, T3k, TL, T2H, TQ, T2K,
            TM;
        E T35, T2I, T4h, T1I, T1D, T2g, T2f, T46, T2c, T2e, T1E, T3b, T16, T1b,
            T29;
        E T28, T3i, T25, T27, T17, T3Q, Tj, Te, T1P, T1O, T3Y, T1L, T1N, Tf,
            T2W;
        E T2x, T2D;
        {
          E T7, T8, Ts, Tt;
          T7 = Rp[WS(rs, 9)];
          T8 = Rm[WS(rs, 9)];
          T9 = T7 - T8;
          T1V = T7 + T8;
          Ts = Rp[WS(rs, 2)];
          Tt = Rm[WS(rs, 2)];
          Tu = Ts + Tt;
          T2w = Ts - Tt;
          {
            E T4, T1S, T2, T3;
            T2 = Ip[WS(rs, 9)];
            T3 = Im[WS(rs, 9)];
            T4 = T2 + T3;
            T1S = T2 - T3;
            T1 = W[36];
            T5 = T1 * T4;
            T6 = W[37];
            T2Y = T6 * T4;
            T1R = W[34];
            T1T = T1R * T1S;
            T1U = W[35];
            T40 = T1U * T1S;
          }
        }
        {
          E TY, TZ, TC, TD;
          TY = Ip[0];
          TZ = Im[0];
          T10 = TY + TZ;
          T2F = TY - TZ;
          TC = Rp[WS(rs, 7)];
          TD = Rm[WS(rs, 7)];
          TE = TC + TD;
          T2C = TC - TD;
        }
        {
          E T1w, T1x, TT, TU, TV;
          T1w = Rp[WS(rs, 1)];
          T1x = Rm[WS(rs, 1)];
          T1y = T1w - T1x;
          T2m = T1w + T1x;
          TT = Rm[0];
          TU = Rp[0];
          TV = TT - TU;
          T4g = TU + TT;
          TX = W[0];
          T33 = TX * TV;
          TS = W[1];
          TW = TS * TV;
        }
        {
          E T1d, T1Z, TI, T2G;
          {
            E Tz, T2z, Tx, Ty;
            Tx = Ip[WS(rs, 7)];
            Ty = Im[WS(rs, 7)];
            Tz = Tx - Ty;
            T2z = Tx + Ty;
            Tw = W[26];
            TA = Tw * Tz;
            TB = W[27];
            T3L = TB * Tz;
            T2y = W[28];
            T2A = T2y * T2z;
            T2B = W[29];
            T3t = T2B * T2z;
          }
          {
            E T1t, T2j, T1r, T1s;
            T1r = Ip[WS(rs, 1)];
            T1s = Im[WS(rs, 1)];
            T1t = T1r + T1s;
            T2j = T1r - T1s;
            T1q = W[4];
            T1u = T1q * T1t;
            T1v = W[5];
            T3d = T1v * T1t;
            T2i = W[2];
            T2k = T2i * T2j;
            T2l = W[3];
            T48 = T2l * T2j;
          }
          {
            E Tp, T2t, Tn, To;
            Tn = Ip[WS(rs, 2)];
            To = Im[WS(rs, 2)];
            Tp = Tn - To;
            T2t = Tn + To;
            Tm = W[6];
            Tq = Tm * Tp;
            Tr = W[7];
            T3J = Tr * Tp;
            T2s = W[8];
            T2u = T2s * T2t;
            T2v = W[9];
            T3r = T2v * T2t;
          }
          {
            E T1e, T1f, T1j, T1k;
            T1e = Ip[WS(rs, 3)];
            T1f = Im[WS(rs, 3)];
            T1g = T1e - T1f;
            T20 = T1e + T1f;
            T1j = Rp[WS(rs, 3)];
            T1k = Rm[WS(rs, 3)];
            T1l = T1j + T1k;
            T23 = T1j - T1k;
          }
          T1d = W[10];
          T1h = T1d * T1g;
          T3S = T1d * T1l;
          T1Z = W[12];
          T21 = T1Z * T20;
          T3k = T1Z * T23;
          {
            E TJ, TK, TO, TP;
            TJ = Ip[WS(rs, 5)];
            TK = Im[WS(rs, 5)];
            TL = TJ + TK;
            T2H = TJ - TK;
            TO = Rp[WS(rs, 5)];
            TP = Rm[WS(rs, 5)];
            TQ = TO - TP;
            T2K = TO + TP;
          }
          TI = W[20];
          TM = TI * TL;
          T35 = TI * TQ;
          T2G = W[18];
          T2I = T2G * T2H;
          T4h = T2G * T2K;
          {
            E T1G, T1H, T2d, T1B, T1C, T1A;
            T1G = Rm[WS(rs, 6)];
            T1H = Rp[WS(rs, 6)];
            T1I = T1G - T1H;
            T1B = Ip[WS(rs, 6)];
            T1C = Im[WS(rs, 6)];
            T1D = T1B + T1C;
            T2d = T1B - T1C;
            T2g = T1H + T1G;
            T2f = W[23];
            T46 = T2f * T2d;
            T2c = W[22];
            T2e = T2c * T2d;
            T1A = W[24];
            T1E = T1A * T1D;
            T3b = T1A * T1I;
          }
          {
            E T14, T15, T26, T19, T1a, T13;
            T14 = Ip[WS(rs, 8)];
            T15 = Im[WS(rs, 8)];
            T16 = T14 - T15;
            T19 = Rp[WS(rs, 8)];
            T1a = Rm[WS(rs, 8)];
            T1b = T19 + T1a;
            T26 = T1a - T19;
            T29 = T14 + T15;
            T28 = W[32];
            T3i = T28 * T26;
            T25 = W[33];
            T27 = T25 * T26;
            T13 = W[30];
            T17 = T13 * T16;
            T3Q = T13 * T1b;
          }
          {
            E Th, Ti, T1M, Tc, Td, Tb;
            Th = Rm[WS(rs, 4)];
            Ti = Rp[WS(rs, 4)];
            Tj = Th - Ti;
            Tc = Ip[WS(rs, 4)];
            Td = Im[WS(rs, 4)];
            Te = Tc + Td;
            T1M = Tc - Td;
            T1P = Ti + Th;
            T1O = W[15];
            T3Y = T1O * T1M;
            T1L = W[14];
            T1N = T1L * T1M;
            Tb = W[16];
            Tf = Tb * Te;
            T2W = Tb * Tj;
          }
        }
        T2x = FNMS(T2v, T2w, T2u);
        T2D = FNMS(T2B, T2C, T2A);
        T2E = T2x - T2D;
        T4W = T2x + T2D;
        {
          E T3s, T3u, T2L, T4i, T2J;
          T3s = FMA(T2s, T2w, T3r);
          T3u = FMA(T2y, T2C, T3t);
          T3v = T3s + T3u;
          T4k = T3u - T3s;
          T2J = W[19];
          T2L = FNMS(T2J, T2K, T2I);
          T4i = FMA(T2J, T2H, T4h);
          T2M = T2F - T2L;
          T4V = T4g + T4i;
          T3w = T2L + T2F;
          T4j = T4g - T4i;
        }
        {
          E T2a, T3j, T24, T3l, T2o, T3n, T4a, T59, T22;
          T2a = FMA(T28, T29, T27);
          T3j = FNMS(T25, T29, T3i);
          T22 = W[13];
          T24 = FNMS(T22, T23, T21);
          T3l = FMA(T22, T20, T3k);
          {
            E T2h, T2n, T47, T49;
            T2h = FNMS(T2f, T2g, T2e);
            T2n = FNMS(T2l, T2m, T2k);
            T2o = T2h - T2n;
            T3n = T2h + T2n;
            T47 = FMA(T2c, T2g, T46);
            T49 = FMA(T2i, T2m, T48);
            T4a = T47 - T49;
            T59 = T47 + T49;
          }
          {
            E T2b, T58, T3m, T45;
            T2b = T24 - T2a;
            T2p = T2b - T2o;
            T2T = T2b + T2o;
            T58 = T2a + T24;
            T5a = T58 + T59;
            T5A = T59 - T58;
            T3m = T3j - T3l;
            T3o = T3m - T3n;
            T3D = T3m + T3n;
            T45 = T3j + T3l;
            T4b = T45 + T4a;
            T4B = T4a - T45;
          }
        }
        {
          E T1z, T3e, T1J, T3c, T1X, T3g, T42, T55, T1F;
          T1z = FNMS(T1v, T1y, T1u);
          T3e = FMA(T1q, T1y, T3d);
          T1F = W[25];
          T1J = FMA(T1F, T1I, T1E);
          T3c = FNMS(T1F, T1D, T3b);
          {
            E T1Q, T1W, T3Z, T41;
            T1Q = FNMS(T1O, T1P, T1N);
            T1W = FNMS(T1U, T1V, T1T);
            T1X = T1Q - T1W;
            T3g = T1Q + T1W;
            T3Z = FMA(T1L, T1P, T3Y);
            T41 = FMA(T1R, T1V, T40);
            T42 = T3Z - T41;
            T55 = T3Z + T41;
          }
          {
            E T1K, T56, T3f, T43;
            T1K = T1z - T1J;
            T1Y = T1K - T1X;
            T2S = T1X + T1K;
            T56 = T1J + T1z;
            T57 = T55 + T56;
            T5z = T55 - T56;
            T3f = T3c - T3e;
            T3h = T3f - T3g;
            T3C = T3g + T3f;
            T43 = T3c + T3e;
            T44 = T42 + T43;
            T4A = T42 - T43;
          }
        }
        {
          E Ta, T2Z, Tk, T2X, TG, T31, T3N, T4Y, Tg;
          Ta = FNMS(T6, T9, T5);
          T2Z = FMA(T1, T9, T2Y);
          Tg = W[17];
          Tk = FMA(Tg, Tj, Tf);
          T2X = FNMS(Tg, Te, T2W);
          {
            E Tv, TF, T3K, T3M;
            Tv = FNMS(Tr, Tu, Tq);
            TF = FNMS(TB, TE, TA);
            TG = Tv - TF;
            T31 = Tv + TF;
            T3K = FMA(Tm, Tu, T3J);
            T3M = FMA(Tw, TE, T3L);
            T3N = T3K - T3M;
            T4Y = T3K + T3M;
          }
          {
            E Tl, T4Z, T30, T3O;
            Tl = Ta - Tk;
            TH = Tl - TG;
            T2P = TG + Tl;
            T4Z = Tk + Ta;
            T50 = T4Y + T4Z;
            T5x = T4Y - T4Z;
            T30 = T2X - T2Z;
            T32 = T30 - T31;
            T3z = T31 + T30;
            T3O = T2X + T2Z;
            T3P = T3N + T3O;
            T4D = T3N - T3O;
          }
        }
        {
          E T11, T34, TR, T36, T1c, T3R, T1m, T3T, TN, T18, T1i;
          T11 = FMA(TX, T10, TW);
          T34 = FNMS(TS, T10, T33);
          TN = W[21];
          TR = FNMS(TN, TQ, TM);
          T36 = FMA(TN, TL, T35);
          T18 = W[31];
          T1c = FNMS(T18, T1b, T17);
          T3R = FMA(T18, T16, T3Q);
          T1i = W[11];
          T1m = FNMS(T1i, T1l, T1h);
          T3T = FMA(T1i, T1g, T3S);
          {
            E T12, T1n, T51, T52;
            T12 = TR - T11;
            T1n = T1c - T1m;
            T1o = T12 - T1n;
            T2Q = T1n + T12;
            T51 = T3R + T3T;
            T52 = TR + T11;
            T53 = T51 + T52;
            T5w = T51 - T52;
          }
          {
            E T37, T38, T3U, T3V;
            T37 = T34 - T36;
            T38 = T1c + T1m;
            T39 = T37 - T38;
            T3A = T38 + T37;
            T3U = T3R - T3T;
            T3V = T36 + T34;
            T3W = T3U + T3V;
            T4E = T3U - T3V;
          }
        }
      }
      {
        E T4G, T4I, T2N, T2r, T4x, T4y, T4H, T4z;
        {
          E T4C, T4F, T1p, T2q;
          T4C = T4A - T4B;
          T4F = T4D - T4E;
          T4G = FNMS(KP618033988, T4F, T4C);
          T4I = FMA(KP618033988, T4C, T4F);
          T2N = T2E + T2M;
          T1p = TH + T1o;
          T2q = T1Y + T2p;
          T2r = T1p + T2q;
          T4x = FMA(KP250000000, T2r, T2N);
          T4y = T1p - T2q;
        }
        Im[WS(rs, 4)] = KP500000000 * (T2r - T2N);
        T4H = FNMS(KP559016994, T4y, T4x);
        Im[0] = -(KP500000000 * (FMA(KP951056516, T4I, T4H)));
        Im[WS(rs, 8)] = -(KP500000000 * (FNMS(KP951056516, T4I, T4H)));
        T4z = FMA(KP559016994, T4y, T4x);
        Ip[WS(rs, 3)] = KP500000000 * (FNMS(KP951056516, T4G, T4z));
        Ip[WS(rs, 7)] = KP500000000 * (FMA(KP951056516, T4G, T4z));
      }
      {
        E T4S, T4U, T4J, T4M, T4N, T4O, T4T, T4P;
        {
          E T4Q, T4R, T4K, T4L;
          T4Q = T2p - T1Y;
          T4R = T1o - TH;
          T4S = FNMS(KP618033988, T4R, T4Q);
          T4U = FMA(KP618033988, T4Q, T4R);
          T4J = T4j - T4k;
          T4K = T4D + T4E;
          T4L = T4A + T4B;
          T4M = T4K + T4L;
          T4N = FNMS(KP250000000, T4M, T4J);
          T4O = T4K - T4L;
        }
        Rm[WS(rs, 4)] = KP500000000 * (T4J + T4M);
        T4T = FMA(KP559016994, T4O, T4N);
        Rm[WS(rs, 8)] = KP500000000 * (FMA(KP951056516, T4U, T4T));
        Rm[0] = KP500000000 * (FNMS(KP951056516, T4U, T4T));
        T4P = FNMS(KP559016994, T4O, T4N);
        Rp[WS(rs, 3)] = KP500000000 * (FMA(KP951056516, T4S, T4P));
        Rp[WS(rs, 7)] = KP500000000 * (FNMS(KP951056516, T4S, T4P));
      }
      {
        E T4d, T4f, T2O, T2V, T3G, T3H, T4e, T3I;
        {
          E T3X, T4c, T2R, T2U;
          T3X = T3P - T3W;
          T4c = T44 - T4b;
          T4d = FMA(KP618033988, T4c, T3X);
          T4f = FNMS(KP618033988, T3X, T4c);
          T2O = T2M - T2E;
          T2R = T2P + T2Q;
          T2U = T2S + T2T;
          T2V = T2R + T2U;
          T3G = FNMS(KP250000000, T2V, T2O);
          T3H = T2R - T2U;
        }
        Ip[WS(rs, 5)] = KP500000000 * (T2O + T2V);
        T4e = FNMS(KP559016994, T3H, T3G);
        Im[WS(rs, 2)] = -(KP500000000 * (FMA(KP951056516, T4f, T4e)));
        Im[WS(rs, 6)] = -(KP500000000 * (FNMS(KP951056516, T4f, T4e)));
        T3I = FMA(KP559016994, T3H, T3G);
        Ip[WS(rs, 1)] = KP500000000 * (FNMS(KP951056516, T4d, T3I));
        Ip[WS(rs, 9)] = KP500000000 * (FMA(KP951056516, T4d, T3I));
      }
      {
        E T4u, T4w, T4l, T4o, T4p, T4q, T4v, T4r;
        {
          E T4s, T4t, T4m, T4n;
          T4s = T2P - T2Q;
          T4t = T2S - T2T;
          T4u = FMA(KP618033988, T4t, T4s);
          T4w = FNMS(KP618033988, T4s, T4t);
          T4l = T4j + T4k;
          T4m = T3P + T3W;
          T4n = T44 + T4b;
          T4o = T4m + T4n;
          T4p = FNMS(KP250000000, T4o, T4l);
          T4q = T4m - T4n;
        }
        Rp[WS(rs, 5)] = KP500000000 * (T4l + T4o);
        T4v = FNMS(KP559016994, T4q, T4p);
        Rm[WS(rs, 6)] = KP500000000 * (FMA(KP951056516, T4w, T4v));
        Rm[WS(rs, 2)] = KP500000000 * (FNMS(KP951056516, T4w, T4v));
        T4r = FMA(KP559016994, T4q, T4p);
        Rp[WS(rs, 1)] = KP500000000 * (FMA(KP951056516, T4u, T4r));
        Rp[WS(rs, 9)] = KP500000000 * (FNMS(KP951056516, T4u, T4r));
      }
      {
        E T5C, T5E, T3x, T3q, T5t, T5u, T5D, T5v;
        {
          E T5y, T5B, T3a, T3p;
          T5y = T5w - T5x;
          T5B = T5z - T5A;
          T5C = FNMS(KP618033988, T5B, T5y);
          T5E = FMA(KP618033988, T5y, T5B);
          T3x = T3v + T3w;
          T3a = T32 + T39;
          T3p = T3h + T3o;
          T3q = T3a + T3p;
          T5t = FMA(KP250000000, T3q, T3x);
          T5u = T3p - T3a;
        }
        Im[WS(rs, 9)] = KP500000000 * (T3q - T3x);
        T5D = FNMS(KP559016994, T5u, T5t);
        Ip[WS(rs, 2)] = KP500000000 * (FMA(KP951056516, T5E, T5D));
        Im[WS(rs, 1)] = -(KP500000000 * (FNMS(KP951056516, T5E, T5D)));
        T5v = FMA(KP559016994, T5u, T5t);
        Ip[WS(rs, 6)] = KP500000000 * (FMA(KP951056516, T5C, T5v));
        Im[WS(rs, 5)] = -(KP500000000 * (FNMS(KP951056516, T5C, T5v)));
      }
      {
        E T5O, T5Q, T5F, T5I, T5J, T5K, T5P, T5L;
        {
          E T5M, T5N, T5G, T5H;
          T5M = T3o - T3h;
          T5N = T39 - T32;
          T5O = FNMS(KP618033988, T5N, T5M);
          T5Q = FMA(KP618033988, T5M, T5N);
          T5F = T4V - T4W;
          T5G = T5x + T5w;
          T5H = T5z + T5A;
          T5I = T5G + T5H;
          T5J = FNMS(KP250000000, T5I, T5F);
          T5K = T5G - T5H;
        }
        Rm[WS(rs, 9)] = KP500000000 * (T5F + T5I);
        T5P = FMA(KP559016994, T5K, T5J);
        Rp[WS(rs, 6)] = KP500000000 * (FMA(KP951056516, T5Q, T5P));
        Rm[WS(rs, 5)] = KP500000000 * (FNMS(KP951056516, T5Q, T5P));
        T5L = FNMS(KP559016994, T5K, T5J);
        Rp[WS(rs, 2)] = KP500000000 * (FNMS(KP951056516, T5O, T5L));
        Rm[WS(rs, 1)] = KP500000000 * (FMA(KP951056516, T5O, T5L));
      }
      {
        E T5q, T5s, T3y, T3F, T5l, T5m, T5r, T5n;
        {
          E T5o, T5p, T3B, T3E;
          T5o = T50 - T53;
          T5p = T5a - T57;
          T5q = FNMS(KP618033988, T5p, T5o);
          T5s = FMA(KP618033988, T5o, T5p);
          T3y = T3w - T3v;
          T3B = T3z + T3A;
          T3E = T3C + T3D;
          T3F = T3B + T3E;
          T5l = FNMS(KP250000000, T3F, T3y);
          T5m = T3B - T3E;
        }
        Ip[0] = KP500000000 * (T3y + T3F);
        T5r = FNMS(KP559016994, T5m, T5l);
        Ip[WS(rs, 8)] = KP500000000 * (FMA(KP951056516, T5s, T5r));
        Im[WS(rs, 7)] = -(KP500000000 * (FNMS(KP951056516, T5s, T5r)));
        T5n = FMA(KP559016994, T5m, T5l);
        Ip[WS(rs, 4)] = KP500000000 * (FMA(KP951056516, T5q, T5n));
        Im[WS(rs, 3)] = -(KP500000000 * (FNMS(KP951056516, T5q, T5n)));
      }
      {
        E T5i, T5k, T4X, T5c, T5d, T5e, T5j, T5f;
        {
          E T5g, T5h, T54, T5b;
          T5g = T3z - T3A;
          T5h = T3C - T3D;
          T5i = FMA(KP618033988, T5h, T5g);
          T5k = FNMS(KP618033988, T5g, T5h);
          T4X = T4V + T4W;
          T54 = T50 + T53;
          T5b = T57 + T5a;
          T5c = T54 + T5b;
          T5d = FNMS(KP250000000, T5c, T4X);
          T5e = T54 - T5b;
        }
        Rp[0] = KP500000000 * (T4X + T5c);
        T5j = FNMS(KP559016994, T5e, T5d);
        Rp[WS(rs, 8)] = KP500000000 * (FMA(KP951056516, T5k, T5j));
        Rm[WS(rs, 7)] = KP500000000 * (FNMS(KP951056516, T5k, T5j));
        T5f = FMA(KP559016994, T5e, T5d);
        Rp[WS(rs, 4)] = KP500000000 * (FNMS(KP951056516, T5i, T5f));
        Rm[WS(rs, 3)] = KP500000000 * (FMA(KP951056516, T5i, T5f));
      }
    }
  }
}

static const tw_instr twinstr[] = {{TW_FULL, 1, 20}, {TW_NEXT, 1, 0}};

static const hc2c_desc desc = {
    20, "hc2cfdft_20", twinstr, &GENUS, {176, 78, 110, 0}};

void X(codelet_hc2cfdft_20)(planner *p) {
  X(khc2c_register)(p, hc2cfdft_20, &desc, HC2C_VIA_DFT);
}
#else

/* Generated by: ../../../genfft/gen_hc2cdft.native -compact -variables 4
 * -pipeline-latency 4 -n 20 -dit -name hc2cfdft_20 -include rdft/scalar/hc2cf.h
 */

/*
 * This function contains 286 FP additions, 140 FP multiplications,
 * (or, 224 additions, 78 multiplications, 62 fused multiply/add),
 * 98 stack variables, 5 constants, and 80 memory accesses
 */
#include "rdft/scalar/hc2cf.h"

static void hc2cfdft_20(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs,
                        INT mb, INT me, INT ms) {
  DK(KP125000000, +0.125000000000000000000000000000000000000000000);
  DK(KP500000000, +0.500000000000000000000000000000000000000000000);
  DK(KP279508497, +0.279508497187473712051146708591409529430077295);
  DK(KP293892626, +0.293892626146236564584352977319536384298826219);
  DK(KP475528258, +0.475528258147576786058219666689691071702849317);
  {
    INT m;
    for (m = mb, W = W + ((mb - 1) * 38); m < me; m = m + 1, Rp = Rp + ms,
        Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 38,
        MAKE_VOLATILE_STRIDE(80, rs)) {
      E T12, T2w, T4o, T4V, T2H, T3a, T4y, T4Y, T1z, T2v, T25, T2y, T2s, T2z,
          T4v;
      E T4X, T4r, T4U, T3A, T3Z, T2X, T37, T3k, T41, T2M, T39, T3v, T3Y, T2S,
          T36;
      E T3p, T42, Td, T4G, T33, T3N, Tw, T4H, T32, T3O;
      {
        E T3, T3L, T1x, T2V, Th, Tl, TC, T3g, Tq, Tu, TH, T3h, T7, Tb, T1q;
        E T2U, TR, T2P, T1F, T3r, T23, T2K, T2f, T3y, T1k, T3m, T2q, T2E, T10,
            T2Q;
        E T1K, T3s, T1U, T2J, T2a, T3x, T1b, T3l, T2l, T2D;
        {
          E T1, T2, T1s, T1u, T1v, T1w, T1r, T1t;
          T1 = Ip[0];
          T2 = Im[0];
          T1s = T1 + T2;
          T1u = Rp[0];
          T1v = Rm[0];
          T1w = T1u - T1v;
          T3 = T1 - T2;
          T3L = T1u + T1v;
          T1r = W[0];
          T1t = W[1];
          T1x = FNMS(T1t, T1w, T1r * T1s);
          T2V = FMA(T1r, T1w, T1t * T1s);
        }
        {
          E Tf, Tg, Tz, Tj, Tk, TB, Ty, TA;
          Tf = Ip[WS(rs, 2)];
          Tg = Im[WS(rs, 2)];
          Tz = Tf - Tg;
          Tj = Rp[WS(rs, 2)];
          Tk = Rm[WS(rs, 2)];
          TB = Tj + Tk;
          Th = Tf + Tg;
          Tl = Tj - Tk;
          Ty = W[6];
          TA = W[7];
          TC = FNMS(TA, TB, Ty * Tz);
          T3g = FMA(TA, Tz, Ty * TB);
        }
        {
          E To, Tp, TE, Ts, Tt, TG, TD, TF;
          To = Ip[WS(rs, 7)];
          Tp = Im[WS(rs, 7)];
          TE = To - Tp;
          Ts = Rp[WS(rs, 7)];
          Tt = Rm[WS(rs, 7)];
          TG = Ts + Tt;
          Tq = To + Tp;
          Tu = Ts - Tt;
          TD = W[26];
          TF = W[27];
          TH = FNMS(TF, TG, TD * TE);
          T3h = FMA(TF, TE, TD * TG);
        }
        {
          E T5, T6, T1n, T9, Ta, T1p, T1m, T1o;
          T5 = Ip[WS(rs, 5)];
          T6 = Im[WS(rs, 5)];
          T1n = T5 + T6;
          T9 = Rp[WS(rs, 5)];
          Ta = Rm[WS(rs, 5)];
          T1p = T9 - Ta;
          T7 = T5 - T6;
          Tb = T9 + Ta;
          T1m = W[20];
          T1o = W[21];
          T1q = FNMS(T1o, T1p, T1m * T1n);
          T2U = FMA(T1m, T1p, T1o * T1n);
        }
        {
          E TM, T1C, TQ, T1E;
          {
            E TK, TL, TO, TP;
            TK = Ip[WS(rs, 4)];
            TL = Im[WS(rs, 4)];
            TM = TK + TL;
            T1C = TK - TL;
            TO = Rp[WS(rs, 4)];
            TP = Rm[WS(rs, 4)];
            TQ = TO - TP;
            T1E = TO + TP;
          }
          {
            E TJ, TN, T1B, T1D;
            TJ = W[16];
            TN = W[17];
            TR = FNMS(TN, TQ, TJ * TM);
            T2P = FMA(TN, TM, TJ * TQ);
            T1B = W[14];
            T1D = W[15];
            T1F = FNMS(T1D, T1E, T1B * T1C);
            T3r = FMA(T1D, T1C, T1B * T1E);
          }
        }
        {
          E T1Y, T2c, T22, T2e;
          {
            E T1W, T1X, T20, T21;
            T1W = Ip[WS(rs, 1)];
            T1X = Im[WS(rs, 1)];
            T1Y = T1W + T1X;
            T2c = T1W - T1X;
            T20 = Rp[WS(rs, 1)];
            T21 = Rm[WS(rs, 1)];
            T22 = T20 - T21;
            T2e = T20 + T21;
          }
          {
            E T1V, T1Z, T2b, T2d;
            T1V = W[4];
            T1Z = W[5];
            T23 = FNMS(T1Z, T22, T1V * T1Y);
            T2K = FMA(T1Z, T1Y, T1V * T22);
            T2b = W[2];
            T2d = W[3];
            T2f = FNMS(T2d, T2e, T2b * T2c);
            T3y = FMA(T2d, T2c, T2b * T2e);
          }
        }
        {
          E T1f, T2n, T1j, T2p;
          {
            E T1d, T1e, T1h, T1i;
            T1d = Ip[WS(rs, 3)];
            T1e = Im[WS(rs, 3)];
            T1f = T1d - T1e;
            T2n = T1d + T1e;
            T1h = Rp[WS(rs, 3)];
            T1i = Rm[WS(rs, 3)];
            T1j = T1h + T1i;
            T2p = T1h - T1i;
          }
          {
            E T1c, T1g, T2m, T2o;
            T1c = W[10];
            T1g = W[11];
            T1k = FNMS(T1g, T1j, T1c * T1f);
            T3m = FMA(T1c, T1j, T1g * T1f);
            T2m = W[12];
            T2o = W[13];
            T2q = FNMS(T2o, T2p, T2m * T2n);
            T2E = FMA(T2m, T2p, T2o * T2n);
          }
        }
        {
          E TV, T1H, TZ, T1J;
          {
            E TT, TU, TX, TY;
            TT = Ip[WS(rs, 9)];
            TU = Im[WS(rs, 9)];
            TV = TT + TU;
            T1H = TT - TU;
            TX = Rp[WS(rs, 9)];
            TY = Rm[WS(rs, 9)];
            TZ = TX - TY;
            T1J = TX + TY;
          }
          {
            E TS, TW, T1G, T1I;
            TS = W[36];
            TW = W[37];
            T10 = FNMS(TW, TZ, TS * TV);
            T2Q = FMA(TW, TV, TS * TZ);
            T1G = W[34];
            T1I = W[35];
            T1K = FNMS(T1I, T1J, T1G * T1H);
            T3s = FMA(T1I, T1H, T1G * T1J);
          }
        }
        {
          E T1P, T27, T1T, T29;
          {
            E T1N, T1O, T1R, T1S;
            T1N = Ip[WS(rs, 6)];
            T1O = Im[WS(rs, 6)];
            T1P = T1N + T1O;
            T27 = T1N - T1O;
            T1R = Rp[WS(rs, 6)];
            T1S = Rm[WS(rs, 6)];
            T1T = T1R - T1S;
            T29 = T1R + T1S;
          }
          {
            E T1M, T1Q, T26, T28;
            T1M = W[24];
            T1Q = W[25];
            T1U = FNMS(T1Q, T1T, T1M * T1P);
            T2J = FMA(T1Q, T1P, T1M * T1T);
            T26 = W[22];
            T28 = W[23];
            T2a = FNMS(T28, T29, T26 * T27);
            T3x = FMA(T28, T27, T26 * T29);
          }
        }
        {
          E T16, T2k, T1a, T2i;
          {
            E T14, T15, T18, T19;
            T14 = Ip[WS(rs, 8)];
            T15 = Im[WS(rs, 8)];
            T16 = T14 - T15;
            T2k = T14 + T15;
            T18 = Rp[WS(rs, 8)];
            T19 = Rm[WS(rs, 8)];
            T1a = T18 + T19;
            T2i = T19 - T18;
          }
          {
            E T13, T17, T2h, T2j;
            T13 = W[30];
            T17 = W[31];
            T1b = FNMS(T17, T1a, T13 * T16);
            T3l = FMA(T13, T1a, T17 * T16);
            T2h = W[33];
            T2j = W[32];
            T2l = FMA(T2h, T2i, T2j * T2k);
            T2D = FNMS(T2h, T2k, T2j * T2i);
          }
        }
        {
          E T2g, T2r, T3n, T3o;
          {
            E TI, T11, T4m, T4n;
            TI = TC - TH;
            T11 = TR - T10;
            T12 = TI - T11;
            T2w = TI + T11;
            T4m = T3g + T3h;
            T4n = TR + T10;
            T4o = T4m + T4n;
            T4V = T4m - T4n;
          }
          {
            E T2F, T2G, T4w, T4x;
            T2F = T2D - T2E;
            T2G = T2a + T2f;
            T2H = T2F - T2G;
            T3a = T2F + T2G;
            T4w = T2l + T2q;
            T4x = T3x + T3y;
            T4y = T4w + T4x;
            T4Y = T4x - T4w;
          }
          {
            E T1l, T1y, T1L, T24;
            T1l = T1b - T1k;
            T1y = T1q - T1x;
            T1z = T1l + T1y;
            T2v = T1y - T1l;
            T1L = T1F - T1K;
            T24 = T1U - T23;
            T25 = T1L - T24;
            T2y = T1L + T24;
          }
          T2g = T2a - T2f;
          T2r = T2l - T2q;
          T2s = T2g - T2r;
          T2z = T2r + T2g;
          {
            E T4t, T4u, T4p, T4q;
            T4t = T3r + T3s;
            T4u = T1U + T23;
            T4v = T4t + T4u;
            T4X = T4t - T4u;
            T4p = T3l + T3m;
            T4q = T1q + T1x;
            T4r = T4p + T4q;
            T4U = T4p - T4q;
          }
          {
            E T3w, T3z, T2T, T2W;
            T3w = T2D + T2E;
            T3z = T3x - T3y;
            T3A = T3w + T3z;
            T3Z = T3z - T3w;
            T2T = T1b + T1k;
            T2W = T2U + T2V;
            T2X = T2T + T2W;
            T37 = T2T - T2W;
          }
          {
            E T3i, T3j, T2I, T2L;
            T3i = T3g - T3h;
            T3j = T2Q - T2P;
            T3k = T3i + T3j;
            T41 = T3i - T3j;
            T2I = T1F + T1K;
            T2L = T2J + T2K;
            T2M = T2I + T2L;
            T39 = T2I - T2L;
          }
          {
            E T3t, T3u, T2O, T2R;
            T3t = T3r - T3s;
            T3u = T2K - T2J;
            T3v = T3t + T3u;
            T3Y = T3t - T3u;
            T2O = TC + TH;
            T2R = T2P + T2Q;
            T2S = T2O + T2R;
            T36 = T2O - T2R;
          }
          T3n = T3l - T3m;
          T3o = T2U - T2V;
          T3p = T3n + T3o;
          T42 = T3n - T3o;
          {
            E Tc, T3M, T4, T8;
            T4 = W[18];
            T8 = W[19];
            Tc = FNMS(T8, Tb, T4 * T7);
            T3M = FMA(T4, Tb, T8 * T7);
            Td = T3 - Tc;
            T4G = T3L + T3M;
            T33 = Tc + T3;
            T3N = T3L - T3M;
          }
          {
            E Tm, T30, Tv, T31;
            {
              E Te, Ti, Tn, Tr;
              Te = W[8];
              Ti = W[9];
              Tm = FNMS(Ti, Tl, Te * Th);
              T30 = FMA(Ti, Th, Te * Tl);
              Tn = W[28];
              Tr = W[29];
              Tv = FNMS(Tr, Tu, Tn * Tq);
              T31 = FMA(Tr, Tq, Tn * Tu);
            }
            Tw = Tm - Tv;
            T4H = Tm + Tv;
            T32 = T30 + T31;
            T3O = T31 - T30;
          }
        }
      }
      {
        E T3C, T3E, Tx, T2u, T3d, T3e, T3D, T3f;
        {
          E T3q, T3B, T1A, T2t;
          T3q = T3k - T3p;
          T3B = T3v - T3A;
          T3C = FMA(KP475528258, T3q, KP293892626 * T3B);
          T3E = FNMS(KP293892626, T3q, KP475528258 * T3B);
          Tx = Td - Tw;
          T1A = T12 + T1z;
          T2t = T25 + T2s;
          T2u = T1A + T2t;
          T3d = KP279508497 * (T1A - T2t);
          T3e = FNMS(KP125000000, T2u, KP500000000 * Tx);
        }
        Ip[WS(rs, 5)] = KP500000000 * (Tx + T2u);
        T3D = T3d - T3e;
        Im[WS(rs, 2)] = T3D - T3E;
        Im[WS(rs, 6)] = T3D + T3E;
        T3f = T3d + T3e;
        Ip[WS(rs, 1)] = T3f - T3C;
        Ip[WS(rs, 9)] = T3f + T3C;
      }
      {
        E T3H, T3T, T3P, T3Q, T3K, T3R, T3U, T3S;
        {
          E T3F, T3G, T3I, T3J;
          T3F = T12 - T1z;
          T3G = T25 - T2s;
          T3H = FMA(KP475528258, T3F, KP293892626 * T3G);
          T3T = FNMS(KP293892626, T3F, KP475528258 * T3G);
          T3P = T3N + T3O;
          T3I = T3k + T3p;
          T3J = T3v + T3A;
          T3Q = T3I + T3J;
          T3K = KP279508497 * (T3I - T3J);
          T3R = FNMS(KP125000000, T3Q, KP500000000 * T3P);
        }
        Rp[WS(rs, 5)] = KP500000000 * (T3P + T3Q);
        T3U = T3R - T3K;
        Rm[WS(rs, 6)] = T3T + T3U;
        Rm[WS(rs, 2)] = T3U - T3T;
        T3S = T3K + T3R;
        Rp[WS(rs, 1)] = T3H + T3S;
        Rp[WS(rs, 9)] = T3S - T3H;
      }
      {
        E T44, T46, T2C, T2B, T3V, T3W, T45, T3X;
        {
          E T40, T43, T2x, T2A;
          T40 = T3Y - T3Z;
          T43 = T41 - T42;
          T44 = FNMS(KP293892626, T43, KP475528258 * T40);
          T46 = FMA(KP475528258, T43, KP293892626 * T40);
          T2C = Tw + Td;
          T2x = T2v - T2w;
          T2A = T2y + T2z;
          T2B = T2x - T2A;
          T3V = FMA(KP500000000, T2C, KP125000000 * T2B);
          T3W = KP279508497 * (T2x + T2A);
        }
        Im[WS(rs, 4)] = KP500000000 * (T2B - T2C);
        T45 = T3W - T3V;
        Im[0] = T45 - T46;
        Im[WS(rs, 8)] = T45 + T46;
        T3X = T3V + T3W;
        Ip[WS(rs, 3)] = T3X - T44;
        Ip[WS(rs, 7)] = T3X + T44;
      }
      {
        E T49, T4h, T4a, T4d, T4e, T4f, T4i, T4g;
        {
          E T47, T48, T4b, T4c;
          T47 = T2y - T2z;
          T48 = T2w + T2v;
          T49 = FNMS(KP293892626, T48, KP475528258 * T47);
          T4h = FMA(KP475528258, T48, KP293892626 * T47);
          T4a = T3N - T3O;
          T4b = T41 + T42;
          T4c = T3Y + T3Z;
          T4d = T4b + T4c;
          T4e = FNMS(KP125000000, T4d, KP500000000 * T4a);
          T4f = KP279508497 * (T4b - T4c);
        }
        Rm[WS(rs, 4)] = KP500000000 * (T4a + T4d);
        T4i = T4f + T4e;
        Rm[WS(rs, 8)] = T4h + T4i;
        Rm[0] = T4i - T4h;
        T4g = T4e - T4f;
        Rp[WS(rs, 3)] = T49 + T4g;
        Rp[WS(rs, 7)] = T4g - T49;
      }
      {
        E T50, T52, T34, T2Z, T4R, T4S, T51, T4T;
        {
          E T4W, T4Z, T2N, T2Y;
          T4W = T4U - T4V;
          T4Z = T4X - T4Y;
          T50 = FNMS(KP293892626, T4Z, KP475528258 * T4W);
          T52 = FMA(KP293892626, T4W, KP475528258 * T4Z);
          T34 = T32 + T33;
          T2N = T2H - T2M;
          T2Y = T2S + T2X;
          T2Z = T2N - T2Y;
          T4R = FMA(KP500000000, T34, KP125000000 * T2Z);
          T4S = KP279508497 * (T2Y + T2N);
        }
        Im[WS(rs, 9)] = KP500000000 * (T2Z - T34);
        T51 = T4R - T4S;
        Ip[WS(rs, 2)] = T51 + T52;
        Im[WS(rs, 1)] = T52 - T51;
        T4T = T4R + T4S;
        Ip[WS(rs, 6)] = T4T + T50;
        Im[WS(rs, 5)] = T50 - T4T;
      }
      {
        E T5c, T5d, T53, T56, T57, T58, T5e, T59;
        {
          E T5a, T5b, T54, T55;
          T5a = T2M + T2H;
          T5b = T2S - T2X;
          T5c = FNMS(KP293892626, T5b, KP475528258 * T5a);
          T5d = FMA(KP475528258, T5b, KP293892626 * T5a);
          T53 = T4G - T4H;
          T54 = T4V + T4U;
          T55 = T4X + T4Y;
          T56 = T54 + T55;
          T57 = FNMS(KP125000000, T56, KP500000000 * T53);
          T58 = KP279508497 * (T54 - T55);
        }
        Rm[WS(rs, 9)] = KP500000000 * (T53 + T56);
        T5e = T58 + T57;
        Rp[WS(rs, 6)] = T5d + T5e;
        Rm[WS(rs, 5)] = T5e - T5d;
        T59 = T57 - T58;
        Rp[WS(rs, 2)] = T59 - T5c;
        Rm[WS(rs, 1)] = T5c + T59;
      }
      {
        E T4A, T4C, T35, T3c, T4j, T4k, T4B, T4l;
        {
          E T4s, T4z, T38, T3b;
          T4s = T4o - T4r;
          T4z = T4v - T4y;
          T4A = FNMS(KP475528258, T4z, KP293892626 * T4s);
          T4C = FMA(KP475528258, T4s, KP293892626 * T4z);
          T35 = T33 - T32;
          T38 = T36 + T37;
          T3b = T39 + T3a;
          T3c = T38 + T3b;
          T4j = FNMS(KP125000000, T3c, KP500000000 * T35);
          T4k = KP279508497 * (T38 - T3b);
        }
        Ip[0] = KP500000000 * (T35 + T3c);
        T4B = T4k + T4j;
        Ip[WS(rs, 4)] = T4B + T4C;
        Im[WS(rs, 3)] = T4C - T4B;
        T4l = T4j - T4k;
        Ip[WS(rs, 8)] = T4l + T4A;
        Im[WS(rs, 7)] = T4A - T4l;
      }
      {
        E T4O, T4P, T4I, T4J, T4F, T4K, T4Q, T4L;
        {
          E T4M, T4N, T4D, T4E;
          T4M = T36 - T37;
          T4N = T39 - T3a;
          T4O = FMA(KP475528258, T4M, KP293892626 * T4N);
          T4P = FNMS(KP293892626, T4M, KP475528258 * T4N);
          T4I = T4G + T4H;
          T4D = T4o + T4r;
          T4E = T4v + T4y;
          T4J = T4D + T4E;
          T4F = KP279508497 * (T4D - T4E);
          T4K = FNMS(KP125000000, T4J, KP500000000 * T4I);
        }
        Rp[0] = KP500000000 * (T4I + T4J);
        T4Q = T4K - T4F;
        Rp[WS(rs, 8)] = T4P + T4Q;
        Rm[WS(rs, 7)] = T4Q - T4P;
        T4L = T4F + T4K;
        Rp[WS(rs, 4)] = T4L - T4O;
        Rm[WS(rs, 3)] = T4O + T4L;
      }
    }
  }
}

static const tw_instr twinstr[] = {{TW_FULL, 1, 20}, {TW_NEXT, 1, 0}};

static const hc2c_desc desc = {
    20, "hc2cfdft_20", twinstr, &GENUS, {224, 78, 62, 0}};

void X(codelet_hc2cfdft_20)(planner *p) {
  X(khc2c_register)(p, hc2cfdft_20, &desc, HC2C_VIA_DFT);
}
#endif
