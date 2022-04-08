#include "doctest.h"
#include "Matrix.hpp"
#include <stdexcept>


using namespace std;


namespace zich{
TEST_CASE("Constructor"){
    vector<double> vac1 = {1,2,3,4,5,6,7,8,9};
    vector<double> vac2 = {1,2,3,4,5,6,7,8,9,10,11,12};
    vector<double> vac3 = {1,2,3,4};
    vector<double> vac4 = {1,2,3,4,5,6};

    SUBCASE("Bad Input"){
       CHECK_THROWS( Matrix a(vac1 ,4,3)); // shoud be 12 perm but we have 9
       CHECK_THROWS( Matrix a(vac1 ,3,4)); // shoud be 12 perm but we have 9
       CHECK_THROWS( Matrix a(vac3 ,1,1)); // shoud be 1 perm but we have 4
       CHECK_THROWS( Matrix a(vac4 ,3,4)); // shoud be 12 perm but we have 6
    }

    SUBCASE("negitiv number in the row"){
       CHECK_THROWS( Matrix a(vac1 ,-4,3)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac1 ,-3,4)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac3 ,-1,1)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac4 ,-3,4)); // cant be negitiv nuber
    }

    SUBCASE("negitiv number in the colom"){
       CHECK_THROWS( Matrix a(vac1 ,4,-3)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac1 ,3,-4)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac3 ,1,-1)); // cant be negitiv nuber
       CHECK_THROWS( Matrix a(vac4 ,3,-4)); // cant be negitiv nuber
    }
}
TEST_CASE("operison"){
    SUBCASE("add cases"){
        vector<double> vac5 = {1,2,3,4,5,6,7,8,9};
        vector<double> vac6 = {1,2,3,4,5,6,7,8,9};
        vector<double> vec8 = {0,0,0,0,0,0,0,0,0};
        vector<double> vec9 = {-1,-2,-3,-4,-5,-6,-7,-8,-9};
        vector<double> vec7 = {2,4,6,8,10,12,14,16,18};

        Matrix a(vac5,3,3);
        Matrix b(vac6,3,3);
        Matrix c(vec8,3,3);
        Matrix d(vec9,3,3);
        Matrix e(vec7,3,3);
        Matrix sum = a+b;
        Matrix sum4 = e+d;
        Matrix sum2 = a+c;
        Matrix sum3 = a+d;

        CHECK(sum2 == a);
        CHECK(sum == e);
        CHECK(sum3 == c);
        CHECK(sum4 == a);}

    SUBCASE("sub cases"){  
        vector<double> vac5 = {1,2,3,4,5,6,7,8,9};
        vector<double> vac6 = {1,2,3,4,5,6,7,8,9};
        vector<double> vec7 = {2,4,6,8,10,12,14,16,18};
        vector<double> vec8 = {0,0,0,0,0,0,0,0,0};
        vector<double> vec9 = {-1,-2,-3,-4,-5,-6,-7,-8,-9};
        
        Matrix a(vac5,3,3);
        Matrix b(vac6,3,3);
        Matrix e(vec7,3,3);
        Matrix c(vec8,3,3);
        Matrix d(vec9,3,3);      
        Matrix sum = a-b;
        Matrix sum2 = d-e;

        CHECK(sum == c);
        CHECK(sum2 == a);
        }
        SUBCASE("Compare tests"){

        vector<double> m = {2,3,3,2,3,3,2,3,3};
        vector<double> k = {1,1,1,1,1,1,1,1,1};
        vector<double> l = {1,2,3,4,5,6,7,8,9};
        vector<double> p = {2,3,4,5,6,7,8,9,10};

        Matrix matr1(m,3,3);
        Matrix matr2(k,3,3);
        Matrix matr3(l,3,3);
        Matrix matr4(p,3,3);

        CHECK(matr1==matr1);
        CHECK(matr3==matr3);
        CHECK_FALSE(matr3!=matr3);
        CHECK(matr4!=matr1);

        CHECK_FALSE(matr2>matr1);
        CHECK(matr1>matr2);
        CHECK(matr4>matr3);
        CHECK(matr4>=matr3);
        matr2 += matr1;
        matr1--;
        CHECK_FALSE(matr1>matr2);
        CHECK_FALSE(matr1!=matr1);
        CHECK(matr3<=matr4);}
}}




        
        