#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <vector>

namespace zich
{
class Matrix{
 
   private:
    int rows; // num of the rows in the metrix
    int cols; // num of the coloms in the metrix
    int size_matrix; // help to calculate the size of the matrix
    std::vector<double> matrix; 

   public:
   Matrix(std::vector<double> val, const int row, const int colom){ // constrector of the matrix
      rows = row;
      cols = colom;
      matrix = val;
      size_matrix = row * colom;
      }
   ~Matrix(){} // destrector

   int get_row()const{ // get the rows
      return rows;
      
   }

   int get_colum()const{ // get the coloms
      return cols;}
   
   
   // positiv opertors
   Matrix& operator+();
   Matrix operator+(const Matrix &val) const;
   Matrix& operator++();
   Matrix operator++(const int num);

   // negtiv opertors
   Matrix operator-(const Matrix &val) const;
   Matrix operator-() const;
   Matrix& operator--();
   Matrix operator--(const int num);

   // multiplay opertors
   Matrix operator*(const Matrix &val) const;
   Matrix operator*(const double scal) const;

   // eqwel and operisons opertors
   Matrix& operator+=(const Matrix &val);
   Matrix& operator-=(const Matrix &val);
   Matrix& operator*=(const Matrix &val);
   Matrix& operator*=(const double scal);

   // Input/output
   friend std::ostream& operator<<(std::ostream& os , const Matrix& val);
   friend std::istream& operator>> (std::istream &is, Matrix& val);
   friend Matrix operator*(const double scal, const Matrix &val);

   // Compering operators
   bool operator>(const Matrix &val) const;
   bool operator<(const Matrix &val) const;
   bool operator==(const Matrix &val) const;
   bool operator>=(const Matrix &val) const;
   bool operator<=(const Matrix &val) const;
   bool operator!=(const Matrix &val) const;
};

}