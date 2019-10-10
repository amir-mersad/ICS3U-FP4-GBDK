// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program displays a sprite on a gameboy

#include <stdio.h>
#include <gb/gb.h>
#include "tiles.c"
#include "map.c"


void main() {
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, backgroundmap);


    SHOW_BKG;
    DISPLAY_ON;


    whiel(1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
