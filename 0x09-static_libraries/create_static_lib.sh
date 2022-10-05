#!/bin/bash
gc -Wall -Werror -pedantic -Wextra-c *.c
ar -rc liball.a *.a
