#ifndef MOVIE_H
#define MOVIE_H

typedef struct Movie_struct
{
    int rating;
    int release;
} Movie;

void MovieSetRating(Movie *film, int rating);
void MovieSetRelease(Movie *film, int release);
void MovieRatingPrint(Movie film);

#endif