#include "BetaGo.h"

const int R_PAWN_value[10][9] = {
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   50,     50,     50,     50,     50,     50,     50,     50,     50},
    {   50,     80,     120,    120,    120,    120,    120,    80,     50},
    {   50,     80,     120,    250,    250,    250,    120,    80,     50},
    {   50,     80,     120,    250,    250,    250,    120,    80,     50}
};  

const int B_PAWN_value[10][9] = {
    {   50,     80,     120,    250,    250,    250,    120,    80,     50},
    {   50,     80,     120,    250,    250,    250,    120,    80,     50},
    {   50,     80,     120,    120,    120,    120,    120,    80,     50},
    {   50,     50,     50,     50,     50,     50,     50,     50,     50},
    {   50,     50,     50,     50,     50,     50,     50,     50,     50},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0},
    {   0,      0,      0,      0,      0,      0,      0,      0,      0}
}

