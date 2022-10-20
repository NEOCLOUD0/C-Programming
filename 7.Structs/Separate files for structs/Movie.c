#include <stdio.h>
#include "Movie.h"

void MovieSetRating(Movie *film, int rating)
{
    (*film).rating = rating;
}

void MovieSetRelease(Movie *film, int release)
{
    (*film).release = release;
}

void MovieRatingPrint(Movie film)
{
    printf("%d star\n", film.rating);
}