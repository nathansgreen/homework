#!/usr/bin/env perl
# Copyright 2015 Nathan Green
use 5.18;
print Index('substring', 'str') . "\n";
print Index('n','nnn')."\n";
print Index('nnn','n')."\n";
print index('nn n',' ')."\n";
sub Index{$r=-1;@s=unpack('C*',shift);@v=unpack('C*',shift);o:for$i(0..(@s-@v)){for$j(reverse(0,@v-1)){if($s[$i+$j]!=$v[$j]){next o;}}$r=$i;last;}$r;}

sub myIndex2 {
    my ($str,$srch)=(shift,shift);
    my $r = -1;
    print @str ."/".@srch. "\n";
outer: for my $i (0 .. (@str - @srch)) {
        print @srch."aa\n";
        for my $j (reverse(0..@srch-1)) {
            print $j."bb\n";
            if ($str[$i + $j] != $srch[$j]) {
                next outer;
            }
        }
        $r = $i; last;
    }
    $r;
}
