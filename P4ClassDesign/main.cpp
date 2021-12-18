//
// main.cpp
// Class Design 
// CSCI 151
// Created by Yuna Kim on 12/15/21
//


#include "sectionA.h"
#include "sectionB.h"
#include "sectionC.h"
int main() {
    // test for part a
    WebUrl w1{ "https://hello.com/sjsjs" };
    w1.getwebUrl();
    w1.getScheme();
    w1.getAuthority();
    w1.getUrlpath();


    WebUrl w2{ "https://example.com/path/code" };
    w2.getwebUrl();
    w2.getScheme();
    w2.getAuthority();
    w2.getUrlpath();

    // test for part b
    ImageMD img1{ "file name", "PNG", 4, 4, 2004, 35.05, "Author name", 45, 75, "f/89024920", "1/321"
        , 400, true };
    img1.setImgType("PGG");
    img1.setDay(-10, img1);
    img1.setASize("f/sdfjsda");
    img1.setExpTime("-12/10302h29292");
    img1.setIsoValue(-388);
    printImageMetaData(img1);
    
    // test for part c
    Item i1{ "books", 124, 14.05, 5 };
    Item i2{ "tables", 135, 255.50, 4 };
    Item i3{ "games", 122, 75.59, 2 };
    Item i4{ "lanterns", 198, 25.34, 15 };
    Item i5{ "christmas trees", 205, 100.57, 14 };
    Store s1({i1, i2});
    s1.addItem(i3);
    s1.addItem(i4);
    s1.addItem(i5);
    printStoreInventory(s1);
    Order o1({i1, i4});
    o1.addOrderItem(i5);
    o1.getTotalOrderPrice();


    


}