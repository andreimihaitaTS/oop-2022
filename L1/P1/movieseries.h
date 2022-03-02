#pragma once

#include "movie.h"

class MovieSeries {
  private:
    Movie movies[16];
    unsigned size;

  public:
    void init();
    void add(const Movie &movie);
    void print() const; 
};