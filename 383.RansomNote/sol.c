bool canConstruct(char* ransomNote, char* magazine) {
    int count[26] = {0};
    int len1 = strlen(ransomNote);
    int len2 = strlen(magazine);
    int i;
    
    for(i = 0; i < len2; i++) {
        count[magazine[i]-'a']++;
    }
    for(i = 0; i < len1; i++) {
        if((--count[ransomNote[i]-'a']) < 0) return false;
    }
    return true;
}