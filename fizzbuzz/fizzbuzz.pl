#!/usr/bin/env perl
# Copyright 2015 Nathan Green

my $s = '';
# for my $j (1..100000) {
for my $i (1..100) {
    if ($i % 3 == 0) { $s .= 'fizz'; }
    if ($i % 5 == 0) { $s .= 'buzz'; }
    if (length($s) == 0) { $s .= $i; }
    $s .= "\n";
    print $s;
    $s = ''
}
