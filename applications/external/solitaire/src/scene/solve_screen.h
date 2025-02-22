#pragma once
#include <furi.h>
#include <input/input.h>

void start_solve_screen(void* data);
void render_solve_screen(void* data);
void update_solve_screen(void* data);
void input_solve_screen(void* data, InputKey key, InputType type);
