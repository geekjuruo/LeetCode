class Solution {
        /**
     * 查找和替换模式
     * @param words
     * @param pattern
     * @return
     */
    public List<String> findAndReplacePattern(String[] words, String pattern) {
        List<String> result = new ArrayList<>();
        char[] patternChars = pattern.toCharArray();
        for (String word : words) {
            char[] wordChars = word.toCharArray();
            //是否匹配
            boolean match = true;
            //用于存储映射关系的Map
            Map<Character, Character> map = new HashMap<>();
            for (int i = 0; i < patternChars.length; i++) {
                char p = patternChars[i];
                char w = wordChars[i];
                if (map.containsKey(p)) {//模式中的字母是否已经映射已经被映射
                    char value = map.get(p);
                    if (value != w) {
                        match = false;
                        break;
                    }
                } else {
                    if(map.containsValue(w)){//判断单词中的字母是否被映射，防止模式多个字母都映射单词中的同一个字母
                        match = false;
                        break;
                    }else {
                        map.put(p, w);
                    }
                }
            }
            if (match) {
                result.add(word);
            }
        }
        return result;
    }
}


