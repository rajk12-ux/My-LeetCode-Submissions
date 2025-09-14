class Solution {
    public boolean wordPattern(String pattern, String s) {
        List<String> sv = new ArrayList<>();
        Scanner ss = new Scanner(s);
        while(ss.hasNext()){
            String w = ss.next();
            sv.add(w);
        }
        ss.close();

        if(pattern.length() != sv.size()) return false;

        HashMap<Character, String> maps = new HashMap<>();
        for(int i = 0; i < pattern.length(); i++){
            if(!maps.containsKey(pattern.charAt(i))) {
                maps.put(pattern.charAt(i), sv.get(i));
            } else if(!maps.get(pattern.charAt(i)).equals(sv.get(i))) {
                return false;
            }
        }

        HashMap<String, Character> nmaps = new HashMap<>();
        for(int i = 0; i < sv.size(); i++){
            if(!nmaps.containsKey(sv.get(i))) {
                nmaps.put(sv.get(i), pattern.charAt(i));
            } else if(!nmaps.get(sv.get(i)).equals(pattern.charAt(i))) {
                return false;
            }
        }
        return true;
    }
}