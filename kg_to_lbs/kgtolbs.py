#!/usr/bin/env python2.7
def kg_to_lb(val):
    """Convert `val` from kilograms to pounds (US)"""
    return val * 2.20462262

mykg = float(raw_input("Enter weight in kg: "))
print '%.2fkg is %.2flb' % (mykg, kg_to_lb(mykg))
