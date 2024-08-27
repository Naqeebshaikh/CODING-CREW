class Solution {
    String reverseVowels(String s) {
    char word[]=s.toCharArray();
    int start=0;
    int end=s.length()-1;
    String vowels="aeiouAEIOU";
    while(start<end)
    {
        while(start<end && vowels.indexOf(word[start])==-1)
        {
            start++;
        }
        while(start<end&&vowels.indexOf(word[end])==-1)
        {
            end--;
        }
        char Temp;
        Temp=word[start];
        word[start]=word[end];
        word[end]=Temp;
        start++;
        end--;

    }
    String answer=new String(word);
    return answer;
}
}
 
