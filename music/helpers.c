// Helper functions for music
//octaves start at C
//figure out what string contains; use A4 as baseline to move up to down

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int nnum = atoi(&fraction[0]); //extract numerator
    int denom = atoi(&fraction[2]);//extract denominator
    int eighths = ((8/denom) * nnum);
    //operation to calculate total beats in 8th notes

    // printf("beats: %d", beats);
    return eighths; //return total number of 8th notes in fraction
}

// Calculates frequency (in Hz) of a note; round int
//to make a note shartp mult orig freq by 2^1.12 for flat, divide
int frequency(string note)
{
    // inputs a note, outputs in integer e.g "A#4": parse string: figure out note and octave; calculate the hertz frequency of not in octave; return hertz (A440Hz) value as integer
    //semitones move up: mult frequency by 2^1/12 and move down divide frequency by 2^1/12
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    string emptyline = ""; //empty line defined

    // takes in String return boolean if String is a rest
    if (strcmp(s, emptyline) == 0) //checks if s contains empty line
    {
        return 0; //if empty line
    }

    else
    {
    return 1; // if not empty line
    }
}
