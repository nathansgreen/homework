//package com.google.challenges;
import static java.lang.System.out;

public class Answer {
    public static void main(String... args) {
        out.println(answer(1)); // 8 = 1 + 7
        out.println(answer(2)); // 57 = 1 + 7 + 49
        out.println(answer(3)); // 400 = 1 + 7 + 49 + 343
        out.println(answer(4)); // = 1 + 7 + 49 + 343 + 2401
    }

    static final int MAX_FOLLOWERS = 7;

    public static int answer(int x) {
        int leaders = 1;
        int ans = 1;
        for (int i = 0; i < x; ++i) {
          ans += leaders * MAX_FOLLOWERS;
          leaders *= MAX_FOLLOWERS;
        }
        return ans;
    }
}
