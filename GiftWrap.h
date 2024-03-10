//Class: CS/IS 135-71LEC (1221)
//2022 Spring Online class
//Computer Information System
//  Homework7
//  Created by rayni on 5/27/22.

//         UML

//-----------------------------
//       GiftWrap
//-----------------------------
//     -length:double
//     -width:double
//     -height:double
//     -taxRate:double
//     -pricePerInch:double
//     -subtotal:double

//  -----------------------------
//    +GiftWrap()
//    +GiftWrap(taxRate:double)
//    pricePerInch(double)
//    +setlength(double)
//    +setwidth(double)
//    +setheight(double)
//    +setpricePerInch(double)
//    +settaxRate(double)
//    +getlength(double)
//    +getwidth(double)
//    +getheight(double)
//    +getpricePerInch(double)
//    +gettaxRate(double)
//    +calcSubtotal()
//    +calcTax()
//    +calcTotal()

#include <string>
#include <iostream>
#ifndef GiftWrap_h
#define GiftWrap_h
using namespace std;
class GiftWrap
{
 private:
    double  length;
    double  width;
    double  height;
    double  taxRate;
    double  pricePerInch;
 public:
    GiftWrap();
    GiftWrap(double,double);
    bool setLength(double);
    bool setWidth(double);
    bool setHeight(double);
    bool setTaxRate(double);
    bool setPricePerInch(double);
    
    
    double getLength()const;
    double getWidth();
    double getHeight();
    double getTaxRate()const;
    double getPricePerInce()const;
    
    
    double calcSubtotal()const;
    double calctotalTax()const;
    double calcTotalPayment()const;
   
};

#endif /* GiftWrap_h */
