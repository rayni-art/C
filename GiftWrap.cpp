//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.

#include "GiftWrap.h"
#include <iostream>
using namespace std;

GiftWrap::GiftWrap()

{
length = 1.0;
width =1.0;
height =1.0;
taxRate = 0.08;
pricePerInch=0.0036;
    
}

GiftWrap::GiftWrap(double tr, double ppi)
{
    
   if (tr >0 && tr<1)
       taxRate = tr;
    else
        taxRate=0;
    
    if (ppi >= 0)
        pricePerInch=ppi;
    else
        pricePerInch=0;
    
}
bool GiftWrap::setLength(double len)
{
    bool validData;
    
    if (len >0)
    {
        length=len;
        validData = true;

    }
    else
        validData=false;
    return validData;
}

bool GiftWrap::setWidth(double W)
{
    bool validData;
    
    if (W >=0)
    {
       width = W;
        validData = true;

    }
    else
        validData=false;
    return validData;
}
bool GiftWrap::setHeight(double H)
{
    bool validData;
    
    if (H>=0)
    {
       height = H;
        validData = true;

    }
    else
        validData=false;
    return validData;
}
bool GiftWrap::setTaxRate(double tr)
{
    bool validData;
    
    if (tr>0)
    {
        taxRate = tr;
        validData = true;

    }
    else
        validData=false;
    return validData;
}
bool GiftWrap::setPricePerInch(double ppi)
{
    bool validData;
    
    if (ppi>0)
    {
       pricePerInch = ppi;
        validData = true;

    }
    else
        validData=false;
    return validData;
}
double GiftWrap::getLength()const
{
    return length;
}
double GiftWrap::getWidth()
{
    return width;
}
double GiftWrap::getHeight()
{
    return height;
}
double GiftWrap::getTaxRate()const
{
    return taxRate;
}
double GiftWrap::getPricePerInce()const
{
    return pricePerInch;
}
double GiftWrap::calcSubtotal()const
{
    return (2 * length * width) + (2 * length * height) + (2 * width * height);
}
double GiftWrap::calctotalTax()const
{
    return calcSubtotal() * taxRate;
}
double GiftWrap::calcTotalPayment()const
{
    return calcSubtotal() + calctotalTax();
}
