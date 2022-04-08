#include <iostream>
#include <vector>
#include "Matrix.hpp"

using namespace std;
namespace zich
{   
    // positiv opertors

    Matrix &Matrix::operator++(){
        return *this;}

    Matrix &Matrix::operator+(){
        return *this;}

    Matrix Matrix::operator+(const Matrix &val) const{
       return *this;}
    
    
    Matrix Matrix::operator++(const int val) {
       return *this;}
    
    // negtiv opertors
    Matrix Matrix::operator-(const Matrix &val) const{
      return *this;}

    Matrix &Matrix::operator--(){
        return *this;}

    Matrix Matrix::operator-() const{ 
       return *this;}
    
    Matrix Matrix::operator--(const int val){
       return *this;}

    // multiplay opertors

    Matrix Matrix::operator*(const Matrix &val) const{
      return *this;}

    Matrix Matrix::operator*(const double scal) const{
      return *this;}
    
    
    // eqwel and operisons opertors

    Matrix &Matrix::operator+=(const Matrix &val){
        return *this;}
    
    Matrix &Matrix::operator-=(const Matrix &val){
        return *this;}
    
    Matrix &Matrix::operator*=(const double scal){
        return *this;}
    
    Matrix &Matrix::operator*=(const Matrix &val){
        return *this;}

    // Input/output
    std::ostream& operator<<(std::ostream& os , const Matrix& val){
        return os;}
    
    Matrix operator*(const double scal, const Matrix &val){
        return val;}
    
    std::istream& operator>> (std::istream &is, Matrix& val){
        return is;
    }

    // Compering operators
    bool Matrix::operator>=(const Matrix &val) const{
        return false;}
    
    bool Matrix::operator>(const Matrix &val) const{
       return false;}
    
    bool Matrix::operator<(const Matrix &val) const{
     return false;}
    
    bool Matrix::operator!=( const Matrix &val) const {
        return false;}
    
    bool Matrix::operator<=(const Matrix &val) const{
      return false;}

    bool Matrix::operator==(const Matrix &val) const{
        return false;}
}