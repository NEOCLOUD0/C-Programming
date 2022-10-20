#include <stdio.h>
#include "Movie.h"

int main()
{
    Movie film1;

    MovieSetRating(&film1, 2);
    MovieSetRelease(&film1, 2010);
    MovieRatingPrint(film1);

    return 0;
}