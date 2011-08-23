  /*

  Functions for traversing the solarium structures and drawing them to the 
  hardware.

  */

#ifndef __SOLARIUM_DRAW_H__
#define __SOLARIUM_DRAW_H__

#include <color_map.h>

// Copy the back buffer to the screen
void draw (void);

// Draw COLOR_MAP_SIZE concentric circles (or however many map to actual beams) around
// the given center. 
// color_map must be an array of COLOR_MAP_SIZE color_t structs
void draw_circles (coordinates_t *center_pos, color_t color_map[]);

// Clear the screen buffer (make it black)
void clear (void);

// Some conversions
int compass_to_lat (int deg);
int compass_to_lon (int deg);

#endif
