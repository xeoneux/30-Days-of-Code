#!/bin/python3

import sys

S = input().strip()
try:
    print(int(S))
except ValueError:
    print("Bad String")
