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
    int notevalue = 8; //base type/value of note
    int eighths = ((notevalue / denom) * nnum);
    //operation to calculate total beats in 8th notes

    // printf("beats: %d", beats);
    return eighths; //return total number of 8th notes in fraction
}

// Calculates frequency (in Hz) of a note; round int
//to make a note shartp mult orig freq by 2^1.12 for flat, divide
int frequency(string note)
{
    //inputs a note, outputs in integer e.g "A#4": parse string: figure out note and octave; calculate the hertz frequency of not in octave; return hertz (A440Hz) value as integer
    //semitones move up: mult frequency by 2^1/12 and move down divide frequency by 2^1/12
    char letter = note[0]; //extracts the 'letter' of the note
    char octave; //declares what will hold octave number
    char accidental; //declares what will hold # or b
    float frequency = 0.; //declared frequency

    if (strlen(note)  == 3) //if note has 3 characters
    {
        octave = atoi(&note[2]); //note[2] converted to int = octave
    }

    else
    {
        octave = atoi(&note[1]); //other note[1] converted to int = octave
    }

    if (strlen(note)  == 3) //if note has 3 characters
    {
        accidental = note[1]; //note[1] = accidental
    }

    else
    {
        accidental = 0; //not accidental
    }

    float base = 0.0; //declares base for frequency
    float powerof = (1.0 / 12.0); //defines incrementor for accidentals

    float powwow = (pow(2, (powerof)));
    //equation to determine value to add to base if accidentals exist

    //iterate thru letter of string to determine base value
    if (letter == 'C')
    {
        base = 16.35 * (pow(2, octave));
    }

    else if (letter == 'D')
    {
        base = 18.35 * (pow(2, octave));
    }

    else if (letter == 'E')
    {
        base = 20.60 * (pow(2, octave));
    }

    else if (letter == 'F')
    {
        base = (21.83 - .01) * (pow(2, octave));
    }

    else if (letter == 'G')
    {
        base = 24.50 * (pow(2, octave));
    }
    else if (letter == 'A')
    {
        base = 27.5 * (pow(2, octave));

    }

    else if (letter == 'B')
    {
        base = 30.87 * (pow(2, octave));
    }
    else
    {
        printf("need another letter");
    }

    //check for accidentals
    if (accidental == 0)
    {
        frequency = (base); //if no accidentals base remaims the same
    }

    else if (accidental == '#')
    {
        frequency = (base * powwow);  //if # perform equation
    }

    else if (accidental == 'b')
    {
        frequency = (base / powwow); //if # perform equation
    }

    return round(frequency); //round frequency to whole number

}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    string emptyline = ""; //empty line defined

    // takes in String return boolean if String is a rest
    if (strcmp(emptyline, s) == 0) //checks if s contains empty line
    {
        return true; //if empty line
    }

    else
    {
        return false; // if not empty line
    }
}