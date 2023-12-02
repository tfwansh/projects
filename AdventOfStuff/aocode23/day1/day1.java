import java.util.*;
import java.io.*;

public class Main {
    public static void main(String args[]) throws IOException {
        System.out.println("Sum part 1: " + sumOfDigits());
        System.out.println("Sum part 2: " + sumOfDigitsAndWords());
    }

    public static int sumOfDigits() throws IOException {
        int sum = 0;
        BufferedReader br = new BufferedReader(new FileReader("file.txt"));
        String str;
        while ((str = br.readLine()) != null) {
            int firstDigit = -1, lastDigit = -1;
            for (int i = 0; i < str.length(); i++) {
                if (Character.isDigit(str.charAt(i))) {
                    firstDigit = Character.getNumericValue(str.charAt(i));
                    break;
                }
            }
            for (int i = str.length() - 1; i >= 0; i--) {
                if (Character.isDigit(str.charAt(i))) {
                    lastDigit = Character.getNumericValue(str.charAt(i));
                    break;
                }
            }
            if (firstDigit != -1 && lastDigit != -1) {
                sum += firstDigit * 10 + lastDigit;
            }
        }
        br.close();
        return sum;
    }

    public static int sumOfDigitsAndWords() throws IOException {
        int sum = 0;
        String Narr1[] = {"1", "one", "2", "two", "3", "three", "4", "four", "5", "five", "6", "six", "7", "seven", "8", "eight", "9", "nine"};
        Map<String, Integer> digitMap = new HashMap<>();
        for (int i = 0; i <= 8; i++) {
            digitMap.put(Narr1[i * 2], i + 1);
            digitMap.put(Narr1[i * 2 + 1], i + 1);
        }
        BufferedReader br = new BufferedReader(new FileReader("file.txt"));
        String str;
        while ((str = br.readLine()) != null) {
            int firstDigit = -1, lastDigit = -1;
            int firstDigitIndex = -1, lastDigitIndex = -1;
            for (String digit : digitMap.keySet()) {
                int index = str.indexOf(digit);
                if (index != -1 && (firstDigitIndex == -1 || index < firstDigitIndex)) {
                    firstDigitIndex = index;
                    firstDigit = digitMap.get(digit);
                }
                index = str.lastIndexOf(digit);
                if (index != -1 && index > lastDigitIndex) {
                    lastDigitIndex = index;
                    lastDigit = digitMap.get(digit);
                }
            }
            if (firstDigit != -1 && lastDigit != -1) {
                sum += firstDigit * 10 + lastDigit;
            }
        }
        br.close();
        return sum;
    }
}

