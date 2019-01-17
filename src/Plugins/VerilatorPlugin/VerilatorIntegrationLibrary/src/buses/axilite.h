//
// Copyright (c) 2010-2019 Antmicro
//
// This file is licensed under the MIT License.
// Full license text is available in 'licenses/MIT.txt'.
//
#ifndef AxiLite_H
#define AxiLite_H
#include "bus.h"

struct AxiLite : public BaseBus {
    unsigned char *clk;
    unsigned char *rst;
    unsigned char *rxd;
    unsigned char *txd;
    unsigned char *awvalid;
    unsigned char *awready;
    unsigned char *wstrb;
    unsigned char *wvalid;
    unsigned char *wready;
    unsigned char *bresp;
    unsigned char *bvalid;
    unsigned char *bready;
    unsigned char *arvalid;
    unsigned char *arready;
    unsigned char *rresp;
    unsigned char *rvalid;
    unsigned char *rready;
    unsigned long *awaddr;
    unsigned long *wdata;
    unsigned long *araddr;
    unsigned long *rdata;

    virtual void tick(unsigned long steps);
    virtual void internalTick(unsigned long steps);
    virtual void write(unsigned long addr, unsigned long value);
    virtual unsigned long read(unsigned long addr);
    virtual void reset();
};
#endif