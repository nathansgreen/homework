#!/usr/bin/env python

def Index(s,v):
 e,f=len(s),len(v);
 if (f<=e):
  for i in range(0,e-f+1):
   for j in reversed(range(0,f)):
    if s[i+j]!=v[j]:break
   else:return i
 else:return -1

print Index('substring', 'str')
print Index('n', 'nnn')
print Index('nn n', ' ')
print Index('the end', 'end')
