import java.util.*;

class Solution {
    public String reverseVowels(String s) {
        ArrayList<Integer> vowel_indexes = new ArrayList<>();
        int l = s.length();

        for (int i = 0; i < l; i++) {
            switch (s.charAt(i)) {
                case 'a': case 'A':
                case 'e': case 'E':
                case 'i': case 'I':
                case 'o': case 'O':
                case 'u': case 'U':
                    vowel_indexes.add(i);
                    break;
            }
        }

        char[] arr = s.toCharArray();
        int vl = vowel_indexes.size();

        for (int i = 0; i < vl / 2; i++) {
            int x = vowel_indexes.get(i);
            int y = vowel_indexes.get(vl - 1 - i);

            char temp = arr[x];
            arr[x] = arr[y];
            arr[y] = temp;
        }

        return new String(arr);
    }
}