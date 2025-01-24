#ifndef UTILS_H
#define UTILS_H
#include <iostream>
#include <string>

void cls();
void timer(int sec);
void text(const std::string &text, int delay_ms);
std::string get_name();

#endif // UTILS_H