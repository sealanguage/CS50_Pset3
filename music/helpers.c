// Helper functions for music
//octaves start at C
//figure out what string contains; use A4 as baseline to move up to down

#include <cs50.h>
#include <string.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    //convert char to number
    //takes a fraction as a string,
    //output an int that returns whole number of 1/8 notes in notation
    //e.g. two 1/8s in 1/4/
    //return an int
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
    string emptyline = "";

    // takes in String return boolean if String is a rest
    if (strcmp(s, emptyline) == 0) //what is needed here to ref string
    {
        return true;
    }

    else
    {
    return false;
    }
}
