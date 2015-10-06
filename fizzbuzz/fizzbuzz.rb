#!/usr/bin/env ruby
# Copyright 2015 Nathan Green

s = ''
(1..100000).each{|j|
(1..100).each{|i|
  if i % 3 == 0 then s << 'fizz' end
  if i % 5 == 0 then s << 'buzz' end
  if (s.length == 0) then s << i.to_s end
  puts s
  s.clear
}}
