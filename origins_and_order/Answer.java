//package com.google.challenges;
import java.util.ArrayList;
import java.util.GregorianCalendar;
import java.util.Iterator;
import static java.lang.System.out;
import static java.lang.Math.abs;
// support java.time already!!

public class Answer {
    public static void main(String... args) {
        out.println(answer(2, 30, 3));
        out.println(answer(1, 30, 30));
        out.println(answer(1, 1, 1));
        out.println(answer(1, 13, 99));
        out.println(answer(19, 19, 3));
        out.println(answer(1, 32, 13));
        out.println(answer(12, 31, 32));
    }

    public static String answer(int x, int y, int z) {
        ArrayList<GregorianCalendar> kals = new ArrayList<>();
        checkPass(kals, x, y, z);
        checkPass(kals, x, z, y);
        checkPass(kals, y, z, x);
        checkPass(kals, y, x, z);
        checkPass(kals, z, x, y);
        checkPass(kals, z, y, x);
        if (kals.size() > 0) {
            Iterator<GregorianCalendar> iter = kals.iterator();
            GregorianCalendar kal = iter.next();
            while (iter.hasNext()) {
                if (!kal.equals(iter.next()))
                    return "Ambiguous";
            }
            return String.format("%02d/%02d/%02d",
                1 + kal.get(GregorianCalendar.MONTH),
                kal.get(GregorianCalendar.DAY_OF_MONTH),
                abs(1900 - kal.get(GregorianCalendar.YEAR)));
        }
        return "Ambiguous";
    }

    static boolean checkPass(ArrayList<GregorianCalendar> l, int year, int month, int day) {
        GregorianCalendar kal = new GregorianCalendar();
        kal.setLenient(false);
        try {
            kal.set(1900 + year, month - 1, day);
            kal.get(GregorianCalendar.YEAR);
            kal.get(GregorianCalendar.MONTH);
            kal.get(GregorianCalendar.DAY_OF_MONTH);
        } catch (RuntimeException ex) {
            return false;
        }
        l.add(kal);
        return true;
    }
}
